// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// SetClickDuplicateButton_WrapperImpl @ 14b65caf0

void __cdecl
UDS_VM_GuildNameChangePopup::SetClickDuplicateButton_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement *_Src;
  FName FVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  longlong lVar7;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_38;
  FString FStack_18;
  
  pFVar5 = FText::ToString((FText *)((longlong)param_1 + 0xa8));
  FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_18.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  lVar7 = (longlong)FStack_18.Data.ArrayNum;
  _Src = (pFVar5->Data).AllocatorInstance.Data;
  if (FStack_18.Data.ArrayNum == 0) {
    FStack_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_18.Data.ArrayNum,0,(ForAnyElementType *)&FStack_18,FStack_18.Data.ArrayNum
               ,&FStack_18.Data.ArrayMax);
    memcpy(FStack_18.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  iVar6 = FStack_18.Data.ArrayNum + -1;
  if (FStack_18.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  iVar4 = DS_GuildDataHelper::MinNameLength();
  iVar3 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName;
  if (iVar6 < iVar4) {
    TStack_38._0_4_ = 0;
    TStack_38._4_4_ = 0;
    TStack_38._8_8_ = 0;
    TStack_38._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x3a9fb,Alert_None_01,&TStack_38);
  }
  else {
    if (*(char *)((longlong)param_1 + 0xa1) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
      FVar2 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName;
      TStack_38._8_4_ = iVar3;
      FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName.ComparisonIndex =
           FVar1.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName.Number =
           FVar1.Number;
      TStack_38._0_4_ =
           FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName.
           ComparisonIndex.Value;
      TStack_38._4_4_ =
           FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName.Number;
      FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName = FVar2;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&TStack_38);
    }
    FDS_GuildService::SendCheckGuildNameDuplicationRequest(&FStack_18);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetClickConfrimButton_WrapperImpl @ 14b65cb00

void __cdecl
UDS_VM_GuildNameChangePopup::SetClickConfrimButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  UDS_GuildManager *this;
  FString FStack_38;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  if (*(char *)((longlong)param_1 + 0xa0) != '\0') {
    iVar2 = DS_GuildDataHelper::NameChangeMoneyValue();
    iVar3 = DS_GuildDataHelper::NameChangeMoneyType();
    bVar1 = UDS_MoneyDataSet::CheckEnoughMoney((EDS_MoneyType)iVar3,(longlong)iVar2);
    if (!bVar1) {
      TStack_28._0_8_ = 0;
      TStack_28._8_8_ = 0;
      TStack_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x3aa4a,Alert_None_01,&TStack_28);
      return;
    }
    bVar1 = FText::IsEmpty((FText *)((longlong)param_1 + 0xa8));
    if (bVar1) {
      TStack_28._0_8_ = 0;
      TStack_28._8_8_ = 0;
      TStack_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x3a990,Alert_None_01,&TStack_28);
      return;
    }
    pFVar4 = FText::ToString((FText *)((longlong)param_1 + 0xa8));
    ::FString::FString(&FStack_38,pFVar4);
    iVar2 = FStack_38.Data.ArrayNum + -1;
    if (FStack_38.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    iVar3 = DS_GuildDataHelper::MinNameLength();
    if (iVar2 < iVar3) {
      TStack_28._0_8_ = 0;
      TStack_28._8_8_ = 0;
      TStack_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x3a9fb,Alert_None_01,&TStack_28);
    }
    else {
      this = UDS_GuildManager::GetInst();
      if (this != (UDS_GuildManager *)0x0) {
        UDS_GuildManager::SendUpdateGuildName(this,&FStack_38);
      }
      OnCloseMySelf(param_1);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetClickCancelButton_WrapperImpl @ 14b65cb10

void __cdecl
UDS_VM_GuildNameChangePopup::SetClickCancelButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x2d8) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetTextCommittedEvent_GuildName_WrapperImpl @ 14b65cb20

