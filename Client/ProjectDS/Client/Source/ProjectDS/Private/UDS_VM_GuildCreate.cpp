// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 50

// SetCheckBoxJoinAuto_WrapperImpl @ 14b64e730

void __cdecl UDS_VM_GuildCreate::SetCheckBoxJoinAuto_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa0) = *(undefined1 *)((longlong)param_1 + 0xa0);
    iStack_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(char *)((longlong)param_1 + 0xa0) = *(char *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetCheckBoxJoinApply_WrapperImpl @ 14b64e740

void __cdecl UDS_VM_GuildCreate::SetCheckBoxJoinApply_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)((longlong)param_1 + 0xa1);
    iStack_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(char *)((longlong)param_1 + 0xa1) = *(char *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetCheckBoxJoinPrivate_WrapperImpl @ 14b64e750

void __cdecl UDS_VM_GuildCreate::SetCheckBoxJoinPrivate_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa2) = *(undefined1 *)((longlong)param_1 + 0xa2);
    iStack_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(char *)((longlong)param_1 + 0xa2) = *(char *)param_2;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetClickGuildCreateButton_WrapperImpl @ 14b64e760

void __cdecl UDS_VM_GuildCreate::SetClickGuildCreateButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr aFStackX_10 [3];
  code *pcStack_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_78;
  FDS_Text FStack_60;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_CommonPopupManager::GetInst();
    if (this != (UDS_CommonPopupManager *)0x0) {
      UDS_CommonPopupManager::CreateCommonPopup(this);
      bVar1 = FWeakObjectPtr::IsValid(aFStackX_10);
      if (bVar1) {
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3a9cb);
        UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3a9cc);
        UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        uStack_80._0_4_ = 0;
        pcStack_88 = OnCreatePopup_Cancel;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildCreate>(&TStack_78,param_1,(pmf_b4df1a14 *)&pcStack_88)
        ;
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
        pcStack_88 = OnCreatePopup_Confrim;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildCreate>(&TStack_78,param_1,(pmf_b4df1a14 *)&pcStack_88)
        ;
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
      }
    }
  }
  return;
}

// SetClickGuildNameEditboxResetButton_WrapperImpl @ 14b64e770

void __cdecl
UDS_VM_GuildCreate::SetClickGuildNameEditboxResetButton_WrapperImpl(void *param_1,void *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FText *pFVar6;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  pFVar6 = FText::GetEmpty();
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildName.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xb8),pFVar6,None);
  if (!bVar5) {
    pIVar1 = (pFVar6->TextData).Reference;
    pIVar2 = *(ITextData **)((longlong)param_1 + 0xb8);
    if (pIVar2 != pIVar1) {
      *(ITextData **)((longlong)param_1 + 0xb8) = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)((longlong)param_1 + 0xc0) = pFVar6->Flags;
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetTextCommittedEvent_GuildName_WrapperImpl @ 14b64e780

void __cdecl
UDS_VM_GuildCreate::SetTextCommittedEvent_GuildName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_10 [8];
  
  if ((*(int *)((longlong)param_2 + 0x10) == 2) || (*(int *)((longlong)param_2 + 0x10) == 1)) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xb8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xb8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xc0) = *(undefined4 *)((longlong)param_2 + 8);
  }
  return;
}

// SetTextCommittedEvent_GuildIntroduction_WrapperImpl @ 14b64e790

void __cdecl
UDS_VM_GuildCreate::SetTextCommittedEvent_GuildIntroduction_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_10 [8];
  
  if ((*(int *)((longlong)param_2 + 0x10) == 2) || (*(int *)((longlong)param_2 + 0x10) == 1)) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 200);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 200) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xd0) = *(undefined4 *)((longlong)param_2 + 8);
  }
  return;
}

// SetTextCommittedEvent_GuildNotice_WrapperImpl @ 14b64e7a0

void __cdecl
UDS_VM_GuildCreate::SetTextCommittedEvent_GuildNotice_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_10 [8];
  
  if ((*(int *)((longlong)param_2 + 0x10) == 2) || (*(int *)((longlong)param_2 + 0x10) == 1)) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xd8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xd8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xe0) = *(undefined4 *)((longlong)param_2 + 8);
  }
  return;
}

// SetTextCommittedEvent_GuildJoinLimitLevel_WrapperImpl @ 14b64e7b0

void __cdecl
UDS_VM_GuildCreate::SetTextCommittedEvent_GuildJoinLimitLevel_WrapperImpl
          (void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_10 [8];
  
  if ((*(int *)((longlong)param_2 + 0x10) == 2) || (*(int *)((longlong)param_2 + 0x10) == 1)) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xe8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xe8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xf0) = *(undefined4 *)((longlong)param_2 + 8);
  }
  return;
}

// StaticClass @ 14b64e7c0

UClass * __cdecl UDS_VM_GuildCreate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildCreate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildCreate",
               &Z_Registration_Info_UClass_UDS_VM_GuildCreate.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildCreate,0x648,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildCreate>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildCreate>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildCreate.InnerSingleton;
}

// UDS_VM_GuildCreate @ 14b651c80

