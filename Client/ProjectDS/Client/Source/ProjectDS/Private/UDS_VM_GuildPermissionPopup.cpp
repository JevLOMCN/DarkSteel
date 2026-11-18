// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetClickApplyButton_WrapperImpl @ 14b659b70

void __cdecl
UDS_VM_GuildPermissionPopup::SetClickApplyButton_WrapperImpl(void *param_1,void *param_2)

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
      pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3aa4f);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&FStack_60,StringUi,0x3aa50);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      uStack_80._0_4_ = 0;
      pcStack_88 = OpenSumitPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildPermissionPopup>
                         (&TStack_78,param_1,(pmf_9f6f0aab *)&pcStack_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      pcStack_88 = OpenSumitPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildPermissionPopup>
                         (&TStack_78,param_1,(pmf_9f6f0aab *)&pcStack_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(aFStackX_18);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// SetClickCancelButton_WrapperImpl @ 14b659b80

void __cdecl
UDS_VM_GuildPermissionPopup::SetClickCancelButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x450) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b659b90

UClass * __cdecl UDS_VM_GuildPermissionPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildPermissionPopup",
               &Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildPermissionPopup,0x470,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildPermissionPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildPermissionPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopup.InnerSingleton;
}

// UDS_VM_GuildPermissionPopup @ 14b660030

UDS_VM_GuildPermissionPopup * __thiscall
UDS_VM_GuildPermissionPopup::UDS_VM_GuildPermissionPopup
          (UDS_VM_GuildPermissionPopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildPermissionPopup__6B_;
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
  (this->FixedTxt_GradeMaster).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeMaster).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeMaster).DateTime.Ticks = 0;
  (this->FixedTxt_GradeMaster).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeMaster).TimeExpressionType = None;
  (this->FixedTxt_GradeMaster).IsExpression = false;
  (this->FixedTxt_GradeMaster).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeMaster).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeMaster).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeMaster).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeMaster).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeMaster).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeSubMaster).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeSubMaster).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeSubMaster).DateTime.Ticks = 0;
  (this->FixedTxt_GradeSubMaster).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeSubMaster).TimeExpressionType = None;
  (this->FixedTxt_GradeSubMaster).IsExpression = false;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeSubMaster).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_GradeSubMaster).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeSubMaster).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeManager).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeManager).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeManager).DateTime.Ticks = 0;
  (this->FixedTxt_GradeManager).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeManager).TimeExpressionType = None;
  (this->FixedTxt_GradeManager).IsExpression = false;
  (this->FixedTxt_GradeManager).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManager).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeManager).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeManager).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManager).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeManager).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeNormal).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeNormal).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeNormal).DateTime.Ticks = 0;
  (this->FixedTxt_GradeNormal).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeNormal).TimeExpressionType = None;
  (this->FixedTxt_GradeNormal).IsExpression = false;
  (this->FixedTxt_GradeNormal).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNormal).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeNormal).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeNormal).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNormal).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeNormal).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeNewbie).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeNewbie).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeNewbie).DateTime.Ticks = 0;
  (this->FixedTxt_GradeNewbie).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeNewbie).TimeExpressionType = None;
  (this->FixedTxt_GradeNewbie).IsExpression = false;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeNewbie).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNewbie).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeNewbie).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_MemberManagement).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_MemberManagement).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_MemberManagement).DateTime.Ticks = 0;
  (this->FixedTxt_MemberManagement).TimeSpan.Ticks = 0;
  (this->FixedTxt_MemberManagement).TimeExpressionType = None;
  (this->FixedTxt_PopupTitle).StringTableType = StringUi;
  (this->FixedTxt_PopupTitle).StringTableID = 0x3aa00;
  (this->FixedTxt_GradeMaster).StringTableType = StringUi;
  (this->FixedTxt_GradeMaster).StringTableID = 0x3a9e7;
  (this->FixedTxt_GradeSubMaster).StringTableType = StringUi;
  (this->FixedTxt_GradeSubMaster).StringTableID = 0x3a9e8;
  (this->FixedTxt_GradeManager).StringTableType = StringUi;
  (this->FixedTxt_GradeManager).StringTableID = 0x3a9e9;
  (this->FixedTxt_GradeNormal).StringTableType = StringUi;
  (this->FixedTxt_GradeNormal).StringTableID = 0x3a9ea;
  (this->FixedTxt_GradeNewbie).StringTableType = StringUi;
  (this->FixedTxt_GradeNewbie).StringTableID = 0x3aa02;
  (this->FixedTxt_MemberManagement).StringTableType = StringUi;
  (this->FixedTxt_MemberManagement).StringTableID = 0x3a9eb;
  (this->FixedTxt_MemberManagement).IsExpression = false;
  (this->FixedTxt_MemberManagement).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_MemberManagement).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_MemberManagement).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_MemberManagement).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_MemberManagement).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_MemberManagement).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildMoneyManagement).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildMoneyManagement).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildMoneyManagement).DateTime.Ticks = 0;
  (this->FixedTxt_GuildMoneyManagement).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildMoneyManagement).TimeExpressionType = None;
  (this->FixedTxt_GuildMoneyManagement).IsExpression = false;
  (this->FixedTxt_GuildMoneyManagement).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMoneyManagement).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildMoneyManagement).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildMoneyManagement).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMoneyManagement).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildMoneyManagement).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildSetting).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildSetting).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildSetting).DateTime.Ticks = 0;
  (this->FixedTxt_GuildSetting).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildSetting).TimeExpressionType = None;
  (this->FixedTxt_GuildSetting).IsExpression = false;
  (this->FixedTxt_GuildSetting).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildSetting).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildSetting).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildSetting).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildSetting).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildSetting).FormatArgs.ArrayMax = 0;
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
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_PermissionMemberManagement).field0_0x0.DebugPtr = (UDS_VM_GuildPermissionPopupSlot *)0x0
  ;
  (this->VM_PermissionMoneyManagement).field0_0x0.DebugPtr = (UDS_VM_GuildPermissionPopupSlot *)0x0;
  (this->VM_PermissionGuildSetting).field0_0x0.DebugPtr = (UDS_VM_GuildPermissionPopupSlot *)0x0;
  (this->FixedTxt_GuildMoneyManagement).StringTableType = StringUi;
  (this->FixedTxt_GuildMoneyManagement).StringTableID = 0x3a9ec;
  (this->FixedTxt_GuildSetting).StringTableType = StringUi;
  (this->FixedTxt_GuildSetting).StringTableID = 0x3a9ed;
  (this->FixedTxt_ApplyButton).StringTableType = StringUi;
  (this->FixedTxt_ApplyButton).StringTableID = 0x6e;
  (this->FixedTxt_CancelButton).StringTableType = StringUi;
  (this->FixedTxt_CancelButton).StringTableID = 0x66;
  return this;
}

