// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetClickApplyButton_WrapperImpl @ 14b65b920

void __cdecl
UDS_VM_GuildMemberGradePopup::SetClickApplyButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr aFStackX_18 [2];
  code *pcStack_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_78;
  FDS_Text FStack_60;
  
  this = UDS_CommonPopupManager::GetInst();
  if (this != (UDS_CommonPopupManager *)0x0) {
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar1 = FWeakObjectPtr::IsValid(aFStackX_18);
    if (bVar1) {
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3aa54);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3aa55);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      uStack_80._0_4_ = 0;
      pcStack_88 = OnSumitPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildMemberGradePopup>
                         (&TStack_78,param_1,(pmf_c3a6a401 *)&pcStack_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      pcStack_88 = OnSumitPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildMemberGradePopup>
                         (&TStack_78,param_1,(pmf_c3a6a401 *)&pcStack_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// SetClickCancelButton_WrapperImpl @ 14b65b930

void __cdecl
UDS_VM_GuildMemberGradePopup::SetClickCancelButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 800) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b65b940

UClass * __cdecl UDS_VM_GuildMemberGradePopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMemberGradePopup",
               &Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMemberGradePopup,0x328,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildMemberGradePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMemberGradePopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopup.InnerSingleton;
}

// UDS_VM_GuildMemberGradePopup @ 14b65ee70

UDS_VM_GuildMemberGradePopup * __thiscall
UDS_VM_GuildMemberGradePopup::UDS_VM_GuildMemberGradePopup
          (UDS_VM_GuildMemberGradePopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberGradePopup__6B_;
  (this->FixedTxt_PopupTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_PopupTitle).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_PopupTitle).DateTime.Ticks = 0;
  (this->FixedTxt_PopupTitle).TimeSpan.Ticks = 0;
  (this->FixedTxt_PopupTitle).TimeExpressionType = None;
  (this->FixedTxt_PopupTitle).IsExpression = false;
  (this->FixedTxt_PopupTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_PopupTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_PopupTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_PopupTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_PopupTitle).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_PopupTitle).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Grade).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Grade).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Grade).DateTime.Ticks = 0;
  (this->FixedTxt_Grade).TimeSpan.Ticks = 0;
  (this->FixedTxt_Grade).TimeExpressionType = None;
  (this->FixedTxt_Grade).IsExpression = false;
  (this->FixedTxt_Grade).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Grade).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Name).DateTime.Ticks = 0;
  (this->FixedTxt_Name).TimeSpan.Ticks = 0;
  (this->FixedTxt_Name).TimeExpressionType = None;
  (this->FixedTxt_Name).IsExpression = false;
  (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Name).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Level).DateTime.Ticks = 0;
  (this->FixedTxt_Level).TimeSpan.Ticks = 0;
  (this->FixedTxt_Level).TimeExpressionType = None;
  (this->FixedTxt_Level).IsExpression = false;
  (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Level).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeSetting).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeSetting).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeSetting).DateTime.Ticks = 0;
  (this->FixedTxt_GradeSetting).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeSetting).TimeExpressionType = None;
  (this->FixedTxt_GradeSetting).IsExpression = false;
  (this->FixedTxt_GradeSetting).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeSetting).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeSetting).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeSetting).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeSetting).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeSetting).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_ApplyButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_ApplyButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_ApplyButton).DateTime.Ticks = 0;
  (this->FixedTxt_ApplyButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_ApplyButton).TimeExpressionType = None;
  (this->FixedTxt_ApplyButton).IsExpression = false;
  (this->FixedTxt_ApplyButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_ApplyButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_ApplyButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_ApplyButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_ApplyButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_ApplyButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_CancelButton).DateTime.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeExpressionType = None;
  (this->FixedTxt_PopupTitle).StringTableType = StringUi;
  (this->FixedTxt_PopupTitle).StringTableID = 0x3aa01;
  (this->FixedTxt_Grade).StringTableType = StringUi;
  (this->FixedTxt_Grade).StringTableID = 0x3a9d1;
  (this->FixedTxt_Name).StringTableType = StringUi;
  (this->FixedTxt_Name).StringTableID = 0x3a9d2;
  (this->FixedTxt_Level).StringTableType = StringUi;
  (this->FixedTxt_Level).StringTableID = 0x3a9d3;
  (this->FixedTxt_GradeSetting).StringTableType = StringUi;
  (this->FixedTxt_GradeSetting).StringTableID = 0x3aa3c;
  (this->FixedTxt_ApplyButton).StringTableType = StringUi;
  (this->FixedTxt_ApplyButton).StringTableID = 0x6e;
  (this->FixedTxt_CancelButton).StringTableType = StringUi;
  (this->FixedTxt_CancelButton).StringTableID = 0x66;
  (this->FixedTxt_CancelButton).IsExpression = false;
  (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayMax = 0;
  (this->ClickApplyButton)._padding_ = '\0';
  (this->ClickApplyButton).bIsCustomSelected = false;
  (this->ClickApplyButton).bIsLacked = false;
  (this->ClickApplyButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickApplyButton).Delegate = 0;
  *(undefined8 *)&(this->ClickApplyButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickApplyButton).Delegate.field_0x10 = 0;
  (this->ClickCancelButton)._padding_ = '\0';
  (this->ClickCancelButton).bIsCustomSelected = false;
  (this->ClickCancelButton).bIsLacked = false;
  (this->ClickCancelButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelButton).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  (this->CloseMySelf).bIsActivate = false;
  return this;
}

