// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// SetClickFindbutton_WrapperImpl @ 14b64e880

void __cdecl UDS_VM_GuildList::SetClickFindbutton_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetClickFindEditableResetButton_WrapperImpl @ 14b64e890

void __cdecl
UDS_VM_GuildList::SetClickFindEditableResetButton_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  
  pFVar1 = FText::GetEmpty();
  SetTxtFindGuild(param_1,pFVar1);
  return;
}

// SetClickRefreshButton_WrapperImpl @ 14b64e8a0

void __cdecl UDS_VM_GuildList::SetClickRefreshButton_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  
  pFVar1 = FText::GetEmpty();
  SetTxtFindGuild(param_1,pFVar1);
  return;
}

// SetTextCommittedEventField_WrapperImpl @ 14b64e8b0

void __cdecl UDS_VM_GuildList::SetTextCommittedEventField_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  undefined1 auStackX_10 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  if (*(int *)((longlong)param_2 + 0x10) == 2) {
    plVar2 = *(longlong **)param_2;
    plVar3 = *(longlong **)((longlong)param_1 + 0x2d0);
    if (plVar3 != plVar2) {
      *(longlong **)((longlong)param_1 + 0x2d0) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,auStackX_10);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x2d8) = *(undefined4 *)((longlong)param_2 + 8);
    return;
  }
  if (*(int *)((longlong)param_2 + 0x10) == 1) {
    FText::operator=((FText *)((longlong)param_1 + 0x2d0),param_2);
    pFVar5 = FText::ToString((FText *)((longlong)param_1 + 0x2d0));
    iVar1 = (pFVar5->Data).ArrayNum;
    iVar4 = DS_GuildDataHelper::MinNameLength();
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    if (iVar6 < iVar4) {
      TStack_28._0_8_ = 0;
      TStack_28._8_8_ = 0;
      TStack_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x3a9fb,Alert_System_01,&TStack_28);
    }
  }
  return;
}

// StaticClass @ 14b64e8c0

UClass * __cdecl UDS_VM_GuildList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildList",
               &Z_Registration_Info_UClass_UDS_VM_GuildList.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildList,0x380,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildList>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildList.InnerSingleton;
}

// UDS_VM_GuildList @ 14b654360