UDS_VM_GuildCreate * __thiscall
UDS_VM_GuildCreate::UDS_VM_GuildCreate(UDS_VM_GuildCreate *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildCreate__6B_;
  FText::FText(&this->Txt_GuildName);
  FText::FText(&this->Txt_GuildIntroduction);
  FText::FText(&this->Txt_GuildNotice);
  FText::FText(&this->Txt_GuildConditionLevel);
  (this->FixedTxt_GuildName).StringTableType = StringUi;
  (this->FixedTxt_GuildName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildName).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildName).DateTime.Ticks = 0;
  (this->FixedTxt_GuildName).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildName).TimeExpressionType = None;
  (this->FixedTxt_GuildName).IsExpression = false;
  (this->FixedTxt_GuildName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildName).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildName).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildName).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildName).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNameHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNameHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNameHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNameHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNameHint).TimeExpressionType = None;
  (this->FixedTxt_GuildNameHint).IsExpression = false;
  (this->FixedTxt_GuildNameHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNameHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNameHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNameHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNameHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNameHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNameGuide).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNameGuide).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNameGuide).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNameGuide).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNameGuide).TimeExpressionType = None;
  (this->FixedTxt_GuildNameGuide).IsExpression = false;
  (this->FixedTxt_GuildNameGuide).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNameGuide).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNameGuide).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNameGuide).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_GuildNameGuide).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNameGuide).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildIntroduction).DateTime.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeExpressionType = None;
  (this->FixedTxt_GuildIntroduction).IsExpression = false;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildIntroductionHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildIntroductionHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildIntroductionHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildIntroductionHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildIntroductionHint).TimeExpressionType = None;
  (this->FixedTxt_GuildIntroductionHint).IsExpression = false;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNotice).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeExpressionType = None;
  (this->FixedTxt_GuildNotice).IsExpression = false;
  (this->FixedTxt_GuildNotice).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildName).StringTableID = 0x3a9c3;
  (this->FixedTxt_GuildNameHint).StringTableType = StringUi;
  (this->FixedTxt_GuildNameHint).StringTableID = 0x3a9c7;
  (this->FixedTxt_GuildNameGuide).StringTableType = StringUi;
  (this->FixedTxt_GuildNameGuide).StringTableID = 0x3aa43;
  (this->FixedTxt_GuildIntroduction).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroduction).StringTableID = 0x3a9c4;
  (this->FixedTxt_GuildIntroductionHint).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroductionHint).StringTableID = 0x3a9c8;
  (this->FixedTxt_GuildNotice).StringTableType = StringUi;
  (this->FixedTxt_GuildNotice).StringTableID = 0x3aa05;
  (this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNoticeHint).StringTableType = StringUi;
  (this->FixedTxt_GuildNoticeHint).StringTableID = 0x3aa06;
  (this->FixedTxt_GuildNoticeHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNoticeHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNoticeHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNoticeHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNoticeHint).TimeExpressionType = None;
  (this->FixedTxt_GuildNoticeHint).IsExpression = false;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinType).StringTableType = StringUi;
  (this->FixedTxt_JoinType).StringTableID = 0x3a9c5;
  (this->FixedTxt_JoinType).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinType).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinType).DateTime.Ticks = 0;
  (this->FixedTxt_JoinType).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinType).TimeExpressionType = None;
  (this->FixedTxt_JoinType).IsExpression = false;
  (this->FixedTxt_JoinType).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinType).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinType).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinType).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinType).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinType).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinAuto).StringTableType = StringUi;
  (this->FixedTxt_JoinAuto).StringTableID = 0x3a9b0;
  (this->FixedTxt_JoinAuto).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinAuto).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinAuto).DateTime.Ticks = 0;
  (this->FixedTxt_JoinAuto).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinAuto).TimeExpressionType = None;
  (this->FixedTxt_JoinAuto).IsExpression = false;
  (this->FixedTxt_JoinAuto).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinAuto).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinAuto).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinAuto).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinAuto).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinAuto).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinApply).StringTableType = StringUi;
  (this->FixedTxt_JoinApply).StringTableID = 0x3a9b1;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApply).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeExpressionType = None;
  (this->FixedTxt_JoinApply).IsExpression = false;
  (this->FixedTxt_JoinApply).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinPrivate).StringTableType = StringUi;
  (this->FixedTxt_JoinPrivate).StringTableID = 0x3a9c9;
  (this->FixedTxt_JoinPrivate).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinPrivate).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinPrivate).DateTime.Ticks = 0;
  (this->FixedTxt_JoinPrivate).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinPrivate).TimeExpressionType = None;
  (this->FixedTxt_JoinPrivate).IsExpression = false;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinPrivate).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinPrivate).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinPrivate).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinCondition).StringTableType = StringUi;
  (this->FixedTxt_JoinCondition).StringTableID = 0x3a9c6;
  (this->FixedTxt_JoinCondition).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinCondition).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinCondition).DateTime.Ticks = 0;
  (this->FixedTxt_JoinCondition).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinCondition).TimeExpressionType = None;
  (this->FixedTxt_JoinCondition).IsExpression = false;
  (this->FixedTxt_JoinCondition).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinCondition).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinCondition).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinCondition).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinCondition).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinCondition).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinConditionHint).StringTableType = StringUi;
  (this->FixedTxt_JoinConditionHint).StringTableID = 0x3a9ca;
  (this->FixedTxt_JoinConditionHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinConditionHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinConditionHint).DateTime.Ticks = 0;
  (this->FixedTxt_JoinConditionHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinConditionHint).TimeExpressionType = None;
  (this->FixedTxt_JoinConditionHint).IsExpression = false;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Create).StringTableType = StringUi;
  (this->FixedTxt_Create).StringTableID = 0x3a9cb;
  (this->FixedTxt_Create).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Create).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Create).DateTime.Ticks = 0;
  (this->FixedTxt_Create).TimeSpan.Ticks = 0;
  (this->FixedTxt_Create).TimeExpressionType = None;
  (this->FixedTxt_Create).IsExpression = false;
  (this->FixedTxt_Create).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Create).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Create).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Create).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Create).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Create).FormatArgs.ArrayMax = 0;
  this->CheckBoxJoinAuto = false;
  this->CheckBoxJoinApply = false;
  (this->CheckBoxJoinPrivate).bIsActivate = false;
  (this->ClickGuildCreateButton)._padding_ = '\0';
  (this->ClickGuildCreateButton).bIsCustomSelected = false;
  (this->ClickGuildCreateButton).bIsLacked = false;
  (this->ClickGuildCreateButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildCreateButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildCreateButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildCreateButton).Delegate.field_0x10 = 0;
  (this->ClickGuildNameEditboxResetButton)._padding_ = '\0';
  (this->ClickGuildNameEditboxResetButton).bIsCustomSelected = false;
  (this->ClickGuildNameEditboxResetButton).bIsLacked = false;
  (this->ClickGuildNameEditboxResetButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildNameEditboxResetButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildNameEditboxResetButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildNameEditboxResetButton).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextCommittedEvent_GuildName).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildIntroduction).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildNotice).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildJoinLimitLevel).NewText);
  (this->EntryBindingEventField_MarkTileView).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MarkTileView).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MarkTileView).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.ArrayMax = 0;
  (this->VM_MoneyDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  (this->M_CoinDisplay).field0_0x0.DebugPtr = (UDS_M_MoneyDisplay *)0x0;
  this->SelectGuildMarkType = None;
  return this;
}

// UDS_VM_GuildCreate @ 14b652210

UDS_VM_GuildCreate * __thiscall
UDS_VM_GuildCreate::UDS_VM_GuildCreate(UDS_VM_GuildCreate *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildCreate__6B_;
  FText::FText(&this->Txt_GuildName);
  FText::FText(&this->Txt_GuildIntroduction);
  FText::FText(&this->Txt_GuildNotice);
  FText::FText(&this->Txt_GuildConditionLevel);
  (this->FixedTxt_GuildName).StringTableType = StringUi;
  (this->FixedTxt_GuildName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildName).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildName).DateTime.Ticks = 0;
  (this->FixedTxt_GuildName).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildName).TimeExpressionType = None;
  (this->FixedTxt_GuildName).IsExpression = false;
  (this->FixedTxt_GuildName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildName).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildName).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildName).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildName).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNameHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNameHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNameHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNameHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNameHint).TimeExpressionType = None;
  (this->FixedTxt_GuildNameHint).IsExpression = false;
  (this->FixedTxt_GuildNameHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNameHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNameHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNameHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNameHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNameHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNameGuide).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNameGuide).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNameGuide).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNameGuide).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNameGuide).TimeExpressionType = None;
  (this->FixedTxt_GuildNameGuide).IsExpression = false;
  (this->FixedTxt_GuildNameGuide).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNameGuide).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNameGuide).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNameGuide).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_GuildNameGuide).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNameGuide).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildIntroduction).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildIntroduction).DateTime.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildIntroduction).TimeExpressionType = None;
  (this->FixedTxt_GuildIntroduction).IsExpression = false;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildIntroductionHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildIntroductionHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildIntroductionHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildIntroductionHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildIntroductionHint).TimeExpressionType = None;
  (this->FixedTxt_GuildIntroductionHint).IsExpression = false;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildIntroductionHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNotice).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNotice).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNotice).TimeExpressionType = None;
  (this->FixedTxt_GuildNotice).IsExpression = false;
  (this->FixedTxt_GuildNotice).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildName).StringTableID = 0x3a9c3;
  (this->FixedTxt_GuildNameHint).StringTableType = StringUi;
  (this->FixedTxt_GuildNameHint).StringTableID = 0x3a9c7;
  (this->FixedTxt_GuildNameGuide).StringTableType = StringUi;
  (this->FixedTxt_GuildNameGuide).StringTableID = 0x3aa43;
  (this->FixedTxt_GuildIntroduction).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroduction).StringTableID = 0x3a9c4;
  (this->FixedTxt_GuildIntroductionHint).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroductionHint).StringTableID = 0x3a9c8;
  (this->FixedTxt_GuildNotice).StringTableType = StringUi;
  (this->FixedTxt_GuildNotice).StringTableID = 0x3aa05;
  (this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNotice).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildNoticeHint).StringTableType = StringUi;
  (this->FixedTxt_GuildNoticeHint).StringTableID = 0x3aa06;
  (this->FixedTxt_GuildNoticeHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildNoticeHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildNoticeHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildNoticeHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildNoticeHint).TimeExpressionType = None;
  (this->FixedTxt_GuildNoticeHint).IsExpression = false;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildNoticeHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildNoticeHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinType).StringTableType = StringUi;
  (this->FixedTxt_JoinType).StringTableID = 0x3a9c5;
  (this->FixedTxt_JoinType).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinType).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinType).DateTime.Ticks = 0;
  (this->FixedTxt_JoinType).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinType).TimeExpressionType = None;
  (this->FixedTxt_JoinType).IsExpression = false;
  (this->FixedTxt_JoinType).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinType).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinType).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinType).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinType).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinType).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinAuto).StringTableType = StringUi;
  (this->FixedTxt_JoinAuto).StringTableID = 0x3a9b0;
  (this->FixedTxt_JoinAuto).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinAuto).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinAuto).DateTime.Ticks = 0;
  (this->FixedTxt_JoinAuto).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinAuto).TimeExpressionType = None;
  (this->FixedTxt_JoinAuto).IsExpression = false;
  (this->FixedTxt_JoinAuto).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinAuto).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinAuto).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinAuto).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinAuto).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinAuto).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinApply).StringTableType = StringUi;
  (this->FixedTxt_JoinApply).StringTableID = 0x3a9b1;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApply).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApply).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApply).TimeExpressionType = None;
  (this->FixedTxt_JoinApply).IsExpression = false;
  (this->FixedTxt_JoinApply).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApply).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApply).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinPrivate).StringTableType = StringUi;
  (this->FixedTxt_JoinPrivate).StringTableID = 0x3a9c9;
  (this->FixedTxt_JoinPrivate).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinPrivate).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinPrivate).DateTime.Ticks = 0;
  (this->FixedTxt_JoinPrivate).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinPrivate).TimeExpressionType = None;
  (this->FixedTxt_JoinPrivate).IsExpression = false;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinPrivate).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinPrivate).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinPrivate).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinPrivate).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinCondition).StringTableType = StringUi;
  (this->FixedTxt_JoinCondition).StringTableID = 0x3a9c6;
  (this->FixedTxt_JoinCondition).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinCondition).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinCondition).DateTime.Ticks = 0;
  (this->FixedTxt_JoinCondition).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinCondition).TimeExpressionType = None;
  (this->FixedTxt_JoinCondition).IsExpression = false;
  (this->FixedTxt_JoinCondition).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinCondition).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinCondition).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinCondition).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinCondition).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinCondition).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinConditionHint).StringTableType = StringUi;
  (this->FixedTxt_JoinConditionHint).StringTableID = 0x3a9ca;
  (this->FixedTxt_JoinConditionHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinConditionHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinConditionHint).DateTime.Ticks = 0;
  (this->FixedTxt_JoinConditionHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinConditionHint).TimeExpressionType = None;
  (this->FixedTxt_JoinConditionHint).IsExpression = false;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinConditionHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinConditionHint).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Create).StringTableType = StringUi;
  (this->FixedTxt_Create).StringTableID = 0x3a9cb;
  (this->FixedTxt_Create).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Create).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Create).DateTime.Ticks = 0;
  (this->FixedTxt_Create).TimeSpan.Ticks = 0;
  (this->FixedTxt_Create).TimeExpressionType = None;
  (this->FixedTxt_Create).IsExpression = false;
  (this->FixedTxt_Create).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Create).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Create).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Create).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Create).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Create).FormatArgs.ArrayMax = 0;
  this->CheckBoxJoinAuto = false;
  this->CheckBoxJoinApply = false;
  (this->CheckBoxJoinPrivate).bIsActivate = false;
  (this->ClickGuildCreateButton)._padding_ = '\0';
  (this->ClickGuildCreateButton).bIsCustomSelected = false;
  (this->ClickGuildCreateButton).bIsLacked = false;
  (this->ClickGuildCreateButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildCreateButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildCreateButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildCreateButton).Delegate.field_0x10 = 0;
  (this->ClickGuildNameEditboxResetButton)._padding_ = '\0';
  (this->ClickGuildNameEditboxResetButton).bIsCustomSelected = false;
  (this->ClickGuildNameEditboxResetButton).bIsLacked = false;
  (this->ClickGuildNameEditboxResetButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGuildNameEditboxResetButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGuildNameEditboxResetButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGuildNameEditboxResetButton).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextCommittedEvent_GuildName).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildIntroduction).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildNotice).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildJoinLimitLevel).NewText);
  (this->EntryBindingEventField_MarkTileView).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MarkTileView).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MarkTileView).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ColorTileView).UserObjectList.ArrayMax = 0;
  (this->VM_MoneyDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  (this->M_CoinDisplay).field0_0x0.DebugPtr = (UDS_M_MoneyDisplay *)0x0;
  this->SelectGuildMarkType = None;
  return this;
}

