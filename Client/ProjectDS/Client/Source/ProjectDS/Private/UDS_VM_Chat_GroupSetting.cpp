// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 30

// SetTitleText_WrapperImpl @ 14b610fe0

void __cdecl UDS_VM_Chat_GroupSetting::SetTitleText_WrapperImpl(void *param_1,void *param_2)

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

// SetGroupName_WrapperImpl @ 14b610ff0

void __cdecl UDS_VM_Chat_GroupSetting::SetGroupName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::GroupName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::GroupName.FieldName;
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

// SetGroupNameHint_WrapperImpl @ 14b611000

void __cdecl UDS_VM_Chat_GroupSetting::SetGroupNameHint_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::GroupNameHint.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::GroupNameHint.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x100),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetChangeGroupName_WrapperImpl @ 14b611010

void __cdecl UDS_VM_Chat_GroupSetting::SetChangeGroupName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStackX_8 [8];
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0xf0);
  if (plVar2 == plVar1) {
    uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  }
  else {
    *(longlong **)((longlong)param_1 + 0xf0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  }
  *(undefined4 *)((longlong)param_1 + 0xf8) = uVar3;
  return;
}

// SetbIsInviteGranted_WrapperImpl @ 14b611020

void __cdecl UDS_VM_Chat_GroupSetting::SetbIsInviteGranted_WrapperImpl(void *param_1,void *param_2)

{
  SetIsInviteGranted(param_1,*(bool *)param_2);
  return;
}

// SetChangedInviteGranted_WrapperImpl @ 14b611030

void __cdecl
UDS_VM_Chat_GroupSetting::SetChangedInviteGranted_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x178) = *(undefined1 *)param_2;
  return;
}

// SetClickOk_WrapperImpl @ 14b611040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_GroupSetting::SetClickOk_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  undefined1 auStackY_188 [32];
  FName FStack_158;
  int iStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_148._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_VM_Chat_GroupSetting::OnClickOk",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_148.Ptr,0x66,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)TStack_148._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)TStack_148._padding_);
      }
    }
  }
  else {
    bVar1 = *(bool *)((longlong)param_1 + 0x178);
    iVar2 = *(int *)((longlong)param_1 + 0x370);
    if (*(int *)((longlong)param_1 + 0x368) < 2) {
      pFVar4 = FText::ToString((FText *)((longlong)param_1 + 0xf0));
      UDS_ChattingManager::RequestCreateGroupChatRoom(this,pFVar4,iVar2,bVar1);
    }
    else {
      pFVar4 = FText::ToString((FText *)((longlong)param_1 + 0xf0));
      UDS_ChattingManager::RequestGroupChatRoomInfo
                (this,(FString *)((longlong)param_1 + 0x360),pFVar4,iVar2,bVar1);
    }
    *(undefined1 *)((longlong)param_1 + 0x1c0) = 1;
    iStack_150 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
    FStack_158 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_158);
  }
  return;
}

// SetClickCancel_WrapperImpl @ 14b611050

void __cdecl UDS_VM_Chat_GroupSetting::SetClickCancel_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x1c0) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b611120

UClass * __cdecl UDS_VM_Chat_GroupSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupSetting",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupSetting.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupSetting,0x378,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_GroupSetting>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupSetting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupSetting.InnerSingleton;
}

// UDS_VM_Chat_GroupSetting @ 14b615800