UDS_VM_GuildList * __thiscall
UDS_VM_GuildList::UDS_VM_GuildList(UDS_VM_GuildList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildList__6B_;
  (this->FixedTxt_GuildName).StringTableType = StringUi;
  (this->FixedTxt_GuildName).StringTableID = 0x3a9a7;
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
  (this->FixedTxt_GuildIntroduction).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroduction).StringTableID = 0x3a9c4;
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
  (this->FixedTxt_GuildLevel).StringTableType = StringUi;
  (this->FixedTxt_GuildLevel).StringTableID = 0x3a9a8;
  (this->FixedTxt_GuildLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildLevel).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildLevel).DateTime.Ticks = 0;
  (this->FixedTxt_GuildLevel).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildLevel).TimeExpressionType = None;
  (this->FixedTxt_GuildLevel).IsExpression = false;
  (this->FixedTxt_GuildLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLevel).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildLevel).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildMember).StringTableType = StringUi;
  (this->FixedTxt_GuildMember).StringTableID = 0x3a9aa;
  (this->FixedTxt_GuildMember).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildMember).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildMember).DateTime.Ticks = 0;
  (this->FixedTxt_GuildMember).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildMember).TimeExpressionType = None;
  (this->FixedTxt_GuildMember).IsExpression = false;
  (this->FixedTxt_GuildMember).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMember).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildMember).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildMember).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMember).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildMember).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildJoinType).StringTableType = StringUi;
  (this->FixedTxt_GuildJoinType).StringTableID = 0x3a9ab;
  (this->FixedTxt_GuildJoinType).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildJoinType).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildJoinType).DateTime.Ticks = 0;
  (this->FixedTxt_GuildJoinType).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildJoinType).TimeExpressionType = None;
  (this->FixedTxt_GuildJoinType).IsExpression = false;
  (this->FixedTxt_GuildJoinType).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildJoinType).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildJoinType).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildJoinType).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildJoinType).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildJoinType).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinButton).StringTableType = StringUi;
  (this->FixedTxt_JoinButton).StringTableID = 0x3a9ad;
  (this->FixedTxt_JoinButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinButton).DateTime.Ticks = 0;
  (this->FixedTxt_JoinButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinButton).TimeExpressionType = None;
  (this->FixedTxt_JoinButton).IsExpression = false;
  (this->FixedTxt_JoinButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildFindHint).StringTableType = StringUi;
  (this->FixedTxt_GuildFindHint).StringTableID = 0x3a9a6;
  (this->FixedTxt_GuildFindHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildFindHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildFindHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildFindHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildFindHint).TimeExpressionType = None;
  (this->FixedTxt_GuildFindHint).IsExpression = false;
  (this->FixedTxt_GuildFindHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildFindHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildFindHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildFindHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildFindHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildFindHint).FormatArgs.ArrayMax = 0;
  FText::FText(&this->TxtFindGuild);
  (this->ClickFindbutton)._padding_ = '\0';
  (this->ClickFindbutton).bIsCustomSelected = false;
  (this->ClickFindbutton).bIsLacked = false;
  (this->ClickFindbutton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickFindbutton).Delegate = 0;
  *(undefined8 *)&(this->ClickFindbutton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickFindbutton).Delegate.field_0x10 = 0;
  (this->ClickFindEditableResetButton)._padding_ = '\0';
  (this->ClickFindEditableResetButton).bIsCustomSelected = false;
  (this->ClickFindEditableResetButton).bIsLacked = false;
  (this->ClickFindEditableResetButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickFindEditableResetButton).Delegate = 0;
  *(undefined8 *)&(this->ClickFindEditableResetButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickFindEditableResetButton).Delegate.field_0x10 = 0;
  (this->ClickRefreshButton)._padding_ = '\0';
  (this->ClickRefreshButton).bIsCustomSelected = false;
  (this->ClickRefreshButton).bIsLacked = false;
  (this->ClickRefreshButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRefreshButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRefreshButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRefreshButton).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextCommittedEventField).NewText);
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  (this->VM_Dropdown_Soting).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  this->GuildListSortType = 0;
  return this;
}

// UDS_VM_GuildList @ 14b654660