// ~UDS_VM_GuildCreate @ 14b654ae0

void __thiscall UDS_VM_GuildCreate::~UDS_VM_GuildCreate(UDS_VM_GuildCreate *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildCreate__6B_;
  pFVar1 = (this->EntryBindingEventField_ColorTileView).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_MarkTileView).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->TextCommittedEvent_GuildJoinLimitLevel).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->TextCommittedEvent_GuildNotice).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->TextCommittedEvent_GuildIntroduction).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->TextCommittedEvent_GuildName).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickGuildNameEditboxResetButton).Delegate);
  pvVar3 = *(void **)&(this->ClickGuildNameEditboxResetButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGuildNameEditboxResetButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickGuildCreateButton).Delegate);
  pvVar3 = *(void **)&(this->ClickGuildCreateButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGuildCreateButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Create).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Create).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Create).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Create).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_JoinConditionHint).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinConditionHint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinConditionHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinConditionHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinCondition).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinCondition).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinCondition).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinCondition).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinPrivate).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinPrivate).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinPrivate).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinPrivate).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinApply).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinApply).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinApply).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinAuto).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinAuto).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinAuto).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinAuto).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinType).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinType).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinType).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinType).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildNoticeHint).FormatArgs.AllocatorInstance.Data
             ,(this->FixedTxt_GuildNoticeHint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildNoticeHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildNoticeHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildNotice).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildNotice).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildNotice).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildIntroductionHint).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildIntroductionHint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildIntroductionHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildIntroductionHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildIntroduction).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildIntroduction).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildIntroduction).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildNameGuide).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildNameGuide).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildNameGuide).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildNameGuide).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildNameHint).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildNameHint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildNameHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildNameHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildName).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildName).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Txt_GuildConditionLevel).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Txt_GuildNotice).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Txt_GuildIntroduction).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Txt_GuildName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b657190

IClassDescriptor * __thiscall
UDS_VM_GuildCreate::GetFieldNotificationDescriptor(UDS_VM_GuildCreate *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildCreate::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b657910

UClass * __cdecl UDS_VM_GuildCreate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildCreate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildCreate",
               &Z_Registration_Info_UClass_UDS_VM_GuildCreate.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildCreate,0x648,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildCreate>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildCreate>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildCreate.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildCreate @ 14b6582a0

void __cdecl UDS_VM_GuildCreate::StaticRegisterNativesUDS_VM_GuildCreate(void)

{
  return;
}

// BindModel @ 14be75590

void __thiscall UDS_VM_GuildCreate::BindModel(UDS_VM_GuildCreate *this)

{
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 TVar1;
  UDS_UIEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FWeakObjectPtr local_res10;
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 local_res18;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    TVar1 = (TObjectPtr<UDS_VM_Common_TabGroup>_u_0)(this->TabGroup).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                        ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar2->OnClickTabIndex).Subscriptions,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildCreate>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
               this_00,(UDS_VM_GuildCreate *)&local_res18.ObjectPtr,(pmf_1e3cf23c *)this);
  }
  return;
}

// InitViewModel @ 14be8cb90

void __thiscall UDS_VM_GuildCreate::InitViewModel(UDS_VM_GuildCreate *this)

{
  return;
}

// OnCheckBoxJoinApply @ 14be919d0

void __thiscall
UDS_VM_GuildCreate::OnCheckBoxJoinApply(UDS_VM_GuildCreate *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsJoinApply = this->IsJoinApply;
    local_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->IsJoinApply = param_1->bIsActivate;
  this->IsJoinAuto = false;
  local_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsPrivate = false;
  local_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCheckBoxJoinAuto @ 14be91bb0

void __thiscall
UDS_VM_GuildCreate::OnCheckBoxJoinAuto(UDS_VM_GuildCreate *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsJoinAuto = this->IsJoinAuto;
    local_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->IsJoinAuto = param_1->bIsActivate;
  this->IsJoinApply = false;
  local_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsPrivate = false;
  local_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCheckBoxJoinPrivate @ 14be91d80

void __thiscall
UDS_VM_GuildCreate::OnCheckBoxJoinPrivate(UDS_VM_GuildCreate *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsPrivate = this->IsPrivate;
    local_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->IsPrivate = param_1->bIsActivate;
  this->IsJoinAuto = false;
  local_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsJoinApply = false;
  local_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickGuildCreateButton @ 14be94950

void __thiscall
UDS_VM_GuildCreate::OnClickGuildCreateButton(UDS_VM_GuildCreate *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  code *local_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_CommonPopupManager::GetInst();
    if (this_00 != (UDS_CommonPopupManager *)0x0) {
      UDS_CommonPopupManager::CreateCommonPopup(this_00);
      bVar1 = FWeakObjectPtr::IsValid(local_res10);
      if (bVar1) {
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9cb);
        UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9cc);
        UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        uStack_80._0_4_ = 0;
        local_88 = OnCreatePopup_Cancel;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildCreate>(&local_78,this,(pmf_b4df1a14 *)&local_88);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
        local_88 = OnCreatePopup_Confrim;
        pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_GuildCreate>(&local_78,this,(pmf_b4df1a14 *)&local_88);
        UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
        pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
      }
    }
  }
  return;
}