void __cdecl
UDS_VM_GuildNameChangePopup::SetTextCommittedEvent_GuildName_WrapperImpl
          (void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_10 [8];
  
  if ((*(int *)((longlong)param_2 + 0x10) == 2) || (*(int *)((longlong)param_2 + 0x10) == 1)) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xa8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xa8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xb0) = *(undefined4 *)((longlong)param_2 + 8);
  }
  return;
}

// SetTextCommittedEvent_GuildNameTextChanged_WrapperImpl @ 14b65cb30

void __cdecl
UDS_VM_GuildNameChangePopup::SetTextCommittedEvent_GuildNameTextChanged_WrapperImpl
          (void *param_1,void *param_2)

{
  FScriptContainerElement *_Src;
  FName FVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  longlong lVar5;
  FName FStack_28;
  int iStack_20;
  ForAnyElementType FStack_18;
  int iStack_10;
  int iStack_c;
  
  pFVar3 = FText::ToString(param_2);
  FStack_18.Data = (FScriptContainerElement *)0x0;
  iStack_10 = (pFVar3->Data).ArrayNum;
  lVar5 = (longlong)iStack_10;
  _Src = (pFVar3->Data).AllocatorInstance.Data;
  if (iStack_10 == 0) {
    iStack_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iStack_10,0,&FStack_18,iStack_10,&iStack_c);
    memcpy(FStack_18.Data,_Src,lVar5 * 2);
  }
  iVar4 = iStack_10 + -1;
  if (iStack_10 == 0) {
    iVar4 = 0;
  }
  iVar2 = DS_GuildDataHelper::MinNameLength();
  FVar1 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName;
  if ((bool)*(char *)((longlong)param_1 + 0xa1) != iVar4 < iVar2) {
    iStack_20 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.BitNumber;
    *(bool *)((longlong)param_1 + 0xa1) = iVar4 < iVar2;
    FStack_28 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  return;
}

// StaticClass @ 14b65cb40

UClass * __cdecl UDS_VM_GuildNameChangePopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildNameChangePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildNameChangePopup",
               &Z_Registration_Info_UClass_UDS_VM_GuildNameChangePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildNameChangePopup,0x2e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildNameChangePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildNameChangePopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildNameChangePopup.InnerSingleton;
}

// UDS_VM_GuildNameChangePopup @ 14b65fb70