UDS_VM_GuildList * __thiscall
UDS_VM_GuildList::UDS_VM_GuildList(UDS_VM_GuildList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildList__6B_;
  (this->FixedTxt_GuildName).StringTableType = StringUi;
  (this->FixedTxt_GuildName).StringTableID = 0x3a9a7;
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
  (this->FixedTxt_GuildIntroduction).StringTableType = StringUi;
  (this->FixedTxt_GuildIntroduction).StringTableID = 0x3a9c4;
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
  (this->FixedTxt_GuildLevel).StringTableType = StringUi;
  (this->FixedTxt_GuildLevel).StringTableID = 0x3a9a8;
  (this->FixedTxt_GuildLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildLevel).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildLevel).DateTime.Ticks = 0;
  (this->FixedTxt_GuildLevel).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildLevel).TimeExpressionType = None;
  (this->FixedTxt_GuildLevel).IsExpression = false;
  (this->FixedTxt_GuildLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildLevel).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildLevel).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildMember).StringTableType = StringUi;
  (this->FixedTxt_GuildMember).StringTableID = 0x3a9aa;
  (this->FixedTxt_GuildMember).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildMember).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildMember).DateTime.Ticks = 0;
  (this->FixedTxt_GuildMember).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildMember).TimeExpressionType = None;
  (this->FixedTxt_GuildMember).IsExpression = false;
  (this->FixedTxt_GuildMember).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMember).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildMember).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildMember).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMember).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildMember).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildJoinType).StringTableType = StringUi;
  (this->FixedTxt_GuildJoinType).StringTableID = 0x3a9ab;
  (this->FixedTxt_GuildJoinType).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildJoinType).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildJoinType).DateTime.Ticks = 0;
  (this->FixedTxt_GuildJoinType).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildJoinType).TimeExpressionType = None;
  (this->FixedTxt_GuildJoinType).IsExpression = false;
  (this->FixedTxt_GuildJoinType).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildJoinType).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildJoinType).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildJoinType).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildJoinType).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildJoinType).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinButton).StringTableType = StringUi;
  (this->FixedTxt_JoinButton).StringTableID = 0x3a9ad;
  (this->FixedTxt_JoinButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinButton).DateTime.Ticks = 0;
  (this->FixedTxt_JoinButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinButton).TimeExpressionType = None;
  (this->FixedTxt_JoinButton).IsExpression = false;
  (this->FixedTxt_JoinButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildFindHint).StringTableType = StringUi;
  (this->FixedTxt_GuildFindHint).StringTableID = 0x3a9a6;
  (this->FixedTxt_GuildFindHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildFindHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildFindHint).DateTime.Ticks = 0;
  (this->FixedTxt_GuildFindHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildFindHint).TimeExpressionType = None;
  (this->FixedTxt_GuildFindHint).IsExpression = false;
  (this->FixedTxt_GuildFindHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildFindHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildFindHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildFindHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildFindHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildFindHint).FormatArgs.ArrayMax = 0;
  FText::FText(&this->TxtFindGuild);
  (this->ClickFindbutton)._padding_ = '\0';
  (this->ClickFindbutton).bIsCustomSelected = false;
  (this->ClickFindbutton).bIsLacked = false;
  (this->ClickFindbutton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickFindbutton).Delegate = 0;
  *(undefined8 *)&(this->ClickFindbutton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickFindbutton).Delegate.field_0x10 = 0;
  (this->ClickFindEditableResetButton)._padding_ = '\0';
  (this->ClickFindEditableResetButton).bIsCustomSelected = false;
  (this->ClickFindEditableResetButton).bIsLacked = false;
  (this->ClickFindEditableResetButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickFindEditableResetButton).Delegate = 0;
  *(undefined8 *)&(this->ClickFindEditableResetButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickFindEditableResetButton).Delegate.field_0x10 = 0;
  (this->ClickRefreshButton)._padding_ = '\0';
  (this->ClickRefreshButton).bIsCustomSelected = false;
  (this->ClickRefreshButton).bIsLacked = false;
  (this->ClickRefreshButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRefreshButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRefreshButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRefreshButton).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextCommittedEventField).NewText);
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  (this->VM_Dropdown_Soting).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  this->GuildListSortType = 0;
  return this;
}

// ~UDS_VM_GuildList @ 14b655a80

void __thiscall UDS_VM_GuildList::~UDS_VM_GuildList(UDS_VM_GuildList *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildList__6B_;
  pFVar1 = (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->TextCommittedEventField).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRefreshButton).Delegate);
  pvVar3 = *(void **)&(this->ClickRefreshButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRefreshButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickFindEditableResetButton).Delegate);
  pvVar3 = *(void **)&(this->ClickFindEditableResetButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickFindEditableResetButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickFindbutton).Delegate);
  pvVar3 = *(void **)&(this->ClickFindbutton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickFindbutton).Delegate);
  pIVar2 = (this->TxtFindGuild).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildFindHint).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildFindHint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildFindHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildFindHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_JoinButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_JoinButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildJoinType).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildJoinType).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildJoinType).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildJoinType).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildMember).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildMember).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildMember).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildMember).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildLevel).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GuildLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GuildLevel).UniqueString.Data.AllocatorInstance.Data;
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
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b657660