// UDS_VM_GuildPermissionPopup @ 14b660430

UDS_VM_GuildPermissionPopup * __thiscall
UDS_VM_GuildPermissionPopup::UDS_VM_GuildPermissionPopup
          (UDS_VM_GuildPermissionPopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildPermissionPopup__6B_;
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
  (this->FixedTxt_GradeMaster).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeMaster).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeMaster).DateTime.Ticks = 0;
  (this->FixedTxt_GradeMaster).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeMaster).TimeExpressionType = None;
  (this->FixedTxt_GradeMaster).IsExpression = false;
  (this->FixedTxt_GradeMaster).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeMaster).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeMaster).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeMaster).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeMaster).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeMaster).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeSubMaster).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeSubMaster).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeSubMaster).DateTime.Ticks = 0;
  (this->FixedTxt_GradeSubMaster).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeSubMaster).TimeExpressionType = None;
  (this->FixedTxt_GradeSubMaster).IsExpression = false;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeSubMaster).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_GradeSubMaster).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeSubMaster).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeManager).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeManager).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeManager).DateTime.Ticks = 0;
  (this->FixedTxt_GradeManager).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeManager).TimeExpressionType = None;
  (this->FixedTxt_GradeManager).IsExpression = false;
  (this->FixedTxt_GradeManager).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManager).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeManager).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeManager).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManager).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeManager).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeNormal).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeNormal).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeNormal).DateTime.Ticks = 0;
  (this->FixedTxt_GradeNormal).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeNormal).TimeExpressionType = None;
  (this->FixedTxt_GradeNormal).IsExpression = false;
  (this->FixedTxt_GradeNormal).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNormal).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeNormal).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeNormal).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNormal).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeNormal).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeNewbie).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeNewbie).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeNewbie).DateTime.Ticks = 0;
  (this->FixedTxt_GradeNewbie).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeNewbie).TimeExpressionType = None;
  (this->FixedTxt_GradeNewbie).IsExpression = false;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeNewbie).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNewbie).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeNewbie).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_MemberManagement).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_MemberManagement).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_MemberManagement).DateTime.Ticks = 0;
  (this->FixedTxt_MemberManagement).TimeSpan.Ticks = 0;
  (this->FixedTxt_MemberManagement).TimeExpressionType = None;
  (this->FixedTxt_PopupTitle).StringTableType = StringUi;
  (this->FixedTxt_PopupTitle).StringTableID = 0x3aa00;
  (this->FixedTxt_GradeMaster).StringTableType = StringUi;
  (this->FixedTxt_GradeMaster).StringTableID = 0x3a9e7;
  (this->FixedTxt_GradeSubMaster).StringTableType = StringUi;
  (this->FixedTxt_GradeSubMaster).StringTableID = 0x3a9e8;
  (this->FixedTxt_GradeManager).StringTableType = StringUi;
  (this->FixedTxt_GradeManager).StringTableID = 0x3a9e9;
  (this->FixedTxt_GradeNormal).StringTableType = StringUi;
  (this->FixedTxt_GradeNormal).StringTableID = 0x3a9ea;
  (this->FixedTxt_GradeNewbie).StringTableType = StringUi;
  (this->FixedTxt_GradeNewbie).StringTableID = 0x3aa02;
  (this->FixedTxt_MemberManagement).StringTableType = StringUi;
  (this->FixedTxt_MemberManagement).StringTableID = 0x3a9eb;
  (this->FixedTxt_MemberManagement).IsExpression = false;
  (this->FixedTxt_MemberManagement).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_MemberManagement).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_MemberManagement).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_MemberManagement).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_MemberManagement).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_MemberManagement).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildMoneyManagement).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildMoneyManagement).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildMoneyManagement).DateTime.Ticks = 0;
  (this->FixedTxt_GuildMoneyManagement).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildMoneyManagement).TimeExpressionType = None;
  (this->FixedTxt_GuildMoneyManagement).IsExpression = false;
  (this->FixedTxt_GuildMoneyManagement).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMoneyManagement).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildMoneyManagement).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildMoneyManagement).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildMoneyManagement).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildMoneyManagement).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GuildSetting).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GuildSetting).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GuildSetting).DateTime.Ticks = 0;
  (this->FixedTxt_GuildSetting).TimeSpan.Ticks = 0;
  (this->FixedTxt_GuildSetting).TimeExpressionType = None;
  (this->FixedTxt_GuildSetting).IsExpression = false;
  (this->FixedTxt_GuildSetting).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildSetting).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GuildSetting).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GuildSetting).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GuildSetting).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GuildSetting).FormatArgs.ArrayMax = 0;
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
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_PermissionMemberManagement).field0_0x0.DebugPtr = (UDS_VM_GuildPermissionPopupSlot *)0x0
  ;
  (this->VM_PermissionMoneyManagement).field0_0x0.DebugPtr = (UDS_VM_GuildPermissionPopupSlot *)0x0;
  (this->VM_PermissionGuildSetting).field0_0x0.DebugPtr = (UDS_VM_GuildPermissionPopupSlot *)0x0;
  (this->FixedTxt_GuildMoneyManagement).StringTableType = StringUi;
  (this->FixedTxt_GuildMoneyManagement).StringTableID = 0x3a9ec;
  (this->FixedTxt_GuildSetting).StringTableType = StringUi;
  (this->FixedTxt_GuildSetting).StringTableID = 0x3a9ed;
  (this->FixedTxt_ApplyButton).StringTableType = StringUi;
  (this->FixedTxt_ApplyButton).StringTableID = 0x6e;
  (this->FixedTxt_CancelButton).StringTableType = StringUi;
  (this->FixedTxt_CancelButton).StringTableID = 0x66;
  return this;
}