UDS_VM_GuildNameChangePopup * __thiscall
UDS_VM_GuildNameChangePopup::UDS_VM_GuildNameChangePopup
          (UDS_VM_GuildNameChangePopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildNameChangePopup__6B_;
  FText::FText(&this->Txt_GuildName);
  (this->FixedTxt_Title).StringTableType = StringUi;
  (this->FixedTxt_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Title).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Title).DateTime.Ticks = 0;
  (this->FixedTxt_Title).TimeSpan.Ticks = 0;
  (this->FixedTxt_Title).TimeExpressionType = None;
  (this->FixedTxt_Title).IsExpression = false;
  (this->FixedTxt_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Title).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Title).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Guide).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Guide).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Guide).DateTime.Ticks = 0;
  (this->FixedTxt_Guide).TimeSpan.Ticks = 0;
  (this->FixedTxt_Guide).TimeExpressionType = None;
  (this->FixedTxt_Guide).IsExpression = false;
  (this->FixedTxt_Guide).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Guide).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Guide).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Guide).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Guide).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Guide).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_DuplicateButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_DuplicateButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_DuplicateButton).DateTime.Ticks = 0;
  (this->FixedTxt_DuplicateButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_DuplicateButton).TimeExpressionType = None;
  (this->FixedTxt_DuplicateButton).IsExpression = false;
  (this->FixedTxt_DuplicateButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_DuplicateButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_DuplicateButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_DuplicateButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_DuplicateButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_DuplicateButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_ConfrimButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_ConfrimButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_ConfrimButton).DateTime.Ticks = 0;
  (this->FixedTxt_ConfrimButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_ConfrimButton).TimeExpressionType = None;
  (this->FixedTxt_ConfrimButton).IsExpression = false;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_ConfrimButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_ConfrimButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_ConfrimButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_CancelButton).DateTime.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeExpressionType = None;
  (this->FixedTxt_CancelButton).IsExpression = false;
  (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayMax = 0;
  (this->ClickDuplicateButton)._padding_ = '\0';
  (this->ClickDuplicateButton).bIsCustomSelected = false;
  (this->ClickDuplicateButton).bIsLacked = false;
  (this->ClickDuplicateButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickDuplicateButton).Delegate = 0;
  *(undefined8 *)&(this->ClickDuplicateButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickDuplicateButton).Delegate.field_0x10 = 0;
  (this->ClickConfrimButton)._padding_ = '\0';
  (this->ClickConfrimButton).bIsCustomSelected = false;
  (this->ClickConfrimButton).bIsLacked = false;
  (this->ClickConfrimButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfrimButton).Delegate = 0;
  *(undefined8 *)&(this->ClickConfrimButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfrimButton).Delegate.field_0x10 = 0;
  (this->ClickCancelButton)._padding_ = '\0';
  (this->ClickCancelButton).bIsCustomSelected = false;
  (this->ClickCancelButton).bIsLacked = false;
  (this->ClickCancelButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelButton).Delegate.field_0x10 = 0;
  (this->FixedTxt_Title).StringTableID = 0x3a9db;
  (this->FixedTxt_Guide).StringTableType = StringUi;
  (this->FixedTxt_Guide).StringTableID = 0x3a9dc;
  (this->FixedTxt_DuplicateButton).StringTableType = StringUi;
  (this->FixedTxt_DuplicateButton).StringTableID = 0x6f;
  (this->FixedTxt_ConfrimButton).StringTableType = StringUi;
  (this->FixedTxt_ConfrimButton).StringTableID = 0x65;
  (this->FixedTxt_CancelButton).StringTableType = StringUi;
  (this->FixedTxt_CancelButton).StringTableID = 0x66;
  FText::FText(&(this->TextCommittedEvent_GuildName).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildNameTextChanged).NewText);
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_MoneyDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  return this;
}

// UDS_VM_GuildNameChangePopup @ 14b65fdd0