IClassDescriptor * __thiscall
UDS_VM_GuildList::GetFieldNotificationDescriptor(UDS_VM_GuildList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b658150

UClass * __cdecl UDS_VM_GuildList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildList",
               &Z_Registration_Info_UClass_UDS_VM_GuildList.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildList,0x380,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildList>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildList @ 14b658380

void __cdecl UDS_VM_GuildList::StaticRegisterNativesUDS_VM_GuildList(void)

{
  return;
}

// BindModel @ 14be75cb0

void __thiscall UDS_VM_GuildList::BindModel(UDS_VM_GuildList *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->GuildListUpdateDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(TArray<__int64,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_GuildList>
              ((TMulticastDelegateRegistration<void___cdecl(TArray<__int64,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
                *)&pUVar1->GuildListUpdateDelegate,(UDS_VM_GuildList *)&stack0x00000010,
               (pmf_545391f3 *)this);
  }
  return;
}

// InitViewModel @ 14be8cc40

void __thiscall UDS_VM_GuildList::InitViewModel(UDS_VM_GuildList *this)

{
  return;
}

// InitViewModelCDO @ 14be8e720

void __thiscall UDS_VM_GuildList::InitViewModelCDO(UDS_VM_GuildList *this)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  local_res10[0] = 0x1f6;
  if (UDS_ContentManager::OnOpenContentTotalMenuEventMap._8_4_ !=
      UDS_ContentManager::OnOpenContentTotalMenuEventMap._52_4_) {
    lVar3 = 0x154cf7518;
    if (UDS_ContentManager::OnOpenContentTotalMenuEventMap._64_8_ != 0) {
      lVar3 = UDS_ContentManager::OnOpenContentTotalMenuEventMap._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (UDS_ContentManager::OnOpenContentTotalMenuEventMap._72_4_ - 1 & 0x1f6)
                             * 4);
    while (iVar1 != -1) {
      piVar2 = (int *)((longlong)iVar1 * 0x30 +
                      UDS_ContentManager::OnOpenContentTotalMenuEventMap._0_8_);
      if (*piVar2 == 0x1f6) {
        if (piVar2 != (int *)0x0) goto LAB_14be8e7d8;
        break;
      }
      iVar1 = piVar2[10];
    }
  }
  local_res20 = local_res10;
  TSet<TTuple<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent>,TDefaultMapHashableKeyFuncs<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_TotalMenuId_&&>_>
            (&UDS_ContentManager::OnOpenContentTotalMenuEventMap,(uint)local_res18,
             (TKeyInitializer<EDS_TotalMenuId_&&> *)0x1f6,(bool *)&local_res20);
  piVar2 = (int *)((longlong)local_res18[0] * 0x30 +
                  UDS_ContentManager::OnOpenContentTotalMenuEventMap._0_8_);
LAB_14be8e7d8:
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_GuildList>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (piVar2 + 2),(UDS_VM_GuildList *)local_res18,(pmf_beea9cd8 *)this);
  return;
}

// OnClickFindEditableResetButton @ 14be947a0

void __thiscall
UDS_VM_GuildList::OnClickFindEditableResetButton
          (UDS_VM_GuildList *this,FDS_ButtonEventField *param_1)

{
  FText *pFVar1;
  
  pFVar1 = FText::GetEmpty();
  SetTxtFindGuild(this,pFVar1);
  return;
}

// OnClickFindbutton @ 14be947d0