// OnClickGuildMarkTabIndex @ 14be94f30

void __thiscall UDS_VM_GuildCreate::OnClickGuildMarkTabIndex(UDS_VM_GuildCreate *this,int param_1)

{
  this->SelectGuildMarkType = (char)param_1 + Emblem;
  UpdateGuildMarkList(this);
  UpdateGuildMarkColorList(this);
  return;
}

// OnClickGuildNameEditboxResetButton @ 14be95090

void __thiscall
UDS_VM_GuildCreate::OnClickGuildNameEditboxResetButton
          (UDS_VM_GuildCreate *this,FDS_ButtonEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  pFVar6 = FText::GetEmpty();
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildName.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildName,pFVar6,None);
  if (!bVar5) {
    pIVar1 = (pFVar6->TextData).Reference;
    pIVar2 = (this->Txt_GuildName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildName).Flags = pFVar6->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// OnCreatePopup_Cancel @ 14be97c10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildCreate::OnCreatePopup_Cancel
          (UDS_VM_GuildCreate *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OnCreatePopup_Confrim @ 14be97c50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildCreate::OnCreatePopup_Confrim
          (UDS_VM_GuildCreate *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UDS_VM_GuildMark *pUVar3;
  UDS_WindowManager *this_00;
  FDS_GuildCreateInfo *pFVar4;
  FString *pFVar5;
  UDS_GuildManager *this_01;
  wchar_t *_Str;
  float local_res8 [2];
  uint local_res18 [2];
  FString local_78;
  FDS_GuildCreateInfo local_68;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res18,local_res8);
  }
  local_68.GuildName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GuildName.Data.ArrayNum = 0;
  local_68.GuildName.Data.ArrayMax = 0;
  local_68.GuildMarkInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GuildMarkInfo.Data.ArrayNum = 0;
  local_68.GuildMarkInfo.Data.ArrayMax = 0;
  local_68.GuildIntroduction.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GuildIntroduction.Data.ArrayNum = 0;
  local_68.GuildIntroduction.Data.ArrayMax = 0;
  local_68.GuildNotice.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GuildNotice.Data.ArrayNum = 0;
  local_68.GuildNotice.Data.ArrayMax = 0;
  local_68.JoinType = None;
  local_68.JoinLimitLevel = 0;
  pFVar4 = (FDS_GuildCreateInfo *)FText::ToString(&this->Txt_GuildName);
  if (&local_68 != pFVar4) {
    iVar1 = (pFVar4->GuildName).Data.ArrayNum;
    pFVar2 = (pFVar4->GuildName).Data.AllocatorInstance.Data;
    local_68.GuildName.Data.ArrayNum = iVar1;
    if (((iVar1 != 0) || (local_68.GuildName.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,local_68.GuildName.Data.ArrayMax,(ForAnyElementType *)&local_68,iVar1,
                   &local_68.GuildName.Data.ArrayMax), iVar1 != 0)) {
      memcpy(local_68.GuildName.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
    }
  }
  pFVar5 = FText::ToString(&this->Txt_GuildIntroduction);
  if (&local_68.GuildIntroduction != pFVar5) {
    iVar1 = (pFVar5->Data).ArrayNum;
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    local_68.GuildIntroduction.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_68.GuildIntroduction.Data.ArrayMax == 0)) {
      local_68.GuildIntroduction.Data.ArrayNum = 0;
      local_68.GuildIntroduction.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,local_68.GuildIntroduction.Data.ArrayMax,
                 (ForAnyElementType *)&local_68.GuildIntroduction,iVar1,
                 &local_68.GuildIntroduction.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_68.GuildIntroduction.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
      }
    }
  }
  pFVar5 = FText::ToString(&this->Txt_GuildNotice);
  if (&local_68.GuildNotice != pFVar5) {
    iVar1 = (pFVar5->Data).ArrayNum;
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    local_68.GuildNotice.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_68.GuildNotice.Data.ArrayMax == 0)) {
      local_68.GuildNotice.Data.ArrayNum = 0;
      local_68.GuildNotice.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,local_68.GuildNotice.Data.ArrayMax,
                 (ForAnyElementType *)&local_68.GuildNotice,iVar1,
                 &local_68.GuildNotice.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_68.GuildNotice.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
      }
    }
  }
  pFVar5 = FText::ToString(&this->Txt_GuildConditionLevel);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  local_68.JoinLimitLevel = _wtoi(_Str);
  if (this->IsJoinAuto == true) {
    local_68.JoinType = Free;
  }
  else if (this->IsJoinApply == true) {
    local_68.JoinType = Approval;
  }
  else if (this->IsPrivate == true) {
    local_68.JoinType = Private;
  }
  pUVar3 = (this->VM_GuildMark).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_VM_GuildMark *)0x0) {
    pFVar5 = UDS_GuildManager::MakeGuildMarkInfoToJson(&local_78,&pUVar3->GuildMarkInfo);
    if (&local_68.GuildMarkInfo != pFVar5) {
      if (local_68.GuildMarkInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.GuildMarkInfo.Data.AllocatorInstance.Data);
      }
      local_68.GuildMarkInfo.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.GuildMarkInfo.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_68.GuildMarkInfo.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  this_01 = UDS_GuildManager::GetInst();
  if (this_01 != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::SendCreateGuild(this_01,&local_68);
  }
  if (local_68.GuildNotice.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GuildNotice.Data.AllocatorInstance.Data);
  }
  if (local_68.GuildIntroduction.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GuildIntroduction.Data.AllocatorInstance.Data);
  }
  if (local_68.GuildMarkInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GuildMarkInfo.Data.AllocatorInstance.Data);
  }
  if (local_68.GuildName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GuildName.Data.AllocatorInstance.Data);
  }
  return;
}

// OnSetViewModel @ 14be9e6f0