UDS_VM_Chat_GroupSetting * __thiscall
UDS_VM_Chat_GroupSetting::UDS_VM_Chat_GroupSetting
          (UDS_VM_Chat_GroupSetting *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TitleText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupSetting__6B_;
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
  FText::FText(&this->GroupName);
  (this->GroupNameHint).StringTableType = None;
  (this->GroupNameHint).StringTableID = 0;
  (this->GroupNameHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->GroupNameHint).StringEnumTableNameID.Number = 0;
  (this->GroupNameHint).DateTime.Ticks = 0;
  (this->GroupNameHint).TimeSpan.Ticks = 0;
  (this->GroupNameHint).TimeExpressionType = None;
  (this->GroupNameHint).IsExpression = false;
  (this->GroupNameHint).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupNameHint).UniqueString.Data.ArrayNum = 0;
  (this->GroupNameHint).UniqueString.Data.ArrayMax = 0;
  (this->GroupNameHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupNameHint).FormatArgs.ArrayNum = 0;
  (this->GroupNameHint).FormatArgs.ArrayMax = 0;
  FText::FText(&(this->ChangeGroupName).NewText);
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ChangedInviteGranted).bIsActivate = false;
  (this->ClickOk)._padding_ = '\0';
  (this->ClickOk).bIsCustomSelected = false;
  (this->ClickOk).bIsLacked = false;
  (this->ClickOk).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOk).Delegate = 0;
  *(undefined8 *)&(this->ClickOk).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOk).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_CloseInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->FixedText_Check).StringTableType = StringUi;
  (this->FixedText_Check).StringTableID = 0xc5bf;
  (this->FixedText_Check).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Check).StringEnumTableNameID.Number = 0;
  (this->FixedText_Check).DateTime.Ticks = 0;
  (this->FixedText_Check).TimeSpan.Ticks = 0;
  (this->FixedText_Check).TimeExpressionType = None;
  (this->FixedText_Check).IsExpression = false;
  (this->FixedText_Check).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Check).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Check).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Check).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Check).FormatArgs.ArrayNum = 0;
  (this->FixedText_Check).FormatArgs.ArrayMax = 0;
  (this->FixedText_Name).StringTableType = StringUi;
  (this->FixedText_Name).StringTableID = 0xc5c0;
  (this->FixedText_Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Name).StringEnumTableNameID.Number = 0;
  (this->FixedText_Name).DateTime.Ticks = 0;
  (this->FixedText_Name).TimeSpan.Ticks = 0;
  (this->FixedText_Name).TimeExpressionType = None;
  (this->FixedText_Name).IsExpression = false;
  (this->FixedText_Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Name).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Name).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Name).FormatArgs.ArrayNum = 0;
  (this->FixedText_Name).FormatArgs.ArrayMax = 0;
  (this->FixedText_Symbol).StringTableType = StringUi;
  (this->FixedText_Symbol).StringTableID = 0xc5c1;
  (this->FixedText_Symbol).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Symbol).StringEnumTableNameID.Number = 0;
  (this->FixedText_Symbol).DateTime.Ticks = 0;
  (this->FixedText_Symbol).TimeSpan.Ticks = 0;
  (this->FixedText_Symbol).TimeExpressionType = None;
  (this->FixedText_Symbol).IsExpression = false;
  (this->FixedText_Symbol).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Symbol).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Symbol).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Symbol).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Symbol).FormatArgs.ArrayNum = 0;
  (this->FixedText_Symbol).FormatArgs.ArrayMax = 0;
  (this->FixedText_OK).StringTableType = StringUi;
  (this->FixedText_OK).StringTableID = 0x65;
  (this->FixedText_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_OK).DateTime.Ticks = 0;
  (this->FixedText_OK).TimeSpan.Ticks = 0;
  (this->FixedText_OK).TimeExpressionType = None;
  (this->FixedText_OK).IsExpression = false;
  (this->FixedText_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Cancel).StringTableType = StringUi;
  (this->FixedText_Cancel).StringTableID = 0x66;
  (this->FixedText_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Cancel).TimeExpressionType = None;
  (this->FixedText_Cancel).IsExpression = false;
  (this->FixedText_Cancel).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Cancel).FormatArgs.ArrayMax = 0;
  (this->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupID).Data.ArrayNum = 0;
  (this->GroupID).Data.ArrayMax = 0;
  this->GroupIconID = 0;
  return this;
}

// UDS_VM_Chat_GroupSetting @ 14b615b00