void __thiscall
UDS_VM_GuildList::OnClickFindbutton(UDS_VM_GuildList *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnClickRefreshButton @ 14be96750

void __thiscall
UDS_VM_GuildList::OnClickRefreshButton(UDS_VM_GuildList *this,FDS_ButtonEventField *param_1)

{
  FText *pFVar1;
  
  pFVar1 = FText::GetEmpty();
  SetTxtFindGuild(this,pFVar1);
  return;
}

// OnDropboxSotingTypeChanged @ 14be97f50

void __thiscall UDS_VM_GuildList::OnDropboxSotingTypeChanged(UDS_VM_GuildList *this,int param_1)

{
  FText *pFVar1;
  UDS_GuildManager *this_00;
  
  pFVar1 = FText::GetEmpty();
  SetTxtFindGuild(this,pFVar1);
  if (this->GuildListSortType != param_1) {
    this->GuildListSortType = param_1;
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_List);
    this_00 = UDS_GuildManager::GetInst();
    if (this_00 != (UDS_GuildManager *)0x0) {
      UDS_GuildManager::ResetGuildListData(this_00);
      UDS_GuildManager::SendGetGuildList(this_00,this->GuildListSortType + 1);
    }
  }
  return;
}

// OnGuildListEvent @ 14be992b0

void __thiscall
UDS_VM_GuildList::OnGuildListEvent
          (UDS_VM_GuildList *this,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.ArrayNum = param_1->ArrayNum;
  lVar2 = (longlong)local_18.ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,pFVar1,lVar2 << 3);
  }
  UpdateList(this,&local_18);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnOpenContentFromTotalMenu @ 14be9a1b0

void __thiscall UDS_VM_GuildList::OnOpenContentFromTotalMenu(UDS_VM_GuildList *this)

{
  bool bVar1;
  UDS_ContentManager *this_00;
  EDS_ContentsTabFrameType local_res10 [2];
  undefined8 local_res18 [2];
  
  bVar1 = UDS_GuildManager::HasJoinedGuild();
  if (!bVar1) {
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 != (UDS_ContentManager *)0x0) {
      local_res18[0] = 0;
      local_res10[0] = GuildList;
      UDS_ContentManager::OpenContent
                (this_00,local_res10,(TObjectPtr<UDS_ContentArguments>)local_res18);
    }
  }
  return;
}

// OnSetViewModel @ 14be9f4d0