void __thiscall
UDS_VM_GuildCreate::OnSetViewModel
          (UDS_VM_GuildCreate *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FText *this_00;
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  FName FVar6;
  FDS_ViewModelContext_GuildMark *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UDS_M_MoneyDisplay *pUVar11;
  UDS_VM_MoneyDisplay *pUVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  UDS_VM_GuildMark *pUVar15;
  FText *pFVar16;
  undefined1 local_res10 [8];
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> local_118;
  FName local_108;
  int local_100;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FText local_48 [2];
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object == (FDS_ViewModelContext *)0x0) goto LAB_14be9eb44;
  iVar9 = DS_GuildDataHelper::CreateMoneyType();
  iVar10 = DS_GuildDataHelper::CreateMoneyValue();
  pUVar11 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
  if (pUVar11 == (UDS_M_MoneyDisplay *)0x0) {
    pUVar11 = NewObject<UDS_M_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (UDS_M_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (this->M_CoinDisplay).field0_0x0.DebugPtr = pUVar11;
    if (pUVar11 != (UDS_M_MoneyDisplay *)0x0) goto LAB_14be9e793;
  }
  else {
LAB_14be9e793:
    pUVar11->MoneyDisplayType = DisplayWithCheck;
    UDS_M_MoneyDisplay::RefreshData
              ((this->M_CoinDisplay).field0_0x0.DebugPtr,(EDS_MoneyType)iVar9,(longlong)iVar10);
  }
  if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar12 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->VM_MoneyDisplay).field0_0x0.DebugPtr = pUVar12;
    if (pUVar12 != (UDS_VM_MoneyDisplay *)0x0) goto LAB_14be9e7e6;
  }
  else {
LAB_14be9e7e6:
    pUVar11 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
    plVar13 = (longlong *)(**(code **)(pUVar11->_padding_ + 0x310))(pUVar11,local_78);
    lVar2 = *plVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    if (lVar2 != 0) {
      pUVar11 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
      pUVar12 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
      puVar14 = (undefined8 *)(**(code **)(pUVar11->_padding_ + 0x310))(pUVar11,local_68);
      local_88.Object = (FDS_ViewModelContext *)*puVar14;
      local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar14[1];
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar12,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
  }
  if ((this->VM_GuildMark).field0_0x0.DebugPtr == (UDS_VM_GuildMark *)0x0) {
    pUVar15 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UDS_VM_GuildMark *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    (this->VM_GuildMark).field0_0x0.DebugPtr = pUVar15;
    if (pUVar15 != (UDS_VM_GuildMark *)0x0) goto LAB_14be9e890;
  }
  else {
LAB_14be9e890:
    MakeContext<FDS_ViewModelContext_GuildMark>(&local_118);
    pFVar7 = local_118.Object;
    if (local_118.Object != (FDS_ViewModelContext_GuildMark *)0x0) {
      if ((local_118.Object == (FDS_ViewModelContext_GuildMark *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)&pFVar7->_padding_ = 0x1f8;
      pUVar15 = (this->VM_GuildMark).field0_0x0.DebugPtr;
      local_58.Object = (FDS_ViewModelContext *)local_118.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_118.SharedReferenceCount.ReferenceController;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar15,&local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
  }
  SetVM_CommonTabGroup(this);
  iVar9 = FFieldNotificationClassDescriptor::IsNumericGuildJoinLimitLevel.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::IsNumericGuildJoinLimitLevel.FieldName;
  plVar13 = &this->_padding_;
  if (this->IsNumericGuildJoinLimitLevel != true) {
    this->IsNumericGuildJoinLimitLevel = true;
    local_100 = iVar9;
    local_108 = FVar6;
    (**(code **)(*plVar13 + 0x38))(plVar13,&local_108);
  }
  this->IsJoinAuto = true;
  local_f0 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  local_f8 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(*plVar13 + 0x38))(plVar13,&local_f8);
  this->IsJoinApply = false;
  local_e0 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  local_e8 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(*plVar13 + 0x38))(plVar13,&local_e8);
  this->IsPrivate = false;
  local_d0 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  local_d8 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(*plVar13 + 0x38))(plVar13,&local_d8);
  iVar10 = DS_GuildDataHelper::MaxNameLength();
  iVar9 = FFieldNotificationClassDescriptor::GuildNameMaxLength.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::GuildNameMaxLength.FieldName;
  if (this->GuildNameMaxLength != iVar10) {
    this->GuildNameMaxLength = iVar10;
    local_c0 = iVar9;
    local_c8 = FVar6;
    (**(code **)(*plVar13 + 0x38))(plVar13,&local_c8);
  }
  iVar10 = DS_GuildDataHelper::MaxDescLength();
  iVar9 = FFieldNotificationClassDescriptor::GuildNoticeMaxLength.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::GuildNoticeMaxLength.FieldName;
  if (this->GuildNoticeMaxLength != iVar10) {
    this->GuildNoticeMaxLength = iVar10;
    local_b0 = iVar9;
    local_b8 = FVar6;
    (**(code **)(*plVar13 + 0x38))(plVar13,&local_b8);
  }
  iVar10 = DS_GuildDataHelper::MaxIntroductionLength();
  iVar9 = FFieldNotificationClassDescriptor::GuildIntroductionMaxLength.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::GuildIntroductionMaxLength.FieldName;
  if (this->GuildIntroductionMaxLength != iVar10) {
    this->GuildIntroductionMaxLength = iVar10;
    local_a0 = iVar9;
    local_a8 = FVar6;
    (**(code **)(*plVar13 + 0x38))(plVar13,&local_a8);
  }
  pFVar16 = FText::FromString(local_48,L"0");
  iVar9 = FFieldNotificationClassDescriptor::Txt_GuildConditionLevel.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::Txt_GuildConditionLevel.FieldName;
  this_00 = &this->Txt_GuildConditionLevel;
  bVar8 = FText::IdenticalTo(this_00,pFVar16,None);
  if (!bVar8) {
    pIVar3 = (pFVar16->TextData).Reference;
    pIVar4 = (this_00->TextData).Reference;
    if (pIVar4 != pIVar3) {
      (this_00->TextData).Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
      }
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
      }
    }
    (this->Txt_GuildConditionLevel).Flags = pFVar16->Flags;
    local_98 = FVar6;
    local_90 = iVar9;
    (**(code **)(*plVar13 + 0x38))(plVar13,&local_98);
  }
  if (local_48[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48[0].TextData.Reference + 0x10))();
  }
LAB_14be9eb44:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextCommittedEvent_GuildIntroduction @ 14bea6d60

void __thiscall
UDS_VM_GuildCreate::OnTextCommittedEvent_GuildIntroduction
          (UDS_VM_GuildCreate *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res10 [8];
  
  if ((param_1->CommitType == OnUserMovedFocus) || (param_1->CommitType == OnEnter)) {
    pIVar1 = (param_1->NewText).TextData.Reference;
    pIVar2 = (this->Txt_GuildIntroduction).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildIntroduction).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildIntroduction).Flags = (param_1->NewText).Flags;
  }
  return;
}

// OnTextCommittedEvent_GuildJoinLimitLevel @ 14bea6e60

void __thiscall
UDS_VM_GuildCreate::OnTextCommittedEvent_GuildJoinLimitLevel
          (UDS_VM_GuildCreate *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res10 [8];
  
  if ((param_1->CommitType == OnUserMovedFocus) || (param_1->CommitType == OnEnter)) {
    pIVar1 = (param_1->NewText).TextData.Reference;
    pIVar2 = (this->Txt_GuildConditionLevel).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildConditionLevel).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildConditionLevel).Flags = (param_1->NewText).Flags;
  }
  return;
}

// OnTextCommittedEvent_GuildName @ 14bea6f60

void __thiscall
UDS_VM_GuildCreate::OnTextCommittedEvent_GuildName
          (UDS_VM_GuildCreate *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res10 [8];
  
  if ((param_1->CommitType == OnUserMovedFocus) || (param_1->CommitType == OnEnter)) {
    pIVar1 = (param_1->NewText).TextData.Reference;
    pIVar2 = (this->Txt_GuildName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildName).Flags = (param_1->NewText).Flags;
  }
  return;
}

// OnTextCommittedEvent_GuildNotice @ 14bea7150

void __thiscall
UDS_VM_GuildCreate::OnTextCommittedEvent_GuildNotice
          (UDS_VM_GuildCreate *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res10 [8];
  
  if ((param_1->CommitType == OnUserMovedFocus) || (param_1->CommitType == OnEnter)) {
    pIVar1 = (param_1->NewText).TextData.Reference;
    pIVar2 = (this->Txt_GuildNotice).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildNotice).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildNotice).Flags = (param_1->NewText).Flags;
  }
  return;
}

// OpenCreatePopup @ 14beaa180