UDS_VM_GuildNameChangePopup * __thiscall
UDS_VM_GuildNameChangePopup::UDS_VM_GuildNameChangePopup
          (UDS_VM_GuildNameChangePopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildNameChangePopup__6B_;
  FText::FText(&this->Txt_GuildName);
  (this->FixedTxt_Title).StringTableType = StringUi;
  (this->FixedTxt_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Title).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Title).DateTime.Ticks = 0;
  (this->FixedTxt_Title).TimeSpan.Ticks = 0;
  (this->FixedTxt_Title).TimeExpressionType = None;
  (this->FixedTxt_Title).IsExpression = false;
  (this->FixedTxt_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Title).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Title).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Guide).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Guide).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Guide).DateTime.Ticks = 0;
  (this->FixedTxt_Guide).TimeSpan.Ticks = 0;
  (this->FixedTxt_Guide).TimeExpressionType = None;
  (this->FixedTxt_Guide).IsExpression = false;
  (this->FixedTxt_Guide).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Guide).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Guide).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Guide).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Guide).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Guide).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_DuplicateButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_DuplicateButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_DuplicateButton).DateTime.Ticks = 0;
  (this->FixedTxt_DuplicateButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_DuplicateButton).TimeExpressionType = None;
  (this->FixedTxt_DuplicateButton).IsExpression = false;
  (this->FixedTxt_DuplicateButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_DuplicateButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_DuplicateButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_DuplicateButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_DuplicateButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_DuplicateButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_ConfrimButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_ConfrimButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_ConfrimButton).DateTime.Ticks = 0;
  (this->FixedTxt_ConfrimButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_ConfrimButton).TimeExpressionType = None;
  (this->FixedTxt_ConfrimButton).IsExpression = false;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_ConfrimButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_ConfrimButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_ConfrimButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_CancelButton).DateTime.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeExpressionType = None;
  (this->FixedTxt_CancelButton).IsExpression = false;
  (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayMax = 0;
  (this->ClickDuplicateButton)._padding_ = '\0';
  (this->ClickDuplicateButton).bIsCustomSelected = false;
  (this->ClickDuplicateButton).bIsLacked = false;
  (this->ClickDuplicateButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickDuplicateButton).Delegate = 0;
  *(undefined8 *)&(this->ClickDuplicateButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickDuplicateButton).Delegate.field_0x10 = 0;
  (this->ClickConfrimButton)._padding_ = '\0';
  (this->ClickConfrimButton).bIsCustomSelected = false;
  (this->ClickConfrimButton).bIsLacked = false;
  (this->ClickConfrimButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfrimButton).Delegate = 0;
  *(undefined8 *)&(this->ClickConfrimButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfrimButton).Delegate.field_0x10 = 0;
  (this->ClickCancelButton)._padding_ = '\0';
  (this->ClickCancelButton).bIsCustomSelected = false;
  (this->ClickCancelButton).bIsLacked = false;
  (this->ClickCancelButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelButton).Delegate.field_0x10 = 0;
  (this->FixedTxt_Title).StringTableID = 0x3a9db;
  (this->FixedTxt_Guide).StringTableType = StringUi;
  (this->FixedTxt_Guide).StringTableID = 0x3a9dc;
  (this->FixedTxt_DuplicateButton).StringTableType = StringUi;
  (this->FixedTxt_DuplicateButton).StringTableID = 0x6f;
  (this->FixedTxt_ConfrimButton).StringTableType = StringUi;
  (this->FixedTxt_ConfrimButton).StringTableID = 0x65;
  (this->FixedTxt_CancelButton).StringTableType = StringUi;
  (this->FixedTxt_CancelButton).StringTableID = 0x66;
  FText::FText(&(this->TextCommittedEvent_GuildName).NewText);
  FText::FText(&(this->TextCommittedEvent_GuildNameTextChanged).NewText);
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_MoneyDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  return this;
}

// ~UDS_VM_GuildNameChangePopup @ 14b6622b0