// ~UDS_VM_GuildPermissionPopup @ 14b6624b0

void __thiscall
UDS_VM_GuildPermissionPopup::~UDS_VM_GuildPermissionPopup(UDS_VM_GuildPermissionPopup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildPermissionPopup__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancelButton).Delegate);
  pvVar1 = *(void **)&(this->ClickCancelButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancelButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickApplyButton).Delegate);
  pvVar1 = *(void **)&(this->ClickApplyButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickApplyButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_CancelButton).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_ApplyButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_ApplyButton).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_ApplyButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_ApplyButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GuildSetting).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildSetting).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_GuildSetting).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_GuildSetting).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GuildMoneyManagement).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GuildMoneyManagement).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_GuildMoneyManagement).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_GuildMoneyManagement).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_MemberManagement).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_MemberManagement).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_MemberManagement).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_MemberManagement).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeNewbie).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeNewbie).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_GradeNewbie).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_GradeNewbie).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeNormal).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeNormal).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_GradeNormal).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_GradeNormal).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeManager).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeManager).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_GradeManager).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_GradeManager).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeSubMaster).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeSubMaster).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_GradeSubMaster).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_GradeSubMaster).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeMaster).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeMaster).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_GradeMaster).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_GradeMaster).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_PopupTitle).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_PopupTitle).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_PopupTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_PopupTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b664810