void __thiscall UDS_VM_GuildCreate::OpenCreatePopup(UDS_VM_GuildCreate *this)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  code *local_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 != (UDS_CommonPopupManager *)0x0) {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9cb);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9cc);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80._0_4_ = 0;
      local_88 = OnCreatePopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildCreate>(&local_78,this,(pmf_b4df1a14 *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OnCreatePopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildCreate>(&local_78,this,(pmf_b4df1a14 *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// SetGuildIntroductionMaxLength @ 14beaf930

void __thiscall
UDS_VM_GuildCreate::SetGuildIntroductionMaxLength(UDS_VM_GuildCreate *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GuildIntroductionMaxLength.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GuildIntroductionMaxLength.FieldName;
  if (this->GuildIntroductionMaxLength != param_1) {
    this->GuildIntroductionMaxLength = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGuildJoinLimitLevelMaxLength @ 14beaf9d0

void __thiscall
UDS_VM_GuildCreate::SetGuildJoinLimitLevelMaxLength(UDS_VM_GuildCreate *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GuildJoinLimitLevelMaxLength.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GuildJoinLimitLevelMaxLength.FieldName;
  if (this->GuildJoinLimitLevelMaxLength != param_1) {
    this->GuildJoinLimitLevelMaxLength = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGuildNameMaxLength @ 14beafc00

void __thiscall UDS_VM_GuildCreate::SetGuildNameMaxLength(UDS_VM_GuildCreate *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GuildNameMaxLength.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GuildNameMaxLength.FieldName;
  if (this->GuildNameMaxLength != param_1) {
    this->GuildNameMaxLength = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGuildNoticeMaxLength @ 14beafca0

void __thiscall UDS_VM_GuildCreate::SetGuildNoticeMaxLength(UDS_VM_GuildCreate *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GuildNoticeMaxLength.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GuildNoticeMaxLength.FieldName;
  if (this->GuildNoticeMaxLength != param_1) {
    this->GuildNoticeMaxLength = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsJoinApply @ 14beb14b0

void __thiscall UDS_VM_GuildCreate::SetIsJoinApply(UDS_VM_GuildCreate *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsJoinApply = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsJoinApply.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinApply.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsJoinAuto @ 14beb1530

void __thiscall UDS_VM_GuildCreate::SetIsJoinAuto(UDS_VM_GuildCreate *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsJoinAuto = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsJoinAuto.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsJoinAuto.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsNumericGuildJoinLimitLevel @ 14beb1840

void __thiscall
UDS_VM_GuildCreate::SetIsNumericGuildJoinLimitLevel(UDS_VM_GuildCreate *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsNumericGuildJoinLimitLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNumericGuildJoinLimitLevel.FieldName;
  if (this->IsNumericGuildJoinLimitLevel != param_1) {
    this->IsNumericGuildJoinLimitLevel = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsPrivate @ 14beb1930

void __thiscall UDS_VM_GuildCreate::SetIsPrivate(UDS_VM_GuildCreate *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsPrivate = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsPrivate.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPrivate.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxt_GuildConditionLevel @ 14beb4db0

void __thiscall
UDS_VM_GuildCreate::SetTxt_GuildConditionLevel(UDS_VM_GuildCreate *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildConditionLevel.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildConditionLevel.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildConditionLevel,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildConditionLevel).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildConditionLevel).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildConditionLevel).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTxt_GuildIntroduction @ 14beb5090

void __thiscall
UDS_VM_GuildCreate::SetTxt_GuildIntroduction(UDS_VM_GuildCreate *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildIntroduction.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildIntroduction.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildIntroduction,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildIntroduction).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildIntroduction).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildIntroduction).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTxt_GuildName @ 14beb5530

void __thiscall UDS_VM_GuildCreate::SetTxt_GuildName(UDS_VM_GuildCreate *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildName.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTxt_GuildNotice @ 14beb5770

void __thiscall UDS_VM_GuildCreate::SetTxt_GuildNotice(UDS_VM_GuildCreate *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_GuildNotice.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_GuildNotice.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_GuildNotice,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_GuildNotice).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_GuildNotice).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_GuildNotice).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetVM_CommonTabGroup @ 14beb60d0

void __thiscall UDS_VM_GuildCreate::SetVM_CommonTabGroup(UDS_VM_GuildCreate *this)

{
  TArray<FDS_TabInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  EDS_StringTableType EVar3;
  long64 lVar4;
  FName FVar5;
  FDateTime FVar6;
  FTimespan FVar7;
  EDS_TimeExpression EVar8;
  ForAnyElementType FVar9;
  FDS_ViewModelContext_TabGroup *pFVar10;
  bool bVar11;
  int iVar12;
  UDS_VM_Common_TabGroup *pUVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ForAnyElementType local_160;
  undefined8 local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  undefined2 local_140;
  FScriptContainerElement local_13e;
  undefined8 local_138;
  FScriptContainerElement local_130;
  long64 local_128;
  FName local_120;
  long64 local_118;
  long64 local_110;
  EDS_TimeExpression local_108;
  FScriptContainerElement local_104;
  ForAnyElementType local_100;
  undefined8 local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  FScriptContainerElement local_de;
  FDS_Text local_d8;
  FDS_Text local_88;
  TSharedPtr<FDS_ViewModelContext_TabGroup,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if ((this->TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    pUVar13 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_TabGroup>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->TabGroup).field0_0x0.DebugPtr = pUVar13;
    if (pUVar13 == (UDS_VM_Common_TabGroup *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_TabGroup>(&local_38);
  pFVar10 = local_38.Object;
  if (local_38.Object != (FDS_ViewModelContext_TabGroup *)0x0) {
    if ((local_38.Object == (FDS_ViewModelContext_TabGroup *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar10->_padding_ = 0x162;
    pFVar10->SelectedIndex = 0;
    local_d8.StringTableType = None;
    local_d8.StringTableID = 0;
    local_d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_d8.StringEnumTableNameID.Number = 0;
    local_d8.DateTime.Ticks = 0;
    local_d8.TimeSpan.Ticks = 0;
    local_d8.TimeExpressionType = None;
    pTVar1 = &pFVar10->TabInfos;
    local_d8.IsExpression = false;
    local_d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniqueString.Data.ArrayNum = 0;
    local_d8.UniqueString.Data.ArrayMax = 0;
    local_d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.FormatArgs.ArrayNum = 0;
    local_d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_d8,StringUi,0x3a9c0);
    FVar9.Data = local_d8.UniqueString.Data.AllocatorInstance.Data;
    bVar11 = local_d8.IsExpression;
    EVar8 = local_d8.TimeExpressionType;
    FVar7.Ticks = local_d8.TimeSpan.Ticks;
    FVar6.Ticks = local_d8.DateTime.Ticks;
    FVar5 = local_d8.StringEnumTableNameID;
    lVar4 = local_d8.StringTableID;
    EVar3 = local_d8.StringTableType;
    lVar15 = (longlong)local_d8.UniqueString.Data.ArrayNum;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = CONCAT44(local_158._4_4_,local_d8.UniqueString.Data.ArrayNum);
    if (local_d8.UniqueString.Data.ArrayNum == 0) {
      local_158 = local_d8.UniqueString.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_d8.UniqueString.Data.ArrayNum,0,&local_160,
                 local_d8.UniqueString.Data.ArrayNum,(int *)((longlong)&local_158 + 4));
      memcpy(local_160.Data,FVar9.Data,lVar15 * 2);
    }
    FVar9.Data = local_d8.FormatArgs.AllocatorInstance.Data;
    iVar12 = local_d8.FormatArgs.ArrayNum;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148 = CONCAT44(local_148._4_4_,local_d8.FormatArgs.ArrayNum);
    if (local_d8.FormatArgs.ArrayNum == 0) {
      local_148 = local_d8.FormatArgs._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_d8.FormatArgs.ArrayNum,0,&local_150,local_d8.FormatArgs.ArrayNum,
                 (int *)((longlong)&local_148 + 4));
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                (local_150.Data,(FDS_TextFormatArg *)FVar9.Data,iVar12);
    }
    local_140 = 0;
    local_13e = (FScriptContainerElement)0x0;
    iVar12 = (pFVar10->TabInfos).ArrayNum;
    if (iVar12 == (pFVar10->TabInfos).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,&pTVar1->AllocatorInstance,&(pFVar10->TabInfos).ArrayMax);
    }
    (pFVar10->TabInfos).ArrayNum = iVar12 + 1;
    pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x60;
    *(undefined4 *)pFVar14 = 0xffffffff;
    *(undefined4 *)(pFVar14 + 4) = 0xffffffff;
    pFVar14[8] = (FScriptContainerElement)EVar3;
    *(long64 *)(pFVar14 + 0x10) = lVar4;
    *(FName *)(pFVar14 + 0x18) = FVar5;
    *(long64 *)(pFVar14 + 0x20) = FVar6.Ticks;
    *(long64 *)(pFVar14 + 0x28) = FVar7.Ticks;
    *(EDS_TimeExpression *)(pFVar14 + 0x30) = EVar8;
    *(undefined8 *)(pFVar14 + 0x38) = 0;
    pFVar14[0x34] = (FScriptContainerElement)bVar11;
    *(FScriptContainerElement **)(pFVar14 + 0x38) = local_160.Data;
    local_160.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar14 + 0x40) = (undefined4)local_158;
    *(undefined4 *)(pFVar14 + 0x44) = local_158._4_4_;
    local_158 = 0;
    *(undefined8 *)(pFVar14 + 0x48) = 0;
    *(FScriptContainerElement **)(pFVar14 + 0x48) = local_150.Data;
    local_150.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar14 + 0x50) = (undefined4)local_148;
    *(undefined4 *)(pFVar14 + 0x54) = local_148._4_4_;
    local_148 = 0;
    pFVar14[0x58] = local_140._0_1_;
    pFVar14[0x59] = local_140._1_1_;
    pFVar14[0x5a] = local_13e;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data,
               local_d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_d8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniqueString.Data.AllocatorInstance.Data);
    }
    local_88.StringTableType = None;
    local_88.StringTableID = 0;
    local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_88.StringEnumTableNameID.Number = 0;
    local_88.TimeExpressionType = None;
    local_88.DateTime.Ticks = 0;
    local_88.TimeSpan.Ticks = 0;
    local_88.IsExpression = false;
    local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.UniqueString.Data.ArrayNum = 0;
    local_88.UniqueString.Data.ArrayMax = 0;
    local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.FormatArgs.ArrayNum = 0;
    local_88.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_88,StringUi,0x3a9c1);
    FVar9.Data = local_88.UniqueString.Data.AllocatorInstance.Data;
    lVar15 = (longlong)local_88.UniqueString.Data.ArrayNum;
    local_130 = (FScriptContainerElement)local_88.StringTableType;
    local_128 = local_88.StringTableID;
    local_120 = local_88.StringEnumTableNameID;
    local_118 = local_88.DateTime.Ticks;
    local_110 = local_88.TimeSpan.Ticks;
    local_108 = local_88.TimeExpressionType;
    local_104 = (FScriptContainerElement)local_88.IsExpression;
    local_138 = 0xffffffffffffffff;
    local_100.Data = (FScriptContainerElement *)0x0;
    local_f8 = CONCAT44(local_f8._4_4_,local_88.UniqueString.Data.ArrayNum);
    if (local_88.UniqueString.Data.ArrayNum == 0) {
      local_f8 = local_88.UniqueString.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.UniqueString.Data.ArrayNum,0,&local_100,
                 local_88.UniqueString.Data.ArrayNum,(int *)((longlong)&local_f8 + 4));
      memcpy(local_100.Data,FVar9.Data,lVar15 * 2);
    }
    FVar9.Data = local_88.FormatArgs.AllocatorInstance.Data;
    iVar12 = local_88.FormatArgs.ArrayNum;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = CONCAT44(local_e8._4_4_,local_88.FormatArgs.ArrayNum);
    if (local_88.FormatArgs.ArrayNum == 0) {
      local_e8 = local_88.FormatArgs._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_88.FormatArgs.ArrayNum,0,&local_f0,local_88.FormatArgs.ArrayNum,
                 (int *)((longlong)&local_e8 + 4));
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                (local_f0.Data,(FDS_TextFormatArg *)FVar9.Data,iVar12);
    }
    local_e0 = 0;
    local_de = (FScriptContainerElement)0x0;
    iVar12 = (pFVar10->TabInfos).ArrayNum;
    if (iVar12 == (pFVar10->TabInfos).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,&pTVar1->AllocatorInstance,&(pFVar10->TabInfos).ArrayMax);
    }
    (pFVar10->TabInfos).ArrayNum = iVar12 + 1;
    pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x60;
    *(undefined4 *)pFVar14 = (undefined4)local_138;
    *(undefined4 *)(pFVar14 + 4) = local_138._4_4_;
    pFVar14[8] = local_130;
    *(long64 *)(pFVar14 + 0x10) = local_128;
    *(FName *)(pFVar14 + 0x18) = local_120;
    *(long64 *)(pFVar14 + 0x20) = local_118;
    *(long64 *)(pFVar14 + 0x28) = local_110;
    *(EDS_TimeExpression *)(pFVar14 + 0x30) = local_108;
    *(undefined8 *)(pFVar14 + 0x38) = 0;
    pFVar14[0x34] = local_104;
    *(FScriptContainerElement **)(pFVar14 + 0x38) = local_100.Data;
    local_100.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar14 + 0x40) = (undefined4)local_f8;
    *(undefined4 *)(pFVar14 + 0x44) = local_f8._4_4_;
    local_f8 = 0;
    *(undefined8 *)(pFVar14 + 0x48) = 0;
    *(FScriptContainerElement **)(pFVar14 + 0x48) = local_f0.Data;
    local_f0.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar14 + 0x50) = (undefined4)local_e8;
    *(undefined4 *)(pFVar14 + 0x54) = local_e8._4_4_;
    local_e8 = 0;
    pFVar14[0x58] = local_e0._0_1_;
    pFVar14[0x59] = local_e0._1_1_;
    pFVar14[0x5a] = local_de;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
               local_88.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
    }
    if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
    }
    pUVar13 = (this->TabGroup).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_38.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar13,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  this->SelectGuildMarkType = Emblem;
  UpdateGuildMarkList(this);
  UpdateGuildMarkColorList(this);
  return;
}

// SetVM_MoneyDisplay @ 14beb8790

void __thiscall UDS_VM_GuildCreate::SetVM_MoneyDisplay(UDS_VM_GuildCreate *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  UDS_M_MoneyDisplay *pUVar4;
  UDS_VM_MoneyDisplay *pUVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  iVar2 = DS_GuildDataHelper::CreateMoneyType();
  iVar3 = DS_GuildDataHelper::CreateMoneyValue();
  pUVar4 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
  if (pUVar4 == (UDS_M_MoneyDisplay *)0x0) {
    pUVar4 = NewObject<UDS_M_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_M_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->M_CoinDisplay).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_M_MoneyDisplay *)0x0) goto LAB_14beb8809;
  }
  pUVar4->MoneyDisplayType = DisplayWithCheck;
  UDS_M_MoneyDisplay::RefreshData
            ((this->M_CoinDisplay).field0_0x0.DebugPtr,(EDS_MoneyType)iVar2,(longlong)iVar3);
LAB_14beb8809:
  if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_MoneyDisplay).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_MoneyDisplay *)0x0) {
      return;
    }
  }
  pUVar4 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
  plVar6 = (longlong *)(**(code **)(pUVar4->_padding_ + 0x310))(pUVar4,&local_28);
  lVar1 = *plVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (lVar1 != 0) {
    pUVar4 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
    pUVar5 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
    puVar7 = (undefined8 *)(**(code **)(pUVar4->_padding_ + 0x310))(pUVar4,local_18);
    local_28.Object = (FDS_ViewModelContext *)*puVar7;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return;
}