void __thiscall
UDS_VM_GuildList::OnSetViewModel(UDS_VM_GuildList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  UDS_GuildManager *this_00;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_List);
    this_00 = UDS_GuildManager::GetInst();
    if (this_00 != (UDS_GuildManager *)0x0) {
      UDS_GuildManager::ResetGuildListData(this_00);
      UDS_GuildManager::SendGetGuildList(this_00,this->GuildListSortType + 1);
    }
    iVar3 = DS_GuildDataHelper::MaxNameLength();
    FVar2 = FFieldNotificationClassDescriptor::FindTextMaxLength.FieldName;
    if (this->FindTextMaxLength != iVar3) {
      local_10 = FFieldNotificationClassDescriptor::FindTextMaxLength.BitNumber;
      this->FindTextMaxLength = iVar3;
      local_18 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    SetVM_DropDownSoting(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextCommittedEventField @ 14bea6c80

void __thiscall
UDS_VM_GuildList::OnTextCommittedEventField
          (UDS_VM_GuildList *this,FDS_TextCommittedEventField *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  undefined1 local_res10 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (param_1->CommitType == OnUserMovedFocus) {
    pIVar2 = (param_1->NewText).TextData.Reference;
    pIVar3 = (this->TxtFindGuild).TextData.Reference;
    if (pIVar3 != pIVar2) {
      (this->TxtFindGuild).TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    (this->TxtFindGuild).Flags = (param_1->NewText).Flags;
    return;
  }
  if (param_1->CommitType == OnEnter) {
    FText::operator=(&this->TxtFindGuild,&param_1->NewText);
    pFVar5 = FText::ToString(&this->TxtFindGuild);
    iVar1 = (pFVar5->Data).ArrayNum;
    iVar4 = DS_GuildDataHelper::MinNameLength();
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    if (iVar6 < iVar4) {
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      local_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x3a9fb,Alert_System_01,&local_28);
    }
  }
  return;
}

// RefreshGuildList @ 14beac4b0

void __thiscall UDS_VM_GuildList::RefreshGuildList(UDS_VM_GuildList *this)

{
  UDS_GuildManager *this_00;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_List);
  this_00 = UDS_GuildManager::GetInst();
  if (this_00 != (UDS_GuildManager *)0x0) {
    UDS_GuildManager::ResetGuildListData(this_00);
    UDS_GuildManager::SendGetGuildList(this_00,this->GuildListSortType + 1);
  }
  return;
}

// SetFindTextMaxLength @ 14beaf430

void __thiscall UDS_VM_GuildList::SetFindTextMaxLength(UDS_VM_GuildList *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::FindTextMaxLength.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FindTextMaxLength.FieldName;
  if (this->FindTextMaxLength != param_1) {
    this->FindTextMaxLength = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTxtFindGuild @ 14beb4c00

void __thiscall UDS_VM_GuildList::SetTxtFindGuild(UDS_VM_GuildList *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::TxtFindGuild.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::TxtFindGuild.FieldName;
  bVar5 = FText::IdenticalTo(&this->TxtFindGuild,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->TxtFindGuild).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->TxtFindGuild).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->TxtFindGuild).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetVM_DropDownSoting @ 14beb6cf0

void __thiscall UDS_VM_GuildList::SetVM_DropDownSoting(UDS_VM_GuildList *this)

{
  code *pcVar1;
  FDS_ViewModelContext_Dropdown *pFVar2;
  bool bVar3;
  int iVar4;
  UDS_VM_Dropdown *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  UDS_VM_GuildList *local_res8;
  FDS_Text local_148;
  FDS_Text local_f8;
  FDS_Text local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  if ((this->VM_Dropdown_Soting).field0_0x0.DebugPtr == (UDS_VM_Dropdown *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dropdown>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_Dropdown *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_Dropdown_Soting).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_Dropdown *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_Dropdown>(&local_48);
  pFVar2 = local_48.Object;
  if (local_48.Object != (FDS_ViewModelContext_Dropdown *)0x0) {
    if ((local_48.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x117;
    local_58.Object = (FDS_ViewModelContext *)OnDropboxSotingTypeChanged;
    local_58.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->OnClickList,
               (FWriteAccessScope *)&local_38);
    local_20 = &(pFVar2->OnClickList).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildList____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = local_58.Object;
      puVar6[5] = local_58.SharedReferenceCount.ReferenceController;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    local_148.StringTableType = None;
    local_148.StringTableID = 0;
    local_148.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_148.StringEnumTableNameID.Number = 0;
    local_148.TimeExpressionType = None;
    local_148.DateTime.Ticks = 0;
    local_148.TimeSpan.Ticks = 0;
    local_148.IsExpression = false;
    local_148.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.UniqueString.Data.ArrayNum = 0;
    local_148.UniqueString.Data.ArrayMax = 0;
    local_148.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.FormatArgs.ArrayNum = 0;
    local_148.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_148,StringUi,0x3a9fc);
    iVar4 = (pFVar2->DropdownList).ArrayNum;
    if (iVar4 == (pFVar2->DropdownList).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(pFVar2->DropdownList).AllocatorInstance,
                         &(pFVar2->DropdownList).ArrayMax);
    }
    (pFVar2->DropdownList).ArrayNum = iVar4 + 1;
    pFVar8 = (pFVar2->DropdownList).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
    *pFVar8 = (FScriptContainerElement)local_148.StringTableType;
    *(long64 *)(pFVar8 + 8) = local_148.StringTableID;
    *(FName *)(pFVar8 + 0x10) = local_148.StringEnumTableNameID;
    *(long64 *)(pFVar8 + 0x18) = local_148.DateTime.Ticks;
    *(long64 *)(pFVar8 + 0x20) = local_148.TimeSpan.Ticks;
    *(EDS_TimeExpression *)(pFVar8 + 0x28) = local_148.TimeExpressionType;
    *(undefined8 *)(pFVar8 + 0x30) = 0;
    pFVar8[0x2c] = (FScriptContainerElement)local_148.IsExpression;
    *(FScriptContainerElement **)(pFVar8 + 0x30) =
         local_148.UniqueString.Data.AllocatorInstance.Data;
    local_148.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + 0x38) = local_148.UniqueString.Data.ArrayNum;
    *(int *)(pFVar8 + 0x3c) = local_148.UniqueString.Data.ArrayMax;
    local_148.UniqueString.Data.ArrayNum = 0;
    local_148.UniqueString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar8 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar8 + 0x40) = local_148.FormatArgs.AllocatorInstance.Data;
    local_148.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + 0x48) = local_148.FormatArgs.ArrayNum;
    *(int *)(pFVar8 + 0x4c) = local_148.FormatArgs.ArrayMax;
    local_148.FormatArgs.ArrayNum = 0;
    local_148.FormatArgs.ArrayMax = 0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_148.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.FormatArgs.AllocatorInstance.Data);
    }
    if (local_148.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.UniqueString.Data.AllocatorInstance.Data);
    }
    local_f8.StringTableType = None;
    local_f8.StringTableID = 0;
    local_f8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_f8.StringEnumTableNameID.Number = 0;
    local_f8.TimeExpressionType = None;
    local_f8.DateTime.Ticks = 0;
    local_f8.TimeSpan.Ticks = 0;
    local_f8.IsExpression = false;
    local_f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.UniqueString.Data.ArrayNum = 0;
    local_f8.UniqueString.Data.ArrayMax = 0;
    local_f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.FormatArgs.ArrayNum = 0;
    local_f8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_f8,StringUi,0x3a9aa);
    iVar4 = (pFVar2->DropdownList).ArrayNum;
    if (iVar4 == (pFVar2->DropdownList).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(pFVar2->DropdownList).AllocatorInstance,
                         &(pFVar2->DropdownList).ArrayMax);
    }
    (pFVar2->DropdownList).ArrayNum = iVar4 + 1;
    pFVar8 = (pFVar2->DropdownList).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
    *pFVar8 = (FScriptContainerElement)local_f8.StringTableType;
    *(long64 *)(pFVar8 + 8) = local_f8.StringTableID;
    *(FName *)(pFVar8 + 0x10) = local_f8.StringEnumTableNameID;
    *(long64 *)(pFVar8 + 0x18) = local_f8.DateTime.Ticks;
    *(long64 *)(pFVar8 + 0x20) = local_f8.TimeSpan.Ticks;
    *(EDS_TimeExpression *)(pFVar8 + 0x28) = local_f8.TimeExpressionType;
    *(undefined8 *)(pFVar8 + 0x30) = 0;
    pFVar8[0x2c] = (FScriptContainerElement)local_f8.IsExpression;
    *(FScriptContainerElement **)(pFVar8 + 0x30) = local_f8.UniqueString.Data.AllocatorInstance.Data
    ;
    local_f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + 0x38) = local_f8.UniqueString.Data.ArrayNum;
    *(int *)(pFVar8 + 0x3c) = local_f8.UniqueString.Data.ArrayMax;
    local_f8.UniqueString.Data.ArrayNum = 0;
    local_f8.UniqueString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar8 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar8 + 0x40) = local_f8.FormatArgs.AllocatorInstance.Data;
    local_f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + 0x48) = local_f8.FormatArgs.ArrayNum;
    *(int *)(pFVar8 + 0x4c) = local_f8.FormatArgs.ArrayMax;
    local_f8.FormatArgs.ArrayNum = 0;
    local_f8.FormatArgs.ArrayMax = 0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_f8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.UniqueString.Data.AllocatorInstance.Data);
    }
    local_a8.StringTableType = None;
    local_a8.StringTableID = 0;
    local_a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_a8.StringEnumTableNameID.Number = 0;
    local_a8.TimeExpressionType = None;
    local_a8.DateTime.Ticks = 0;
    local_a8.TimeSpan.Ticks = 0;
    local_a8.IsExpression = false;
    local_a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.UniqueString.Data.ArrayNum = 0;
    local_a8.UniqueString.Data.ArrayMax = 0;
    local_a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.FormatArgs.ArrayNum = 0;
    local_a8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_a8,StringUi,0x3a9fd);
    iVar4 = (pFVar2->DropdownList).ArrayNum;
    if (iVar4 == (pFVar2->DropdownList).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(pFVar2->DropdownList).AllocatorInstance,
                         &(pFVar2->DropdownList).ArrayMax);
    }
    (pFVar2->DropdownList).ArrayNum = iVar4 + 1;
    pFVar8 = (pFVar2->DropdownList).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
    *pFVar8 = (FScriptContainerElement)local_a8.StringTableType;
    *(long64 *)(pFVar8 + 8) = local_a8.StringTableID;
    *(FName *)(pFVar8 + 0x10) = local_a8.StringEnumTableNameID;
    *(long64 *)(pFVar8 + 0x18) = local_a8.DateTime.Ticks;
    *(long64 *)(pFVar8 + 0x20) = local_a8.TimeSpan.Ticks;
    *(EDS_TimeExpression *)(pFVar8 + 0x28) = local_a8.TimeExpressionType;
    *(undefined8 *)(pFVar8 + 0x30) = 0;
    pFVar8[0x2c] = (FScriptContainerElement)local_a8.IsExpression;
    *(FScriptContainerElement **)(pFVar8 + 0x30) = local_a8.UniqueString.Data.AllocatorInstance.Data
    ;
    local_a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + 0x38) = local_a8.UniqueString.Data.ArrayNum;
    *(int *)(pFVar8 + 0x3c) = local_a8.UniqueString.Data.ArrayMax;
    local_a8.UniqueString.Data.ArrayNum = 0;
    local_a8.UniqueString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar8 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar8 + 0x40) = local_a8.FormatArgs.AllocatorInstance.Data;
    local_a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + 0x48) = local_a8.FormatArgs.ArrayNum;
    *(int *)(pFVar8 + 0x4c) = local_a8.FormatArgs.ArrayMax;
    local_a8.FormatArgs.ArrayNum = 0;
    local_a8.FormatArgs.ArrayMax = 0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_a8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.UniqueString.Data.AllocatorInstance.Data);
    }
    pUVar5 = (this->VM_Dropdown_Soting).field0_0x0.DebugPtr;
    local_58.Object = (FDS_ViewModelContext *)local_48.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bebbf90