UDS_VM_Chat_GroupSetting * __thiscall
UDS_VM_Chat_GroupSetting::UDS_VM_Chat_GroupSetting
          (UDS_VM_Chat_GroupSetting *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TitleText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupSetting__6B_;
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
  FText::FText(&this->GroupName);
  (this->GroupNameHint).StringTableType = None;
  (this->GroupNameHint).StringTableID = 0;
  (this->GroupNameHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->GroupNameHint).StringEnumTableNameID.Number = 0;
  (this->GroupNameHint).DateTime.Ticks = 0;
  (this->GroupNameHint).TimeSpan.Ticks = 0;
  (this->GroupNameHint).TimeExpressionType = None;
  (this->GroupNameHint).IsExpression = false;
  (this->GroupNameHint).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupNameHint).UniqueString.Data.ArrayNum = 0;
  (this->GroupNameHint).UniqueString.Data.ArrayMax = 0;
  (this->GroupNameHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupNameHint).FormatArgs.ArrayNum = 0;
  (this->GroupNameHint).FormatArgs.ArrayMax = 0;
  FText::FText(&(this->ChangeGroupName).NewText);
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ChangedInviteGranted).bIsActivate = false;
  (this->ClickOk)._padding_ = '\0';
  (this->ClickOk).bIsCustomSelected = false;
  (this->ClickOk).bIsLacked = false;
  (this->ClickOk).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOk).Delegate = 0;
  *(undefined8 *)&(this->ClickOk).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOk).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_CloseInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->FixedText_Check).StringTableType = StringUi;
  (this->FixedText_Check).StringTableID = 0xc5bf;
  (this->FixedText_Check).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Check).StringEnumTableNameID.Number = 0;
  (this->FixedText_Check).DateTime.Ticks = 0;
  (this->FixedText_Check).TimeSpan.Ticks = 0;
  (this->FixedText_Check).TimeExpressionType = None;
  (this->FixedText_Check).IsExpression = false;
  (this->FixedText_Check).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Check).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Check).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Check).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Check).FormatArgs.ArrayNum = 0;
  (this->FixedText_Check).FormatArgs.ArrayMax = 0;
  (this->FixedText_Name).StringTableType = StringUi;
  (this->FixedText_Name).StringTableID = 0xc5c0;
  (this->FixedText_Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Name).StringEnumTableNameID.Number = 0;
  (this->FixedText_Name).DateTime.Ticks = 0;
  (this->FixedText_Name).TimeSpan.Ticks = 0;
  (this->FixedText_Name).TimeExpressionType = None;
  (this->FixedText_Name).IsExpression = false;
  (this->FixedText_Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Name).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Name).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Name).FormatArgs.ArrayNum = 0;
  (this->FixedText_Name).FormatArgs.ArrayMax = 0;
  (this->FixedText_Symbol).StringTableType = StringUi;
  (this->FixedText_Symbol).StringTableID = 0xc5c1;
  (this->FixedText_Symbol).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Symbol).StringEnumTableNameID.Number = 0;
  (this->FixedText_Symbol).DateTime.Ticks = 0;
  (this->FixedText_Symbol).TimeSpan.Ticks = 0;
  (this->FixedText_Symbol).TimeExpressionType = None;
  (this->FixedText_Symbol).IsExpression = false;
  (this->FixedText_Symbol).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Symbol).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Symbol).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Symbol).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Symbol).FormatArgs.ArrayNum = 0;
  (this->FixedText_Symbol).FormatArgs.ArrayMax = 0;
  (this->FixedText_OK).StringTableType = StringUi;
  (this->FixedText_OK).StringTableID = 0x65;
  (this->FixedText_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_OK).DateTime.Ticks = 0;
  (this->FixedText_OK).TimeSpan.Ticks = 0;
  (this->FixedText_OK).TimeExpressionType = None;
  (this->FixedText_OK).IsExpression = false;
  (this->FixedText_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Cancel).StringTableType = StringUi;
  (this->FixedText_Cancel).StringTableID = 0x66;
  (this->FixedText_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Cancel).TimeExpressionType = None;
  (this->FixedText_Cancel).IsExpression = false;
  (this->FixedText_Cancel).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Cancel).FormatArgs.ArrayMax = 0;
  (this->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupID).Data.ArrayNum = 0;
  (this->GroupID).Data.ArrayMax = 0;
  this->GroupIconID = 0;
  return this;
}