// UDS_VM_GuildMemberGradePopup @ 14b65f120

UDS_VM_GuildMemberGradePopup * __thiscall
UDS_VM_GuildMemberGradePopup::UDS_VM_GuildMemberGradePopup
          (UDS_VM_GuildMemberGradePopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberGradePopup__6B_;
  (this->FixedTxt_PopupTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_PopupTitle).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_PopupTitle).DateTime.Ticks = 0;
  (this->FixedTxt_PopupTitle).TimeSpan.Ticks = 0;
  (this->FixedTxt_PopupTitle).TimeExpressionType = None;
  (this->FixedTxt_PopupTitle).IsExpression = false;
  (this->FixedTxt_PopupTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_PopupTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_PopupTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_PopupTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_PopupTitle).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_PopupTitle).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Grade).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Grade).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Grade).DateTime.Ticks = 0;
  (this->FixedTxt_Grade).TimeSpan.Ticks = 0;
  (this->FixedTxt_Grade).TimeExpressionType = None;
  (this->FixedTxt_Grade).IsExpression = false;
  (this->FixedTxt_Grade).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Grade).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Name).DateTime.Ticks = 0;
  (this->FixedTxt_Name).TimeSpan.Ticks = 0;
  (this->FixedTxt_Name).TimeExpressionType = None;
  (this->FixedTxt_Name).IsExpression = false;
  (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Name).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Level).DateTime.Ticks = 0;
  (this->FixedTxt_Level).TimeSpan.Ticks = 0;
  (this->FixedTxt_Level).TimeExpressionType = None;
  (this->FixedTxt_Level).IsExpression = false;
  (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Level).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeSetting).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeSetting).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeSetting).DateTime.Ticks = 0;
  (this->FixedTxt_GradeSetting).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeSetting).TimeExpressionType = None;
  (this->FixedTxt_GradeSetting).IsExpression = false;
  (this->FixedTxt_GradeSetting).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeSetting).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeSetting).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeSetting).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeSetting).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeSetting).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_ApplyButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_ApplyButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_ApplyButton).DateTime.Ticks = 0;
  (this->FixedTxt_ApplyButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_ApplyButton).TimeExpressionType = None;
  (this->FixedTxt_ApplyButton).IsExpression = false;
  (this->FixedTxt_ApplyButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_ApplyButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_ApplyButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_ApplyButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_ApplyButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_ApplyButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_CancelButton).DateTime.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeExpressionType = None;
  (this->FixedTxt_PopupTitle).StringTableType = StringUi;
  (this->FixedTxt_PopupTitle).StringTableID = 0x3aa01;
  (this->FixedTxt_Grade).StringTableType = StringUi;
  (this->FixedTxt_Grade).StringTableID = 0x3a9d1;
  (this->FixedTxt_Name).StringTableType = StringUi;
  (this->FixedTxt_Name).StringTableID = 0x3a9d2;
  (this->FixedTxt_Level).StringTableType = StringUi;
  (this->FixedTxt_Level).StringTableID = 0x3a9d3;
  (this->FixedTxt_GradeSetting).StringTableType = StringUi;
  (this->FixedTxt_GradeSetting).StringTableID = 0x3aa3c;
  (this->FixedTxt_ApplyButton).StringTableType = StringUi;
  (this->FixedTxt_ApplyButton).StringTableID = 0x6e;
  (this->FixedTxt_CancelButton).StringTableType = StringUi;
  (this->FixedTxt_CancelButton).StringTableID = 0x66;
  (this->FixedTxt_CancelButton).IsExpression = false;
  (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayMax = 0;
  (this->ClickApplyButton)._padding_ = '\0';
  (this->ClickApplyButton).bIsCustomSelected = false;
  (this->ClickApplyButton).bIsLacked = false;
  (this->ClickApplyButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickApplyButton).Delegate = 0;
  *(undefined8 *)&(this->ClickApplyButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickApplyButton).Delegate.field_0x10 = 0;
  (this->ClickCancelButton)._padding_ = '\0';
  (this->ClickCancelButton).bIsCustomSelected = false;
  (this->ClickCancelButton).bIsLacked = false;
  (this->ClickCancelButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelButton).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  (this->CloseMySelf).bIsActivate = false;
  return this;
}