void __thiscall UDS_VM_GuildList::UnbindModel(UDS_VM_GuildList *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->GuildListUpdateDelegate,this);
    return;
  }
  return;
}

// UpdateList @ 14bebfae0

void __thiscall
UDS_VM_GuildList::UpdateList
          (UDS_VM_GuildList *this,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  UDS_UserObjectListItem *local_res18;
  FScriptContainerElement *local_res20;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  local_res20 = pFVar10 + (longlong)iVar1 * 8;
  while( true ) {
    pFVar4 = local_res20;
    pFVar9 = (FDS_ViewModelContext *)0x0;
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar10 == pFVar4) break;
    lVar2 = *(longlong *)pFVar10;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebfce2;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebfce2;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar6->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
      pFVar6->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar6->ViewModelName).ComparisonIndex = 0;
      (pFVar6->ViewModelName).Number = 0;
      pFVar6->ViewModelTemplateKey = None;
      pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildListSlot__6B_;
      pFVar9 = pFVar6;
    }
    pTVar7 = ::operator_new(0x20);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildListSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar9;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar8 = FDS_ViewModelContext_GuildListSlot::StaticStruct();
    pFVar9->DerivedStaticStruct = (UStruct *)pUVar8;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar9;
      local_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = GuildListSlot;
    pFVar9[1]._padding_ = lVar2;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar9;
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
    UDS_UserObjectListItem::AddContext(this_00,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    local_res18 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_List,(TObjectPtr<UDS_UserObjectListItem>)&local_res18);
    pFVar10 = pFVar10 + 8;
  }
  local_60 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
LAB_14bebfce2:
  pFVar10 = (param_1->AllocatorInstance).Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return;
}