// ~UDS_VM_Chat_GroupSetting @ 14b617380

void __thiscall UDS_VM_Chat_GroupSetting::~UDS_VM_Chat_GroupSetting(UDS_VM_Chat_GroupSetting *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupSetting__6B_;
  pFVar1 = (this->GroupID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Cancel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Cancel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Cancel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Cancel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_OK).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_OK).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_OK).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_OK).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Symbol).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Symbol).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Symbol).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Symbol).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Name).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Name).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Check).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Check).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Check).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Check).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancel).Delegate);
  pvVar2 = *(void **)&(this->ClickCancel).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancel).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickOk).Delegate);
  pvVar2 = *(void **)&(this->ClickOk).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickOk).Delegate);
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->ChangeGroupName).NewText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->GroupNameHint).FormatArgs.AllocatorInstance.Data,
             (this->GroupNameHint).FormatArgs.ArrayNum);
  pFVar1 = (this->GroupNameHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GroupNameHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->GroupName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6191d0

IClassDescriptor * __thiscall
UDS_VM_Chat_GroupSetting::GetFieldNotificationDescriptor(UDS_VM_Chat_GroupSetting *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_GroupSetting::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619b00

UClass * __cdecl UDS_VM_Chat_GroupSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupSetting",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupSetting.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupSetting,0x378,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_GroupSetting>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupSetting>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupSetting.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_GroupSetting @ 14b61a230

void __cdecl UDS_VM_Chat_GroupSetting::StaticRegisterNativesUDS_VM_Chat_GroupSetting(void)

{
  return;
}

// BindModel @ 14bd480f0

void __thiscall UDS_VM_Chat_GroupSetting::BindModel(UDS_VM_Chat_GroupSetting *this)

{
  TMap<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_UIEvent *pUVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    this_00 = &(pUVar1->OnSelectedIconSlot).Subscriptions;
    local_res10[0] = 0x12a;
    if (*(int *)&(pUVar1->OnSelectedIconSlot).Subscriptions.field_0x8 !=
        *(int *)&(pUVar1->OnSelectedIconSlot).Subscriptions.field_0x34) {
      puVar2 = *(undefined1 **)&(pUVar1->OnSelectedIconSlot).Subscriptions.field_0x40;
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &(pUVar1->OnSelectedIconSlot).Subscriptions.field_0x38;
      }
      iVar3 = *(int *)(puVar2 + (ulonglong)
                                (*(int *)&(pUVar1->OnSelectedIconSlot).Subscriptions.field_0x48 - 1U
                                & 0x12a) * 4);
      if (iVar3 != -1) {
        do {
          piVar4 = (int *)((longlong)iVar3 * 0x50 + *(longlong *)this_00);
          if (*piVar4 == 0x12a) {
            if (piVar4 != (int *)0x0) goto LAB_14bd481cc;
            break;
          }
          iVar3 = piVar4[0x12];
        } while (iVar3 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_ViewModelTemplateKey_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_ViewModelTemplateKey_const_&> *)0x12a,
               (bool *)&local_res20);
    piVar4 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bd481cc:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar4 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_GroupSetting>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )(piVar4 + 2),(UDS_VM_Chat_GroupSetting *)local_res18,(pmf_ac285ca7 *)this);
  }
  return;
}

// InitViewModel @ 14bd69a30

void __thiscall UDS_VM_Chat_GroupSetting::InitViewModel(UDS_VM_Chat_GroupSetting *this)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  UDS_VM_InputKey *pUVar4;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_CloseInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
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
    (this->VM_CloseInputKey).field0_0x0.DebugPtr = pUVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnChangeGroupName @ 14bd6eae0

void __thiscall
UDS_VM_Chat_GroupSetting::OnChangeGroupName
          (UDS_VM_Chat_GroupSetting *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->NewText).TextData.Reference;
  pIVar2 = (this->GroupName).TextData.Reference;
  if (pIVar2 == pIVar1) {
    uVar3 = (param_1->NewText).Flags;
  }
  else {
    (this->GroupName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    uVar3 = (param_1->NewText).Flags;
  }
  (this->GroupName).Flags = uVar3;
  return;
}