// SetVM_VM_GuildMark @ 14beba6f0

void __thiscall UDS_VM_GuildCreate::SetVM_VM_GuildMark(UDS_VM_GuildCreate *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMark *pFVar2;
  bool bVar3;
  UDS_VM_GuildMark *pUVar4;
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildMark).field0_0x0.DebugPtr == (UDS_VM_GuildMark *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildMark *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMark).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMark *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMark>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x1f8;
  pUVar4 = (this->VM_GuildMark).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bebbdf0

void __thiscall UDS_VM_GuildCreate::UnbindModel(UDS_VM_GuildCreate *this)

{
  UDS_UIEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_>::
    Remove<UDS_VM_GuildCreate>(&pUVar1->OnClickTabIndex,this);
    return;
  }
  return;
}

// UpdateGuildMarkColorList @ 14bebe630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_GuildCreate::UpdateGuildMarkColorList(UDS_VM_GuildCreate *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UDS_VM_GuildMark *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_01;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  FDS_ViewModelContext *pFVar14;
  int iVar15;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_127 [7];
  ForAnyElementType local_120;
  uint local_118;
  uint local_114;
  uint local_110;
  TArray<FDS_GuildMarkColorTableRow_const_*,TSizedDefaultAllocator<32>_> local_108;
  UDS_UserObjectListItem *local_f8;
  FScriptContainerElement *local_f0;
  FName local_e8;
  int local_e0;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_ColorTileView);
  FDS_GuildMarkColorTableRow::GetAll(&local_108);
  iVar15 = local_108.ArrayNum;
  uVar10 = 0;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_114 = 0;
  local_118 = 0;
  pFVar1 = local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 8;
  FVar13.Data = local_108.AllocatorInstance.Data;
  while( true ) {
    local_110 = uVar10;
    if (local_108.ArrayNum != iVar15) {
      local_128 = 0;
      `TCheckedPointerIterator<FDS_GuildMarkColorTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_128);
      local_110 = local_118;
    }
    if (FVar13.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar13.Data;
    uVar10 = local_110;
    if ((lVar2 != 0) && (*(EDS_GuildMarkType *)(lVar2 + 0x20) == this->SelectGuildMarkType)) {
      if (local_110 == local_114) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_120,(int *)&local_114);
      }
      uVar10 = local_110 + 1;
      *(longlong *)(local_120.Data + (longlong)(int)local_110 * 8) = lVar2;
      local_118 = uVar10;
    }
    FVar13.Data = FVar13.Data + 8;
  }
  pUVar3 = (this->VM_GuildMark).field0_0x0.DebugPtr;
  iVar15 = 0;
  if (pUVar3 != (UDS_VM_GuildMark *)0x0) {
    if (this->SelectGuildMarkType == Emblem) {
      iVar15 = (pUVar3->GuildMarkInfo).GuildMarkColorTableID;
    }
    else {
      iVar15 = 0;
      if (this->SelectGuildMarkType == BackGround) {
        iVar15 = (pUVar3->GuildMarkInfo).GuildMarkBgColorTableID;
      }
    }
  }
  uVar11 = (ulonglong)(int)local_110;
  local_f0 = local_120.Data + uVar11 * 8;
  FVar13.Data = local_120.Data;
  uVar10 = local_110;
  while( true ) {
    pFVar1 = local_f0;
    pFVar14 = (FDS_ViewModelContext *)0x0;
    if (uVar10 != (uint)uVar11) {
      local_127[0] = 0;
      `TCheckedPointerIterator<FDS_GuildMarkColorTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_127);
    }
    if (FVar13.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar13.Data;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._8_8_ = this;
    this_00 = (UDS_UserObjectListItem *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebe97c;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebe97c;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar7 = ::operator_new(0x28);
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
      *(undefined2 *)((longlong)&pFVar7[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar7[1]._padding_ + 7) = 0;
      pFVar7->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar7->ViewModelName).ComparisonIndex = 0;
      (pFVar7->ViewModelName).Number = 0;
      pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildMarkColorSlot__6B_;
      *(undefined4 *)&pFVar7[1]._padding_ = 0;
      *(undefined1 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
      pFVar14 = pFVar7;
    }
    pTVar8 = ::operator_new(0x20);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildMarkColorSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar8[1].SharedReferenceCount = pFVar14;
    }
    if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = FDS_ViewModelContext_GuildMarkColorSlot::StaticStruct();
    pFVar14->DerivedStaticStruct = (UStruct *)pUVar9;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar14;
      local_d8.SharedReferenceCount.ReferenceController = pTVar8;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    pFVar14->ViewModelTemplateKey = GuildMarkColorSlot;
    *(undefined4 *)&pFVar14[1]._padding_ = *(undefined4 *)(lVar2 + 8);
    *(bool *)((longlong)&pFVar14[1]._padding_ + 4) = *(int *)(lVar2 + 8) == iVar15;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar14;
    local_c8.SharedReferenceCount.ReferenceController = pTVar8;
    UDS_UserObjectListItem::AddContext(this_00,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    local_f8 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_ColorTileView,
               (TObjectPtr<UDS_UserObjectListItem>)&local_f8);
    FVar13.Data = FVar13.Data + 8;
    uVar11 = (ulonglong)local_110;
    uVar10 = local_118;
  }
  local_e0 = FFieldNotificationClassDescriptor::EntryBindingEventField_ColorTileView.BitNumber;
  local_e8 = FFieldNotificationClassDescriptor::EntryBindingEventField_ColorTileView.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