IClassDescriptor * __thiscall
UDS_VM_GuildPermissionPopup::GetFieldNotificationDescriptor(UDS_VM_GuildPermissionPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildPermissionPopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6651a0

UClass * __cdecl UDS_VM_GuildPermissionPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildPermissionPopup",
               &Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildPermissionPopup,0x470,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildPermissionPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildPermissionPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildPermissionPopup @ 14b665490

void __cdecl UDS_VM_GuildPermissionPopup::StaticRegisterNativesUDS_VM_GuildPermissionPopup(void)

{
  return;
}

// BindModel @ 14be75fe0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildPermissionPopup::BindModel(UDS_VM_GuildPermissionPopup *this)

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

// InitViewModel @ 14be8ccf0

void __thiscall UDS_VM_GuildPermissionPopup::InitViewModel(UDS_VM_GuildPermissionPopup *this)

{
  return;
}

// OnClickApplyButton @ 14be93790

void __thiscall
UDS_VM_GuildPermissionPopup::OnClickApplyButton
          (UDS_VM_GuildPermissionPopup *this,FDS_ButtonEventField *param_1)

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
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa4f);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa50);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      uStack_80._0_4_ = 0;
      local_88 = OpenSumitPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildPermissionPopup>
                         (&local_78,this,(pmf_9f6f0aab *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OpenSumitPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildPermissionPopup>
                         (&local_78,this,(pmf_9f6f0aab *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res18);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// OnClickCancelButton @ 14be94100

void __thiscall
UDS_VM_GuildPermissionPopup::OnClickCancelButton
          (UDS_VM_GuildPermissionPopup *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCloseMySelf @ 14be97760

void __thiscall UDS_VM_GuildPermissionPopup::OnCloseMySelf(UDS_VM_GuildPermissionPopup *this)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bea0f00

void __thiscall
UDS_VM_GuildPermissionPopup::OnSetViewModel
          (UDS_VM_GuildPermissionPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FDS_ViewModelContext_GuildPermissionPopupSlot *pFVar3;
  bool bVar4;
  UDS_VM_GuildPermissionPopupSlot *pUVar5;
  TSharedPtr<FDS_ViewModelContext_GuildPermissionPopupSlot,1> local_68;
  TSharedPtr<FDS_ViewModelContext_GuildPermissionPopupSlot,1> local_58;
  TSharedPtr<FDS_ViewModelContext_GuildPermissionPopupSlot,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object == (FDS_ViewModelContext *)0x0) goto LAB_14bea11ac;
  if ((this->VM_PermissionMemberManagement).field0_0x0.DebugPtr ==
      (UDS_VM_GuildPermissionPopupSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildPermissionPopupSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_GuildPermissionPopupSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_PermissionMemberManagement).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 != (UDS_VM_GuildPermissionPopupSlot *)0x0) goto LAB_14bea0f74;
  }
  else {
LAB_14bea0f74:
    MakeContext<FDS_ViewModelContext_GuildPermissionPopupSlot>(&local_68);
    pFVar3 = local_68.Object;
    if (local_68.Object != (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) {
      if ((local_68.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x20b;
      pFVar3->PermissionType = MemberManagement;
      pUVar5 = (this->VM_PermissionMemberManagement).field0_0x0.DebugPtr;
      local_38.Object = (FDS_ViewModelContext *)local_68.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_68.SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_PermissionMoneyManagement).field0_0x0.DebugPtr ==
      (UDS_VM_GuildPermissionPopupSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildPermissionPopupSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_GuildPermissionPopupSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_PermissionMoneyManagement).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 != (UDS_VM_GuildPermissionPopupSlot *)0x0) goto LAB_14bea1043;
  }
  else {
LAB_14bea1043:
    MakeContext<FDS_ViewModelContext_GuildPermissionPopupSlot>(&local_58);
    pFVar3 = local_58.Object;
    if (local_58.Object != (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) {
      if ((local_58.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x20b;
      pFVar3->PermissionType = MoneyManagement;
      pUVar5 = (this->VM_PermissionMoneyManagement).field0_0x0.DebugPtr;
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
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_PermissionGuildSetting).field0_0x0.DebugPtr ==
      (UDS_VM_GuildPermissionPopupSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildPermissionPopupSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_GuildPermissionPopupSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_PermissionGuildSetting).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_GuildPermissionPopupSlot *)0x0) goto LAB_14bea11ac;
  }
  MakeContext<FDS_ViewModelContext_GuildPermissionPopupSlot>(&local_48);
  pFVar3 = local_48.Object;
  if (local_48.Object != (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) {
    if ((local_48.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x20b;
    pFVar3->PermissionType = GuildSetting;
    pUVar5 = (this->VM_PermissionGuildSetting).field0_0x0.DebugPtr;
    local_18.Object = (FDS_ViewModelContext *)local_48.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
LAB_14bea11ac:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenSumitPopup @ 14beabd70

void __thiscall UDS_VM_GuildPermissionPopup::OpenSumitPopup(UDS_VM_GuildPermissionPopup *this)

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
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa4f);
      UDS_M_CommonPopup::SetTitle(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      pFVar3 = FDS_Text::FromStringTableFormat<>(&local_60,StringUi,0x3aa50);
      UDS_M_CommonPopup::SetMainContent(pUVar2,pFVar3);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonConfirm,StringUi,0x65,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80._0_4_ = 0;
      local_88 = OpenSumitPopup_Confrim;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildPermissionPopup>
                         (&local_78,this,(pmf_9f6f0aab *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonConfirm,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::SetButton(pUVar2,ButtonCancel,StringUi,0x66,false);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      local_88 = OpenSumitPopup_Cancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_VM_GuildPermissionPopup>
                         (&local_78,this,(pmf_9f6f0aab *)&local_88);
      UDS_M_CommonPopup::SetDelegate(pUVar2,ButtonCancel,pTVar4);
      pUVar2 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar2);
    }
  }
  return;
}

// OpenSumitPopup_Cancel @ 14beabf30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildPermissionPopup::OpenSumitPopup_Cancel
          (UDS_VM_GuildPermissionPopup *this,
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

// OpenSumitPopup_Confrim @ 14beabf70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildPermissionPopup::OpenSumitPopup_Confrim
          (UDS_VM_GuildPermissionPopup *this,
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

// SetVM_PermissionGuildSetting @ 14beb8a00

void __thiscall
UDS_VM_GuildPermissionPopup::SetVM_PermissionGuildSetting(UDS_VM_GuildPermissionPopup *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildPermissionPopupSlot *pFVar2;
  bool bVar3;
  UDS_VM_GuildPermissionPopupSlot *pUVar4;
  TSharedPtr<FDS_ViewModelContext_GuildPermissionPopupSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_PermissionGuildSetting).field0_0x0.DebugPtr ==
      (UDS_VM_GuildPermissionPopupSlot *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildPermissionPopupSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_GuildPermissionPopupSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_PermissionGuildSetting).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildPermissionPopupSlot *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildPermissionPopupSlot>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x20b;
  pFVar2->PermissionType = GuildSetting;
  pUVar4 = (this->VM_PermissionGuildSetting).field0_0x0.DebugPtr;
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

// SetVM_PermissionMemberManagement @ 14beb8b00

void __thiscall
UDS_VM_GuildPermissionPopup::SetVM_PermissionMemberManagement(UDS_VM_GuildPermissionPopup *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildPermissionPopupSlot *pFVar2;
  bool bVar3;
  UDS_VM_GuildPermissionPopupSlot *pUVar4;
  TSharedPtr<FDS_ViewModelContext_GuildPermissionPopupSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_PermissionMemberManagement).field0_0x0.DebugPtr ==
      (UDS_VM_GuildPermissionPopupSlot *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildPermissionPopupSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_GuildPermissionPopupSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_PermissionMemberManagement).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildPermissionPopupSlot *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildPermissionPopupSlot>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x20b;
  pFVar2->PermissionType = MemberManagement;
  pUVar4 = (this->VM_PermissionMemberManagement).field0_0x0.DebugPtr;
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

// SetVM_PermissionMoneyManagement @ 14beb8c00

void __thiscall
UDS_VM_GuildPermissionPopup::SetVM_PermissionMoneyManagement(UDS_VM_GuildPermissionPopup *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildPermissionPopupSlot *pFVar2;
  bool bVar3;
  UDS_VM_GuildPermissionPopupSlot *pUVar4;
  TSharedPtr<FDS_ViewModelContext_GuildPermissionPopupSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_PermissionMoneyManagement).field0_0x0.DebugPtr ==
      (UDS_VM_GuildPermissionPopupSlot *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildPermissionPopupSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_GuildPermissionPopupSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_PermissionMoneyManagement).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildPermissionPopupSlot *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildPermissionPopupSlot>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x20b;
  pFVar2->PermissionType = MoneyManagement;
  pUVar4 = (this->VM_PermissionMoneyManagement).field0_0x0.DebugPtr;
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

// UnbindModel @ 14bebc150

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildPermissionPopup::UnbindModel(UDS_VM_GuildPermissionPopup *this)

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