// OnChangedInviteGranted @ 14bd70430

void __thiscall
UDS_VM_Chat_GroupSetting::OnChangedInviteGranted
          (UDS_VM_Chat_GroupSetting *this,FDS_WidgetEventField *param_1)

{
  this->bIsInviteGranted = param_1->bIsActivate;
  return;
}

// OnClickCancel @ 14bd72520

void __thiscall
UDS_VM_Chat_GroupSetting::OnClickCancel
          (UDS_VM_Chat_GroupSetting *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickOk @ 14bd73c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupSetting::OnClickOk(UDS_VM_Chat_GroupSetting *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_GroupSetting::OnClickOk",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x66,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)local_148._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    bVar1 = this->bIsInviteGranted;
    iVar2 = this->GroupIconID;
    if ((this->GroupID).Data.ArrayNum < 2) {
      pFVar4 = FText::ToString(&this->GroupName);
      UDS_ChattingManager::RequestCreateGroupChatRoom(this_00,pFVar4,iVar2,bVar1);
    }
    else {
      pFVar4 = FText::ToString(&this->GroupName);
      UDS_ChattingManager::RequestGroupChatRoomInfo(this_00,&this->GroupID,pFVar4,iVar2,bVar1);
    }
    (this->CloseMySelf).bIsActivate = true;
    local_150 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  }
  return;
}

// OnSelectedIconSlot @ 14bd7d800