void __thiscall
UDS_VM_GuildNameChangePopup::~UDS_VM_GuildNameChangePopup(UDS_VM_GuildNameChangePopup *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildNameChangePopup__6B_;
  pIVar1 = (this->TextCommittedEvent_GuildNameTextChanged).NewText.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->TextCommittedEvent_GuildName).NewText.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancelButton).Delegate);
  pvVar2 = *(void **)&(this->ClickCancelButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancelButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickConfrimButton).Delegate);
  pvVar2 = *(void **)&(this->ClickConfrimButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickConfrimButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickDuplicateButton).Delegate);
  pvVar2 = *(void **)&(this->ClickDuplicateButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickDuplicateButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_CancelButton).FormatArgs.ArrayNum);
  pFVar3 = (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_ConfrimButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_ConfrimButton).FormatArgs.ArrayNum);
  pFVar3 = (this->FixedTxt_ConfrimButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FixedTxt_ConfrimButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_DuplicateButton).FormatArgs.AllocatorInstance.Data
             ,(this->FixedTxt_DuplicateButton).FormatArgs.ArrayNum);
  pFVar3 = (this->FixedTxt_DuplicateButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FixedTxt_DuplicateButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Guide).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Guide).FormatArgs.ArrayNum);
  pFVar3 = (this->FixedTxt_Guide).FormatArgs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FixedTxt_Guide).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Title).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Title).FormatArgs.ArrayNum);
  pFVar3 = (this->FixedTxt_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FixedTxt_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pIVar1 = (this->Txt_GuildName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6647a0

IClassDescriptor * __thiscall
UDS_VM_GuildNameChangePopup::GetFieldNotificationDescriptor(UDS_VM_GuildNameChangePopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildNameChangePopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6650e0

UClass * __cdecl UDS_VM_GuildNameChangePopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildNameChangePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildNameChangePopup",
               &Z_Registration_Info_UClass_UDS_VM_GuildNameChangePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildNameChangePopup,0x2e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildNameChangePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildNameChangePopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildNameChangePopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildNameChangePopup @ 14b665480

void __cdecl UDS_VM_GuildNameChangePopup::StaticRegisterNativesUDS_VM_GuildNameChangePopup(void)

{
  return;
}

// BindModel @ 14be75f60

void __thiscall UDS_VM_GuildNameChangePopup::BindModel(UDS_VM_GuildNameChangePopup *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->CheckGuildNameDuplicationDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildNameChangePopup>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar1->CheckGuildNameDuplicationDelegate,
               (UDS_VM_GuildNameChangePopup *)&stack0x00000010,(pmf_a4e04355 *)this);
  }
  return;
}

// OnCheckGuildNameDuplication @ 14be92ce0

void __thiscall
UDS_VM_GuildNameChangePopup::OnCheckGuildNameDuplication
          (UDS_VM_GuildNameChangePopup *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsCheckGuildNameDuplicationComplete.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsCheckGuildNameDuplicationComplete.FieldName;
  if (this->IsCheckGuildNameDuplicationComplete != param_1) {
    this->IsCheckGuildNameDuplicationComplete = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickCancelButton @ 14be940c0

void __thiscall
UDS_VM_GuildNameChangePopup::OnClickCancelButton
          (UDS_VM_GuildNameChangePopup *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickConfrimButton @ 14be943c0

void __thiscall
UDS_VM_GuildNameChangePopup::OnClickConfrimButton
          (UDS_VM_GuildNameChangePopup *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  UDS_GuildManager *this_00;
  FString local_38;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (this->IsCheckGuildNameDuplicationComplete != false) {
    iVar2 = DS_GuildDataHelper::NameChangeMoneyValue();
    iVar3 = DS_GuildDataHelper::NameChangeMoneyType();
    bVar1 = UDS_MoneyDataSet::CheckEnoughMoney((EDS_MoneyType)iVar3,(longlong)iVar2);
    if (!bVar1) {
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      local_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x3aa4a,Alert_None_01,&local_28);
      return;
    }
    bVar1 = FText::IsEmpty(&this->Txt_GuildName);
    if (bVar1) {
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      local_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x3a990,Alert_None_01,&local_28);
      return;
    }
    pFVar4 = FText::ToString(&this->Txt_GuildName);
    ::FString::FString(&local_38,pFVar4);
    iVar2 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    iVar3 = DS_GuildDataHelper::MinNameLength();
    if (iVar2 < iVar3) {
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      local_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x3a9fb,Alert_None_01,&local_28);
    }
    else {
      this_00 = UDS_GuildManager::GetInst();
      if (this_00 != (UDS_GuildManager *)0x0) {
        UDS_GuildManager::SendUpdateGuildName(this_00,&local_38);
      }
      OnCloseMySelf(this);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnClickDuplicateButton @ 14be94540

void __thiscall
UDS_VM_GuildNameChangePopup::OnClickDuplicateButton
          (UDS_VM_GuildNameChangePopup *this,FDS_ButtonEventField *param_1)

{
  FScriptContainerElement *_Src;
  FName FVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  longlong lVar7;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_38;
  FString local_18;
  
  pFVar5 = FText::ToString(&this->Txt_GuildName);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  lVar7 = (longlong)local_18.Data.ArrayNum;
  _Src = (pFVar5->Data).AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  iVar6 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  iVar4 = DS_GuildDataHelper::MinNameLength();
  iVar3 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName;
  if (iVar6 < iVar4) {
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    local_38._8_8_ = 0;
    local_38._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x3a9fb,Alert_None_01,&local_38);
  }
  else {
    if (this->DisableCheckDuplicationButton != true) {
      this->DisableCheckDuplicationButton = true;
      FVar2 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName;
      local_38._8_4_ = iVar3;
      FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName.ComparisonIndex =
           FVar1.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName.Number =
           FVar1.Number;
      local_38._0_4_ =
           FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName.
           ComparisonIndex.Value;
      local_38._4_4_ =
           FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName.Number;
      FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    FDS_GuildService::SendCheckGuildNameDuplicationRequest(&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnCloseMySelf @ 14be97720

void __thiscall UDS_VM_GuildNameChangePopup::OnCloseMySelf(UDS_VM_GuildNameChangePopup *this)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnOpenPopup @ 14be9a660

void __cdecl UDS_VM_GuildNameChangePopup::OnOpenPopup(UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res10 [3];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_28.Object)->ViewModelTemplateKey = GuildNameChangePopup;
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_18,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSetViewModel @ 14bea0c40

void __thiscall
UDS_VM_GuildNameChangePopup::OnSetViewModel
          (UDS_VM_GuildNameChangePopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  FName FVar5;
  FDS_ViewModelContext_MoneyDisplay *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UDS_VM_MoneyDisplay *pUVar10;
  FText *pFVar11;
  longlong *plVar12;
  undefined1 local_res10 [8];
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38 [2];
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object == (FDS_ViewModelContext *)0x0) goto LAB_14bea0ede;
  if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_MoneyDisplay).field0_0x0.DebugPtr = pUVar10;
    if (pUVar10 != (UDS_VM_MoneyDisplay *)0x0) goto LAB_14bea0cd2;
  }
  else {
LAB_14bea0cd2:
    MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_48);
    pFVar6 = local_48.Object;
    if (local_48.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
      if ((local_48.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&pFVar6->_padding_ = 0x192;
      iVar8 = DS_GuildDataHelper::NameChangeMoneyType();
      pFVar6->MoneyId = (longlong)iVar8;
      iVar8 = DS_GuildDataHelper::NameChangeMoneyValue();
      pFVar6->Quantity = (longlong)iVar8;
      pFVar6->IsLackMoney = true;
      pUVar10 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
      local_38[0].Object = (FDS_ViewModelContext *)local_48.Object;
      local_38[0].SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  pFVar11 = FText::GetEmpty();
  iVar8 = FFieldNotificationClassDescriptor::Txt_GuildName.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::Txt_GuildName.FieldName;
  bVar7 = FText::IdenticalTo(&this->Txt_GuildName,pFVar11,None);
  if (!bVar7) {
    pIVar2 = (pFVar11->TextData).Reference;
    pIVar3 = (this->Txt_GuildName).TextData.Reference;
    if (pIVar3 != pIVar2) {
      (this->Txt_GuildName).TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    (this->Txt_GuildName).Flags = pFVar11->Flags;
    local_88 = FVar5;
    local_80 = iVar8;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  iVar8 = FFieldNotificationClassDescriptor::IsCheckGuildNameDuplicationComplete.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::IsCheckGuildNameDuplicationComplete.FieldName;
  plVar12 = &this->_padding_;
  if (this->IsCheckGuildNameDuplicationComplete != false) {
    this->IsCheckGuildNameDuplicationComplete = false;
    local_70 = iVar8;
    local_78 = FVar5;
    (**(code **)(*plVar12 + 0x38))(plVar12,&local_78);
  }
  iVar8 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName;
  if (this->DisableCheckDuplicationButton != true) {
    this->DisableCheckDuplicationButton = true;
    local_60 = iVar8;
    local_68 = FVar5;
    (**(code **)(*plVar12 + 0x38))(plVar12,&local_68);
  }
  iVar9 = DS_GuildDataHelper::MaxNameLength();
  iVar8 = FFieldNotificationClassDescriptor::GuildNameMaxLength.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::GuildNameMaxLength.FieldName;
  if (this->GuildNameMaxLength != iVar9) {
    this->GuildNameMaxLength = iVar9;
    local_50 = iVar8;
    local_58 = FVar5;
    (**(code **)(*plVar12 + 0x38))(plVar12,&local_58);
  }
LAB_14bea0ede:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextCommittedEvent_GuildName @ 14bea6fe0

void __thiscall
UDS_VM_GuildNameChangePopup::OnTextCommittedEvent_GuildName
          (UDS_VM_GuildNameChangePopup *this,FDS_TextCommittedEventField *param_1)

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

// OnTextCommittedEvent_GuildNameTextChanged @ 14bea7060

void __thiscall
UDS_VM_GuildNameChangePopup::OnTextCommittedEvent_GuildNameTextChanged
          (UDS_VM_GuildNameChangePopup *this,FDS_TextCommittedEventField *param_1)

{
  FScriptContainerElement *_Src;
  FName FVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  longlong lVar5;
  FName local_28;
  int local_20;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pFVar3 = FText::ToString(&param_1->NewText);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = (pFVar3->Data).ArrayNum;
  lVar5 = (longlong)local_10;
  _Src = (pFVar3->Data).AllocatorInstance.Data;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar5 * 2);
  }
  iVar4 = local_10 + -1;
  if (local_10 == 0) {
    iVar4 = 0;
  }
  iVar2 = DS_GuildDataHelper::MinNameLength();
  FVar1 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName;
  if (this->DisableCheckDuplicationButton != iVar4 < iVar2) {
    local_20 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.BitNumber;
    this->DisableCheckDuplicationButton = iVar4 < iVar2;
    local_28 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// OpenPopup @ 14beabaf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_GuildNameChangePopup::OpenPopup(void)

{
  UDS_WindowManager *this;
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar1[3] = OnOpenPopup;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    UDS_WindowManager::OpenWindow
              (this,GuildPopupNameChange,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_48);
  }
  return;
}

// SetDisableCheckDuplicationButton @ 14beadfd0

void __thiscall
UDS_VM_GuildNameChangePopup::SetDisableCheckDuplicationButton
          (UDS_VM_GuildNameChangePopup *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableCheckDuplicationButton.FieldName;
  if (this->DisableCheckDuplicationButton != param_1) {
    this->DisableCheckDuplicationButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGuildNameMaxLength @ 14beafc50

void __thiscall
UDS_VM_GuildNameChangePopup::SetGuildNameMaxLength(UDS_VM_GuildNameChangePopup *this,int param_1)

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

// SetIsCheckGuildNameDuplicationComplete @ 14beb1330

void __thiscall
UDS_VM_GuildNameChangePopup::SetIsCheckGuildNameDuplicationComplete
          (UDS_VM_GuildNameChangePopup *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsCheckGuildNameDuplicationComplete.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsCheckGuildNameDuplicationComplete.FieldName;
  if (this->IsCheckGuildNameDuplicationComplete != param_1) {
    this->IsCheckGuildNameDuplicationComplete = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTxt_GuildName @ 14beb56b0

void __thiscall
UDS_VM_GuildNameChangePopup::SetTxt_GuildName(UDS_VM_GuildNameChangePopup *this,FText *param_1)

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

// SetVM_MoneyDisplay @ 14beb88e0

void __thiscall UDS_VM_GuildNameChangePopup::SetVM_MoneyDisplay(UDS_VM_GuildNameChangePopup *this)

{
  code *pcVar1;
  FDS_ViewModelContext_MoneyDisplay *pFVar2;
  bool bVar3;
  int iVar4;
  UDS_VM_MoneyDisplay *pUVar5;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
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
  MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x192;
  iVar4 = DS_GuildDataHelper::NameChangeMoneyType();
  pFVar2->MoneyId = (longlong)iVar4;
  iVar4 = DS_GuildDataHelper::NameChangeMoneyValue();
  pFVar2->Quantity = (longlong)iVar4;
  pFVar2->IsLackMoney = true;
  pUVar5 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
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
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bebc110

void __thiscall UDS_VM_GuildNameChangePopup::UnbindModel(UDS_VM_GuildNameChangePopup *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->CheckGuildNameDuplicationDelegate,this);
    return;
  }
  return;
}