LAB_14bebe97c:
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return;
}

// UpdateGuildMarkList @ 14bebedb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_GuildCreate::UpdateGuildMarkList(UDS_VM_GuildCreate *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UDS_VM_GuildMark *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_01;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  FDS_ViewModelContext *pFVar14;
  int iVar15;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_127 [7];
  ForAnyElementType local_120;
  uint local_118;
  uint local_114;
  uint local_110;
  TArray<FDS_GuildMarkTableRow_const_*,TSizedDefaultAllocator<32>_> local_108;
  UDS_UserObjectListItem *local_f8;
  FScriptContainerElement *local_f0;
  FName local_e8;
  int local_e0;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_MarkTileView);
  FDS_GuildMarkTableRow::GetAll(&local_108);
  iVar15 = local_108.ArrayNum;
  uVar10 = 0;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_114 = 0;
  local_118 = 0;
  pFVar1 = local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 8;
  FVar13.Data = local_108.AllocatorInstance.Data;
  while( true ) {
    local_110 = uVar10;
    if (local_108.ArrayNum != iVar15) {
      local_128 = 0;
      `TCheckedPointerIterator<FDS_GuildMarkTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_128);
      local_110 = local_118;
    }
    if (FVar13.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar13.Data;
    uVar10 = local_110;
    if ((lVar2 != 0) && (*(EDS_GuildMarkType *)(lVar2 + 0x20) == this->SelectGuildMarkType)) {
      if (local_110 == local_114) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_120,(int *)&local_114);
      }
      uVar10 = local_110 + 1;
      *(longlong *)(local_120.Data + (longlong)(int)local_110 * 8) = lVar2;
      local_118 = uVar10;
    }
    FVar13.Data = FVar13.Data + 8;
  }
  pUVar3 = (this->VM_GuildMark).field0_0x0.DebugPtr;
  iVar15 = 0;
  if (pUVar3 != (UDS_VM_GuildMark *)0x0) {
    if (this->SelectGuildMarkType == Emblem) {
      iVar15 = (pUVar3->GuildMarkInfo).GuildMarkTableID;
    }
    else {
      iVar15 = 0;
      if (this->SelectGuildMarkType == BackGround) {
        iVar15 = (pUVar3->GuildMarkInfo).GuildMarkBgTableID;
      }
    }
  }
  uVar11 = (ulonglong)(int)local_110;
  local_f0 = local_120.Data + uVar11 * 8;
  FVar13.Data = local_120.Data;
  uVar10 = local_110;
  while( true ) {
    pFVar1 = local_f0;
    pFVar14 = (FDS_ViewModelContext *)0x0;
    if (uVar10 != (uint)uVar11) {
      local_127[0] = 0;
      `TCheckedPointerIterator<FDS_GuildMarkTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_127);
    }
    if (FVar13.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar13.Data;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._8_8_ = this;
    this_00 = (UDS_UserObjectListItem *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebf0fc;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebf0fc;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar7 = ::operator_new(0x28);
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
      *(undefined2 *)((longlong)&pFVar7[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar7[1]._padding_ + 7) = 0;
      pFVar7->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar7->ViewModelName).ComparisonIndex = 0;
      (pFVar7->ViewModelName).Number = 0;
      pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildMarkSlot__6B_;
      *(undefined4 *)&pFVar7[1]._padding_ = 0;
      *(undefined1 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
      pFVar14 = pFVar7;
    }
    pTVar8 = ::operator_new(0x20);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildMarkSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar8[1].SharedReferenceCount = pFVar14;
    }
    if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = FDS_ViewModelContext_GuildMarkSlot::StaticStruct();
    pFVar14->DerivedStaticStruct = (UStruct *)pUVar9;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar14;
      local_d8.SharedReferenceCount.ReferenceController = pTVar8;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    pFVar14->ViewModelTemplateKey = GuildMarkSlot;
    *(undefined4 *)&pFVar14[1]._padding_ = *(undefined4 *)(lVar2 + 8);
    *(bool *)((longlong)&pFVar14[1]._padding_ + 4) = *(int *)(lVar2 + 8) == iVar15;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar14;
    local_c8.SharedReferenceCount.ReferenceController = pTVar8;
    UDS_UserObjectListItem::AddContext(this_00,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    local_f8 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_MarkTileView,
               (TObjectPtr<UDS_UserObjectListItem>)&local_f8);
    FVar13.Data = FVar13.Data + 8;
    uVar11 = (ulonglong)local_110;
    uVar10 = local_118;
  }
  local_e0 = FFieldNotificationClassDescriptor::EntryBindingEventField_MarkTileView.BitNumber;
  local_e8 = FFieldNotificationClassDescriptor::EntryBindingEventField_MarkTileView.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
LAB_14bebf0fc:
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return;
}