void __thiscall
UDS_VM_Chat_GroupSetting::OnSelectedIconSlot(UDS_VM_Chat_GroupSetting *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined8 *puVar8;
  FSharedReferencer<1> FVar9;
  undefined8 *puVar10;
  FDS_ViewModelContext_IconSlot *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  TSharedPtr<FDS_ViewModelContext_IconSlot,1> local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_50;
  
  this->GroupIconID = param_1;
  pTVar7 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
  pFVar12 = (pTVar7->AllocatorInstance).Data;
  iVar2 = pTVar7->ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  do {
    if (pTVar7->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar12 == pFVar1) {
      return;
    }
    lVar4 = *(longlong *)pFVar12;
    if (lVar4 != 0) {
      iVar3 = *(int *)(lVar4 + 0xa0);
      puVar8 = *(undefined8 **)(lVar4 + 0x98);
      puVar10 = puVar8 + (longlong)iVar3 * 2;
      while( true ) {
        if (*(int *)(lVar4 + 0xa0) != iVar3) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (puVar8 == puVar10) {
          pFVar11 = (FDS_ViewModelContext_IconSlot *)0x0;
          FVar9.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14bd7d919;
        }
        local_50.Object = (FDS_ViewModelContext *)*puVar8;
        local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1]
        ;
        if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SafeCast<FDS_ViewModelContext_IconSlot>(&local_60,&local_50);
        FVar9.ReferenceController = local_60.SharedReferenceCount.ReferenceController;
        pFVar11 = local_60.Object;
        if (local_60.Object != (FDS_ViewModelContext_IconSlot *)0x0) break;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
        puVar8 = puVar8 + 2;
      }
      local_60.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_60.Object = (FDS_ViewModelContext_IconSlot *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar11 == (FDS_ViewModelContext_IconSlot *)0x0) {
LAB_14bd7d919:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar11->bIsSelected = pFVar11->IconTableID == this->GroupIconID;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// OnSetViewModel @ 14bd81620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupSetting::OnSetViewModel
          (UDS_VM_Chat_GroupSetting *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  int iVar6;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ChatGroup>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_GroupSetting::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x19,L"chatGroupContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = ((local_158.Object)->GroupID).Data.ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&this->GroupID,(wchar_t *)((local_158.Object)->GroupID).Data.AllocatorInstance.Data,
               iVar6);
    SetGroupSetting(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetGroupName @ 14bd88d70

void __thiscall
UDS_VM_Chat_GroupSetting::SetGroupName(UDS_VM_Chat_GroupSetting *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::GroupName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::GroupName.FieldName;
  bVar5 = FText::IdenticalTo(&this->GroupName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->GroupName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->GroupName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->GroupName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetGroupNameHint @ 14bd88e30

void __thiscall
UDS_VM_Chat_GroupSetting::SetGroupNameHint(UDS_VM_Chat_GroupSetting *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::GroupNameHint.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::GroupNameHint.FieldName;
  FDS_Text::operator=(&this->GroupNameHint,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetGroupSetting @ 14bd88e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_GroupSetting::SetGroupSetting(UDS_VM_Chat_GroupSetting *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  FString *pFVar10;
  FString *pFVar11;
  FText *pFVar12;
  FDS_Text *pFVar13;
  undefined1 auStackY_488 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_458;
  FWeakObjectPtr local_448;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_440;
  FName local_428;
  int local_420;
  FName local_418;
  int local_410;
  FDS_Text local_408;
  FDS_Text local_3b8;
  FDS_StringUiID local_368;
  FString local_358;
  FText local_348;
  FText local_338;
  FString local_328;
  FDS_Text local_318;
  FDS_Text local_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_488;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_Chat_GroupSetting::SetGroupSetting",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_278.Ptr,0x82,L"chattingManager == nullptr");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    UDS_PlayerData::GetMainPlayerData();
    bVar6 = FWeakObjectPtr::IsValid(&local_448);
    if (bVar6) {
      if ((this->GroupID).Data.ArrayNum < 2) {
        iVar7 = UDS_ChattingManager::GetEmptyChatRoomDataIndex(this_00,Group);
        local_408.StringTableType = None;
        local_408.StringTableID = 0;
        local_408.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_408.StringEnumTableNameID.Number = 0;
        local_408.TimeExpressionType = None;
        local_408.IsExpression = false;
        local_408.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_408.UniqueString.Data.ArrayNum = 0;
        local_408.UniqueString.Data.ArrayMax = 0;
        local_408.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_408.FormatArgs.ArrayNum = 0;
        local_408.FormatArgs.ArrayMax = 0;
        local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_440.ArrayNum = 0;
        local_440.ArrayMax = 0;
        local_408.DateTime.Ticks = 0;
        local_408.TimeSpan.Ticks = 0;
        FDS_Text::SetTextFormatFromStringTable(&local_408,StringUi,0xc38f,&local_440);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_440.AllocatorInstance.Data,local_440.ArrayNum);
        if ((FDS_TextFormatArg *)local_440.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_440.AllocatorInstance.Data);
        }
        iVar5 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::TitleText.FieldName;
        FDS_Text::operator=(&this->TitleText,&local_408);
        local_428 = FVar4;
        local_420 = iVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_428);
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
        pUVar9 = FWeakObjectPtr::Get(&local_448);
        pFVar10 = ::FString::FString(&local_328,(FString *)&pUVar9[7].field_0x20);
        local_368.ID = 0xc38e;
        local_368._padding_ = (longlong)&___7FDS_StringUiID__6B_;
        pFVar11 = FDS_StringUiID::Str(&local_368);
        DS_Util::GetFormatString<FString>(&local_358,pFVar11,pFVar10);
        pFVar12 = FText::FromString(&local_348,&local_358);
        SetGroupName(this,pFVar12);
        if (local_348.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
        }
        pUVar9 = FWeakObjectPtr::Get(&local_448);
        pFVar13 = FDS_Text::FromStringTableFormat<FString_const_&>
                            (&local_318,StringUi,0xc38e,(FString *)&pUVar9[7].field_0x20);
        SetGroupNameHint(this,pFVar13);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_318.FormatArgs.AllocatorInstance.Data,
                   local_318.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_318.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_318.FormatArgs.AllocatorInstance.Data);
        }
        if (local_318.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.UniqueString.Data.AllocatorInstance.Data);
        }
        iVar5 = FFieldNotificationClassDescriptor::bIsInviteGranted.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::bIsInviteGranted.FieldName;
        if (this->bIsInviteGranted != true) {
          this->bIsInviteGranted = true;
          local_410 = iVar5;
          local_418 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_418);
        }
        UpdateGroupIcons(this,iVar7,0);
        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Data.AllocatorInstance.Data);
        }
      }
      else {
        UDS_ChattingManager::GetChatRoomDataByGroupID(this_00,&local_458,&this->GroupID);
        if (local_458.Object != (FDS_ChatRoomData *)0x0) {
          if ((local_458.Object == (FDS_ChatRoomData *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar1 = ((local_458.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
          pFVar2 = ((local_458.Object)->ChatConversation).Object;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pFVar2 != (FDS_ChatConversation *)0x0) {
            pFVar10 = &pFVar2->ShowName;
            pFVar13 = FDS_Text::FromStringTableFormat<FString_const_&>
                                (&local_2c8,StringUi,0xc5c2,pFVar10);
            SetTitleText(this,pFVar13);
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_2c8.FormatArgs.AllocatorInstance.Data,
                       local_2c8.FormatArgs.ArrayNum);
            if ((FDS_TextFormatArg *)local_2c8.FormatArgs.AllocatorInstance.Data !=
                (FDS_TextFormatArg *)0x0) {
              FMemory::Free(local_2c8.FormatArgs.AllocatorInstance.Data);
            }
            if (local_2c8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_2c8.UniqueString.Data.AllocatorInstance.Data);
            }
            pFVar12 = FText::FromString(&local_338,pFVar10);
            SetGroupName(this,pFVar12);
            if (local_338.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
            }
            local_3b8.StringTableType = None;
            local_3b8.StringTableID = 0;
            local_3b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
            local_3b8.StringEnumTableNameID.Number = 0;
            local_3b8.TimeExpressionType = None;
            local_3b8.DateTime.Ticks = 0;
            local_3b8.TimeSpan.Ticks = 0;
            local_3b8.IsExpression = false;
            local_3b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3b8.UniqueString.Data.ArrayNum = 0;
            local_3b8.UniqueString.Data.ArrayMax = 0;
            local_3b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3b8.FormatArgs.ArrayNum = 0;
            local_3b8.FormatArgs.ArrayMax = 0;
            FDS_Text::SetTextFromUniqueString(&local_3b8,pFVar10);
            SetGroupNameHint(this,&local_3b8);
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_3b8.FormatArgs.AllocatorInstance.Data,
                       local_3b8.FormatArgs.ArrayNum);
            if ((FDS_TextFormatArg *)local_3b8.FormatArgs.AllocatorInstance.Data !=
                (FDS_TextFormatArg *)0x0) {
              FMemory::Free(local_3b8.FormatArgs.AllocatorInstance.Data);
            }
            if (local_3b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_3b8.UniqueString.Data.AllocatorInstance.Data);
            }
            if ((local_458.Object == (FDS_ChatRoomData *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            SetIsInviteGranted(this,(local_458.Object)->bIsInviteGranted);
            if ((local_458.Object == (FDS_ChatRoomData *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            UpdateGroupIcons(this,(local_458.Object)->SubTabIndex,(local_458.Object)->GroupIconID);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_458.SharedReferenceCount.ReferenceController);
      }
    }
    else {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Chat_GroupSetting::SetGroupSetting",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_158.Ptr,0x89,L"myPlayerData.IsValid() == false");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  return;
}

// SetIsInviteGranted @ 14bd89b50

void __thiscall
UDS_VM_Chat_GroupSetting::SetIsInviteGranted(UDS_VM_Chat_GroupSetting *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsInviteGranted.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsInviteGranted.FieldName;
  if (this->bIsInviteGranted != param_1) {
    this->bIsInviteGranted = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTitleText @ 14bd8ae40

void __thiscall
UDS_VM_Chat_GroupSetting::SetTitleText(UDS_VM_Chat_GroupSetting *this,FDS_Text *param_1)

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

// UnbindModel @ 14bd8c1b0

void __thiscall UDS_VM_Chat_GroupSetting::UnbindModel(UDS_VM_Chat_GroupSetting *this)

{
  UDS_UIEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_ViewModelTemplateKey_const_,int_const_,int_const_>::
    Remove<UDS_VM_Chat_GroupSetting>(&pUVar1->OnSelectedIconSlot,this);
    return;
  }
  return;
}

// UpdateGroupIcons @ 14bd8fe50

void __thiscall
UDS_VM_Chat_GroupSetting::UpdateGroupIcons(UDS_VM_Chat_GroupSetting *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  FDS_ViewModelContext_IconSlot *pFVar6;
  bool bVar7;
  UDS_UserObjectListItem *pUVar8;
  FDS_ViewModelContext *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_00;
  ForAnyElementType FVar12;
  UDS_UserObjectListItem *local_res8;
  undefined1 local_res10 [8];
  UDS_UserObjectListItem *local_res20;
  FName local_98;
  int local_90;
  TArray<FDS_ChattingGroupIconListTableRow_const_*,TSizedDefaultAllocator<32>_> local_88;
  TSharedPtr<FDS_ViewModelContext_IconSlot,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  this->GroupIconID = param_2;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  pUVar8 = NewObject<UDS_UserObjectListItem>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UDS_UserObjectListItem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  MakeContext<FDS_ViewModelContext_IconSlot>(&local_78);
  pFVar6 = local_78.Object;
  if ((local_78.Object == (FDS_ViewModelContext_IconSlot *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x5d;
  pFVar6->ParentViewModelTemplateKey = Chat_GroupSetting;
  pFVar6->IconTableID = 0;
  pFVar6->IconID = param_1 + 0x266;
  local_48.Object = (FDS_ViewModelContext *)local_78.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_78.SharedReferenceCount.ReferenceController;
  pFVar6->bIsSelected = pFVar6->IconTableID == this->GroupIconID;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_UserObjectListItem::AddContext(pUVar8,&local_48);
  local_res8 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UDS_UserObjectListItem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FDS_EntryBindingEventField::Add
            (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  FDS_ChattingGroupIconListTableRow::GetAll(&local_88);
  iVar5 = local_88.ArrayNum;
  pFVar1 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 8;
  FVar12.Data = local_88.AllocatorInstance.Data;
  do {
    if (local_88.ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_ChattingGroupIconListTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar12.Data == pFVar1) {
      local_90 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_98 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      return;
    }
    lVar3 = *(longlong *)FVar12.Data;
    if (lVar3 != 0) {
      pUVar8 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      pFVar9 = ::operator_new(0x30);
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar9->ViewModelTemplateKey = 0;
        *(undefined2 *)((longlong)&pFVar9[1].DerivedStaticStruct + 5) = 0;
        *(undefined1 *)((longlong)&pFVar9[1].DerivedStaticStruct + 7) = 0;
        pFVar9->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar9->ViewModelName).ComparisonIndex = 0;
        (pFVar9->ViewModelName).Number = 0;
        pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_IconSlot__6B_;
        pFVar9[1]._padding_ = 0;
        *(undefined4 *)&pFVar9[1].DerivedStaticStruct = 0;
        *(undefined1 *)((longlong)&pFVar9[1].DerivedStaticStruct + 4) = 0;
      }
      pTVar10 = ::operator_new(0x20);
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_IconSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar10[1].SharedReferenceCount = pFVar9;
      }
      if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_IconSlot::StaticStruct();
      pFVar9->DerivedStaticStruct = (UStruct *)pUVar11;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar9;
        local_68.SharedReferenceCount.ReferenceController = pTVar10;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar9->ViewModelTemplateKey = Common_IconSlot;
      *(undefined4 *)&pFVar9[1]._padding_ = 0x12a;
      iVar2 = *(int *)(lVar3 + 8);
      *(int *)((longlong)&pFVar9[1]._padding_ + 4) = iVar2;
      *(undefined4 *)&pFVar9[1].DerivedStaticStruct = *(undefined4 *)(lVar3 + 0x24);
      *(bool *)((longlong)&pFVar9[1].DerivedStaticStruct + 4) = iVar2 == this->GroupIconID;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar9;
      local_58.SharedReferenceCount.ReferenceController = pTVar10;
      UDS_UserObjectListItem::AddContext(pUVar8,&local_58);
      local_res20 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