// ~UDS_VM_GuildMemberGradePopup @ 14b661e00

void __thiscall
UDS_VM_GuildMemberGradePopup::~UDS_VM_GuildMemberGradePopup(UDS_VM_GuildMemberGradePopup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberGradePopup__6B_;
  pFVar1 = (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickApplyButton).Delegate);
  pvVar2 = *(void **)&(this->ClickApplyButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickApplyButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_CancelButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_ApplyButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_ApplyButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_ApplyButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_ApplyButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeSetting).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeSetting).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GradeSetting).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GradeSetting).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Level).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Name).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Grade).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Grade).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_PopupTitle).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_PopupTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_PopupTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_PopupTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6645e0

IClassDescriptor * __thiscall
UDS_VM_GuildMemberGradePopup::GetFieldNotificationDescriptor(UDS_VM_GuildMemberGradePopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildMemberGradePopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b664de0

UClass * __cdecl UDS_VM_GuildMemberGradePopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMemberGradePopup",
               &Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMemberGradePopup,0x328,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildMemberGradePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMemberGradePopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildMemberGradePopup @ 14b665440

void __cdecl UDS_VM_GuildMemberGradePopup::StaticRegisterNativesUDS_VM_GuildMemberGradePopup(void)

{
  return;
}

// BindModel @ 14be75f20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMemberGradePopup::BindModel(UDS_VM_GuildMemberGradePopup *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14be8ccb0

void __thiscall UDS_VM_GuildMemberGradePopup::InitViewModel(UDS_VM_GuildMemberGradePopup *this)

{
  return;
}

// OnChangeLeaderPopup_Cancel @ 14be90a60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildMemberGradePopup::OnChangeLeaderPopup_Cancel
          (UDS_VM_GuildMemberGradePopup *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

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

// OnChangeLeaderPopup_Confrim @ 14be90aa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildMemberGradePopup::OnChangeLeaderPopup_Confrim
          (UDS_VM_GuildMemberGradePopup *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res8 [4];
  uint local_res18 [4];
  FName local_18;
  int local_10;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res18,local_res8);
  }
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickApplyButton @ 14be935d0

void __thiscall
UDS_VM_GuildMemberGradePopup::OnClickApplyButton
          (UDS_VM_GuildMemberGradePopup *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar2;
  FDS_Text *pFVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  FWeakObjectPtr local_res18 [2];
  code *local_88;
  undefined8 uStack_80;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_78;
  FDS_Text local_60;
  
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 != (UDS_CommonPopupManager *)0x0) {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa54);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa55);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      uStack_80._0_4_ = 0;
      local_88 = OnSumitPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildMemberGradePopup>
                         (&local_78,this,(pmf_c3a6a401 *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OnSumitPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildMemberGradePopup>
                         (&local_78,this,(pmf_c3a6a401 *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// OnClickCancelButton @ 14be94080

void __thiscall
UDS_VM_GuildMemberGradePopup::OnClickCancelButton
          (UDS_VM_GuildMemberGradePopup *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCloseMySelf @ 14be976e0

void __thiscall UDS_VM_GuildMemberGradePopup::OnCloseMySelf(UDS_VM_GuildMemberGradePopup *this)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bea0660

void __thiscall
UDS_VM_GuildMemberGradePopup::OnSetViewModel
          (UDS_VM_GuildMemberGradePopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    UpdateList(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSumitPopup_Cancel @ 14bea6bc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildMemberGradePopup::OnSumitPopup_Cancel
          (UDS_VM_GuildMemberGradePopup *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

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

// OnSumitPopup_Confrim @ 14bea6c00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildMemberGradePopup::OnSumitPopup_Confrim
          (UDS_VM_GuildMemberGradePopup *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res8 [4];
  uint local_res18 [4];
  FName local_18;
  int local_10;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res18,local_res8);
  }
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OpenChangeLeaderPopup @ 14bea9fc0

void __thiscall
UDS_VM_GuildMemberGradePopup::OpenChangeLeaderPopup(UDS_VM_GuildMemberGradePopup *this)

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
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9f0);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3a9f1);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80._0_4_ = 0;
      local_88 = OnSumitPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildMemberGradePopup>
                         (&local_78,this,(pmf_c3a6a401 *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OnSumitPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildMemberGradePopup>
                         (&local_78,this,(pmf_c3a6a401 *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// OpenSumitPopup @ 14beabbb0

void __thiscall UDS_VM_GuildMemberGradePopup::OpenSumitPopup(UDS_VM_GuildMemberGradePopup *this)

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
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa54);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa55);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80._0_4_ = 0;
      local_88 = OnSumitPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildMemberGradePopup>
                         (&local_78,this,(pmf_c3a6a401 *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OnSumitPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildMemberGradePopup>
                         (&local_78,this,(pmf_c3a6a401 *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// UnbindModel @ 14bebc0d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMemberGradePopup::UnbindModel(UDS_VM_GuildMemberGradePopup *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

// UpdateList @ 14bebfd20

void __thiscall UDS_VM_GuildMemberGradePopup::UpdateList(UDS_VM_GuildMemberGradePopup *this)

{
  code *pcVar1;
  FWeakObjectPtr *pFVar2;
  bool bVar3;
  long64 lVar4;
  UObject *pUVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  ulonglong uVar9;
  longlong lVar10;
  FDS_ViewModelContext *pFVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  uint local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_UserObjectListItem *local_98;
  FWeakObjectPtr *local_90;
  FName local_88;
  int local_80;
  TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_List);
  lVar4 = UDS_GuildManager::GetMyGuildUID();
  lVar10 = 0;
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    lVar10 = *(longlong *)&pUVar5[6].field_0x8;
  }
  UDS_GuildManager::GetGuildMemberDatas(&local_78,lVar4);
  local_res10 = local_78.ArrayNum;
  uVar9 = (ulonglong)(int)local_res10;
  local_90 = (FWeakObjectPtr *)(local_78.AllocatorInstance.Data + uVar9 * 8);
  FVar12.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    pFVar2 = local_90;
    pFVar11 = (FDS_ViewModelContext *)0x0;
    if (local_78.ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar12.Data == pFVar2) break;
    local_res18 = *(FWeakObjectPtr *)FVar12.Data;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebff99;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebff99;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if ((bVar3) &&
       (pUVar5 = FWeakObjectPtr::Get(&local_res18), lVar10 != *(longlong *)&pUVar5[1].field_0x8)) {
      pFVar6 = ::operator_new(0x28);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
        pFVar6->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildMemberGradePopupSlot__6B_;
        pFVar6[1]._padding_ = 0;
        pFVar11 = pFVar6;
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
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildMemberGradePopupSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar11;
      }
      if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_GuildMemberGradePopupSlot::StaticStruct();
      pFVar11->DerivedStaticStruct = (UStruct *)pUVar8;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar11;
        local_68.SharedReferenceCount.ReferenceController = pTVar7;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar11->ViewModelTemplateKey = GuildMemberGradePopupSlot;
      pFVar11[1]._padding_ = (longlong)local_res18;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar11;
      local_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_UserObjectListItem::AddContext(this_00,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      local_98 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_List,(TObjectPtr<UDS_UserObjectListItem>)&local_98);
    }
    FVar12.Data = FVar12.Data + 8;
    uVar9 = (ulonglong)local_res10;
  }
  local_80 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
LAB_14bebff99:
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

