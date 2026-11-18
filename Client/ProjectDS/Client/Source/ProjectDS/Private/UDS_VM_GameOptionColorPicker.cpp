// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// SetClickClose_WrapperImpl @ 14b645010

void __cdecl UDS_VM_GameOptionColorPicker::SetClickClose_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x240) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickConfirm_WrapperImpl @ 14b645020

void __cdecl UDS_VM_GameOptionColorPicker::SetClickConfirm_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  UDS_M_GameOptionDataBase *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_18;
  FString FStack_48;
  FString FStack_38;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x380));
  if (bVar2) {
    pUVar4 = (UDS_M_GameOptionDataBase *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x380));
    iVar3 = UDS_M_GameOptionDataBase::GetGameOptionValueIndex(pUVar4);
    DS_Util::ToColorString(&FStack_38,(FLinearColor *)((longlong)param_1 + 0x2b8));
    pUVar4 = (UDS_M_GameOptionDataBase *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x380));
    _Src.Data = FStack_38.Data.AllocatorInstance.Data;
    FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (FStack_38.Data.ArrayNum == 0) {
      FStack_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FStack_38.Data.ArrayNum,0,(ForAnyElementType *)&FStack_48,
                 FStack_38.Data.ArrayNum,&FStack_48.Data.ArrayMax);
      memcpy(FStack_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)FStack_38.Data.ArrayNum * 2);
    }
    UDS_M_GameOptionDataBase::SetGameOptionValueByIndex(pUVar4,iVar3,&FStack_48);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x380));
    uStackX_18 = 0;
    FStackX_8.ObjectIndex = 0;
    FStackX_8.ObjectSerialNumber = 0;
    pcVar1 = *(code **)(*(longlong *)pUVar5 + 0x2e0);
    FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_18);
    (*pcVar1)(pUVar5,FStackX_8,0);
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x240) = 1;
  FStack_48.Data.ArrayNum = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  FStack_48.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_48);
  return;
}

// SetClickCancel_WrapperImpl @ 14b645030

void __cdecl UDS_VM_GameOptionColorPicker::SetClickCancel_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x240) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetOldColor_WrapperImpl @ 14b645040

void __cdecl UDS_VM_GameOptionColorPicker::SetOldColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x2a8)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x2ac))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x2b0))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x2b4))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::OldColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::OldColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x2a8) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x2b0) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetNewColor_WrapperImpl @ 14b645050

void __cdecl UDS_VM_GameOptionColorPicker::SetNewColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x2b8)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 700))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x2c0))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x2c4))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::NewColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::NewColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x2b8) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 700) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x2c0) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetSelectedHSVColor_WrapperImpl @ 14b645060

void __cdecl
UDS_VM_GameOptionColorPicker::SetSelectedHSVColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FLinearColor *pFVar4;
  FLinearColor_u_0 FStack_28;
  FLinearColor_u_0 FStack_18;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x2c8)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x2cc))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x2d0))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x2d4))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    FStack_28._s_0.B = (float)FFieldNotificationClassDescriptor::SelectedHSVColor.BitNumber;
    FStack_28._0_8_ = FFieldNotificationClassDescriptor::SelectedHSVColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x2c8) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x2cc) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x2d0) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x2d4) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_28);
  }
  FStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x2c8);
  FStack_18._s_0.A = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x2d0) >> 0x20);
  FStack_18._s_0.B = (float)*(undefined4 *)((longlong)param_1 + 0x2d8);
  pFVar4 = FLinearColor::HSVToLinearRGB
                     ((FLinearColor *)&FStack_18._s_0,(FLinearColor *)&FStack_28._s_0);
  SetNewColor(param_1,pFVar4);
  return;
}

// SetSelectedValue_WrapperImpl @ 14b645070

void __cdecl UDS_VM_GameOptionColorPicker::SetSelectedValue_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectedValue(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 14b645080

UClass * __cdecl UDS_VM_GameOptionColorPicker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GameOptionColorPicker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GameOptionColorPicker",
               &Z_Registration_Info_UClass_UDS_VM_GameOptionColorPicker.InnerSingleton,
               StaticRegisterNativesUDS_VM_GameOptionColorPicker,0x388,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GameOptionColorPicker>,
               InternalVTableHelperCtorCaller<UDS_VM_GameOptionColorPicker>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GameOptionColorPicker.InnerSingleton;
}

// UDS_VM_GameOptionColorPicker @ 14b648560

UDS_VM_GameOptionColorPicker * __thiscall
UDS_VM_GameOptionColorPicker::UDS_VM_GameOptionColorPicker
          (UDS_VM_GameOptionColorPicker *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionColorPicker__6B_;
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
  (this->OldColorText).StringTableType = None;
  (this->OldColorText).StringTableID = 0;
  (this->OldColorText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->OldColorText).StringEnumTableNameID.Number = 0;
  (this->OldColorText).DateTime.Ticks = 0;
  (this->OldColorText).TimeSpan.Ticks = 0;
  (this->OldColorText).TimeExpressionType = None;
  (this->OldColorText).IsExpression = false;
  (this->OldColorText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldColorText).UniqueString.Data.ArrayNum = 0;
  (this->OldColorText).UniqueString.Data.ArrayMax = 0;
  (this->OldColorText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldColorText).FormatArgs.ArrayNum = 0;
  (this->OldColorText).FormatArgs.ArrayMax = 0;
  (this->NewColorText).StringTableType = None;
  (this->NewColorText).StringTableID = 0;
  (this->NewColorText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NewColorText).StringEnumTableNameID.Number = 0;
  (this->NewColorText).DateTime.Ticks = 0;
  (this->NewColorText).TimeSpan.Ticks = 0;
  (this->NewColorText).TimeExpressionType = None;
  (this->NewColorText).IsExpression = false;
  (this->NewColorText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewColorText).UniqueString.Data.ArrayNum = 0;
  (this->NewColorText).UniqueString.Data.ArrayMax = 0;
  (this->NewColorText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewColorText).FormatArgs.ArrayNum = 0;
  (this->NewColorText).FormatArgs.ArrayMax = 0;
  (this->ConfirmText).StringTableType = None;
  (this->ConfirmText).StringTableID = 0;
  (this->ConfirmText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ConfirmText).StringEnumTableNameID.Number = 0;
  (this->ConfirmText).DateTime.Ticks = 0;
  (this->ConfirmText).TimeSpan.Ticks = 0;
  (this->ConfirmText).TimeExpressionType = None;
  (this->ConfirmText).IsExpression = false;
  (this->ConfirmText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfirmText).UniqueString.Data.ArrayNum = 0;
  (this->ConfirmText).UniqueString.Data.ArrayMax = 0;
  (this->ConfirmText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfirmText).FormatArgs.ArrayNum = 0;
  (this->ConfirmText).FormatArgs.ArrayMax = 0;
  (this->CancelText).StringTableType = None;
  (this->CancelText).StringTableID = 0;
  (this->CancelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CancelText).StringEnumTableNameID.Number = 0;
  (this->CancelText).DateTime.Ticks = 0;
  (this->CancelText).TimeSpan.Ticks = 0;
  (this->CancelText).TimeExpressionType = None;
  (this->CancelText).IsExpression = false;
  (this->CancelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CancelText).UniqueString.Data.ArrayNum = 0;
  (this->CancelText).UniqueString.Data.ArrayMax = 0;
  (this->CancelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CancelText).FormatArgs.ArrayNum = 0;
  (this->CancelText).FormatArgs.ArrayMax = 0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr = (UDS_VM_Common_CombinationKeyGroup *)0x0;
  (this->CloseMyselfEvent).bIsActivate = false;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->ClickConfirm)._padding_ = '\0';
  (this->ClickConfirm).bIsCustomSelected = false;
  (this->ClickConfirm).bIsLacked = false;
  (this->ClickConfirm).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirm).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirm).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirm).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  (this->TitleText).StringTableType = None;
  (this->OldColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->NewColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::Blue;
  this->SelectedValue = 1.0;
  (this->SelectedHSVColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->GameOptionDataColorModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  return this;
}

// UDS_VM_GameOptionColorPicker @ 14b648850

UDS_VM_GameOptionColorPicker * __thiscall
UDS_VM_GameOptionColorPicker::UDS_VM_GameOptionColorPicker
          (UDS_VM_GameOptionColorPicker *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionColorPicker__6B_;
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
  (this->OldColorText).StringTableType = None;
  (this->OldColorText).StringTableID = 0;
  (this->OldColorText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->OldColorText).StringEnumTableNameID.Number = 0;
  (this->OldColorText).DateTime.Ticks = 0;
  (this->OldColorText).TimeSpan.Ticks = 0;
  (this->OldColorText).TimeExpressionType = None;
  (this->OldColorText).IsExpression = false;
  (this->OldColorText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldColorText).UniqueString.Data.ArrayNum = 0;
  (this->OldColorText).UniqueString.Data.ArrayMax = 0;
  (this->OldColorText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldColorText).FormatArgs.ArrayNum = 0;
  (this->OldColorText).FormatArgs.ArrayMax = 0;
  (this->NewColorText).StringTableType = None;
  (this->NewColorText).StringTableID = 0;
  (this->NewColorText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NewColorText).StringEnumTableNameID.Number = 0;
  (this->NewColorText).DateTime.Ticks = 0;
  (this->NewColorText).TimeSpan.Ticks = 0;
  (this->NewColorText).TimeExpressionType = None;
  (this->NewColorText).IsExpression = false;
  (this->NewColorText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewColorText).UniqueString.Data.ArrayNum = 0;
  (this->NewColorText).UniqueString.Data.ArrayMax = 0;
  (this->NewColorText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewColorText).FormatArgs.ArrayNum = 0;
  (this->NewColorText).FormatArgs.ArrayMax = 0;
  (this->ConfirmText).StringTableType = None;
  (this->ConfirmText).StringTableID = 0;
  (this->ConfirmText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ConfirmText).StringEnumTableNameID.Number = 0;
  (this->ConfirmText).DateTime.Ticks = 0;
  (this->ConfirmText).TimeSpan.Ticks = 0;
  (this->ConfirmText).TimeExpressionType = None;
  (this->ConfirmText).IsExpression = false;
  (this->ConfirmText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfirmText).UniqueString.Data.ArrayNum = 0;
  (this->ConfirmText).UniqueString.Data.ArrayMax = 0;
  (this->ConfirmText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfirmText).FormatArgs.ArrayNum = 0;
  (this->ConfirmText).FormatArgs.ArrayMax = 0;
  (this->CancelText).StringTableType = None;
  (this->CancelText).StringTableID = 0;
  (this->CancelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CancelText).StringEnumTableNameID.Number = 0;
  (this->CancelText).DateTime.Ticks = 0;
  (this->CancelText).TimeSpan.Ticks = 0;
  (this->CancelText).TimeExpressionType = None;
  (this->CancelText).IsExpression = false;
  (this->CancelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CancelText).UniqueString.Data.ArrayNum = 0;
  (this->CancelText).UniqueString.Data.ArrayMax = 0;
  (this->CancelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CancelText).FormatArgs.ArrayNum = 0;
  (this->CancelText).FormatArgs.ArrayMax = 0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr = (UDS_VM_Common_CombinationKeyGroup *)0x0;
  (this->CloseMyselfEvent).bIsActivate = false;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->ClickConfirm)._padding_ = '\0';
  (this->ClickConfirm).bIsCustomSelected = false;
  (this->ClickConfirm).bIsLacked = false;
  (this->ClickConfirm).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirm).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirm).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirm).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  (this->TitleText).StringTableType = None;
  (this->OldColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->NewColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::Blue;
  this->SelectedValue = 1.0;
  (this->SelectedHSVColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->GameOptionDataColorModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  return this;
}

// ~UDS_VM_GameOptionColorPicker @ 14b649700

void __thiscall
UDS_VM_GameOptionColorPicker::~UDS_VM_GameOptionColorPicker(UDS_VM_GameOptionColorPicker *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionColorPicker__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_OK).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data;
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickConfirm).Delegate);
  pvVar2 = *(void **)&(this->ClickConfirm).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickConfirm).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClose).Delegate);
  pvVar2 = *(void **)&(this->ClickClose).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClose).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CancelText).FormatArgs.AllocatorInstance.Data,
             (this->CancelText).FormatArgs.ArrayNum);
  pFVar1 = (this->CancelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CancelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ConfirmText).FormatArgs.AllocatorInstance.Data,
             (this->ConfirmText).FormatArgs.ArrayNum);
  pFVar1 = (this->ConfirmText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConfirmText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NewColorText).FormatArgs.AllocatorInstance.Data,
             (this->NewColorText).FormatArgs.ArrayNum);
  pFVar1 = (this->NewColorText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewColorText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->OldColorText).FormatArgs.AllocatorInstance.Data,
             (this->OldColorText).FormatArgs.ArrayNum);
  pFVar1 = (this->OldColorText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldColorText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
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

// GetFieldNotificationDescriptor @ 14b64b2b0

IClassDescriptor * __thiscall
UDS_VM_GameOptionColorPicker::GetFieldNotificationDescriptor(UDS_VM_GameOptionColorPicker *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GameOptionColorPicker::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64bc90

UClass * __cdecl UDS_VM_GameOptionColorPicker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GameOptionColorPicker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GameOptionColorPicker",
               &Z_Registration_Info_UClass_UDS_VM_GameOptionColorPicker.InnerSingleton,
               StaticRegisterNativesUDS_VM_GameOptionColorPicker,0x388,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GameOptionColorPicker>,
               InternalVTableHelperCtorCaller<UDS_VM_GameOptionColorPicker>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GameOptionColorPicker.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GameOptionColorPicker @ 14b64bfc0

void __cdecl UDS_VM_GameOptionColorPicker::StaticRegisterNativesUDS_VM_GameOptionColorPicker(void)

{
  return;
}

// BindModel @ 14bdb1c40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GameOptionColorPicker::BindModel(UDS_VM_GameOptionColorPicker *this)

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

// InitViewModel @ 14bdc73b0

void __thiscall UDS_VM_GameOptionColorPicker::InitViewModel(UDS_VM_GameOptionColorPicker *this)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  FDS_ViewModelContext_InputKeyGroup *pFVar3;
  bool bVar4;
  int iVar5;
  atomic<int> *paVar6;
  UClass *pUVar7;
  TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UDS_VM_InputKey>_u_0 TVar9;
  atomic<int> *paVar10;
  TObjectPtr<UDS_VM_InputKey>_u_0 TVar11;
  TObjectPtr<UDS_VM_InputKey>_u_0 local_res8;
  TObjectPtr<UDS_VM_InputKey>_u_0 local_res10;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_58;
  TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1> local_48;
  FDS_ViewModelContext_InputKey *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FDS_ViewModelContext_InputKeyGroup *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  TVar11.DebugPtr = (UDS_VM_InputKey *)0x0;
  paVar10 = (atomic<int> *)&DAT_00000008;
  if ((this->VM_InputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_58);
    pFVar2 = local_58.Object;
    if ((local_58.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    pFVar2->KeyActionType = IA_UI_Escape;
    if (local_58.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar6 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar6 = &(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar6 = (atomic<int>)((int)*paVar6 + 1);
      UNLOCK();
    }
    local_38 = local_58.Object;
    pTStack_30 = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar6 = (atomic<int>)((int)*paVar6 + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::CreateViewModel
              ((UObject *)&local_res8.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
    TVar9.DebugPtr = TVar11.DebugPtr;
    if (local_res8.DebugPtr != (UDS_VM_InputKey *)0x0) {
      pUVar7 = Z_Construct_UClass_UDS_VM_InputKey_NoRegister();
      bVar4 = FObjectPtr::IsA(&local_res8.ObjectPtr,pUVar7);
      if (bVar4) {
        TVar9 = local_res8;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar9.DebugPtr != (UDS_VM_InputKey *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
    }
    (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)TVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_CombinationKeyGroup).field0_0x0.DebugPtr == (UDS_VM_Common_CombinationKeyGroup *)0x0
     ) {
    MakeContext<FDS_ViewModelContext_InputKeyGroup>(&local_48);
    pFVar3 = local_48.Object;
    if ((local_48.Object == (FDS_ViewModelContext_InputKeyGroup *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x15e;
    pFVar3->WindowWidget = ChattingColorPicker;
    pTVar8 = &pFVar3->DefaultKeys;
    iVar5 = (pFVar3->DefaultKeys).ArrayNum;
    if (iVar5 == (pFVar3->DefaultKeys).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar8->AllocatorInstance,&(pFVar3->DefaultKeys).ArrayMax);
    }
    (pFVar3->DefaultKeys).ArrayNum = iVar5 + 1;
    *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 4) = 0x4e28;
    iVar5 = (pFVar3->DefaultKeys).ArrayNum;
    if (iVar5 == (pFVar3->DefaultKeys).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar8->AllocatorInstance,&(pFVar3->DefaultKeys).ArrayMax);
    }
    (pFVar3->DefaultKeys).ArrayNum = iVar5 + 1;
    *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 4) = 0x4e2e;
    iVar5 = (pFVar3->DefaultKeys).ArrayNum;
    if (iVar5 == (pFVar3->DefaultKeys).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar8->AllocatorInstance,&(pFVar3->DefaultKeys).ArrayMax);
    }
    (pFVar3->DefaultKeys).ArrayNum = iVar5 + 1;
    *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 4) = 0x4e2c;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      paVar10 = &(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_28 = local_48.Object;
    pTStack_20 = local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::CreateViewModel
              ((UObject *)&local_res10.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
    if (local_res10.DebugPtr != (UDS_VM_InputKey *)0x0) {
      pUVar7 = Z_Construct_UClass_UDS_VM_Common_CombinationKeyGroup_NoRegister();
      bVar4 = FObjectPtr::IsA(&local_res10.ObjectPtr,pUVar7);
      if (bVar4) {
        TVar11 = local_res10;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar11.DebugPtr != (UDS_VM_InputKey *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
    }
    (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr = (UDS_VM_Common_CombinationKeyGroup *)TVar11
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnClickCancel @ 14bdcb990

void __thiscall
UDS_VM_GameOptionColorPicker::OnClickCancel
          (UDS_VM_GameOptionColorPicker *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMyselfEvent).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickClose @ 14bdcbdd0

void __thiscall
UDS_VM_GameOptionColorPicker::OnClickClose
          (UDS_VM_GameOptionColorPicker *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMyselfEvent).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickConfirm @ 14bdcc100

void __thiscall
UDS_VM_GameOptionColorPicker::OnClickConfirm
          (UDS_VM_GameOptionColorPicker *this,FDS_ButtonEventField *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  UDS_M_GameOptionDataBase *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  FString local_48;
  FString local_38;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->GameOptionDataColorModel).WeakPtr);
  if (bVar2) {
    pUVar4 = (UDS_M_GameOptionDataBase *)
             FWeakObjectPtr::Get(&(this->GameOptionDataColorModel).WeakPtr);
    iVar3 = UDS_M_GameOptionDataBase::GetGameOptionValueIndex(pUVar4);
    DS_Util::ToColorString(&local_38,&this->NewColor);
    pUVar4 = (UDS_M_GameOptionDataBase *)
             FWeakObjectPtr::Get(&(this->GameOptionDataColorModel).WeakPtr);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UDS_M_GameOptionDataBase::SetGameOptionValueByIndex(pUVar4,iVar3,&local_48);
    pUVar5 = FWeakObjectPtr::Get(&(this->GameOptionDataColorModel).WeakPtr);
    local_res18 = 0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    pcVar1 = *(code **)(*(longlong *)pUVar5 + 0x2e0);
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    (*pcVar1)(pUVar5,local_res8,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  (this->CloseMyselfEvent).bIsActivate = true;
  local_48.Data.ArrayNum = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  local_48.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  return;
}

// OnSetViewModel @ 14bddc6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GameOptionColorPicker::OnSetViewModel
          (UDS_VM_GameOptionColorPicker *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1e8 [32];
  TSharedPtr<FDS_ViewModelContext_OptionColorPicker,1> local_1b8;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_OptionColorPicker>(&local_1b8,&local_158);
  if (local_1b8.Object == (FDS_ViewModelContext_OptionColorPicker *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_GameOptionColorPicker::OnSetViewModel",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x14,L"optionColorPickerContext.IsValid() == false")
      ;
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if (local_1b8.Object == (FDS_ViewModelContext_OptionColorPicker *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (this->GameOptionDataColorModel).WeakPtr =
         ((local_1b8.Object)->GameOptionDataColorModel).WeakPtr;
    UpdateGameOptionColorPicker(this);
    FDS_Text::SetTextFromStringTable(&this->TitleText,StringUi,0xc5d3);
    FDS_Text::SetTextFromStringTable(&this->OldColorText,StringUi,0xc5d4);
    FDS_Text::SetTextFromStringTable(&this->NewColorText,StringUi,0xc5d5);
    FDS_Text::SetTextFromStringTable(&this->ConfirmText,StringUi,0x65);
    FDS_Text::SetTextFromStringTable(&this->CancelText,StringUi,0x66);
    local_1a0 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
    local_1a8 = FFieldNotificationClassDescriptor::TitleText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    local_190 = FFieldNotificationClassDescriptor::OldColorText.BitNumber;
    local_198 = FFieldNotificationClassDescriptor::OldColorText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    local_180 = FFieldNotificationClassDescriptor::NewColorText.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::NewColorText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    local_170 = FFieldNotificationClassDescriptor::ConfirmText.BitNumber;
    local_178 = FFieldNotificationClassDescriptor::ConfirmText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    local_160 = FFieldNotificationClassDescriptor::CancelText.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::CancelText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetNewColor @ 14bde7f60

void __thiscall
UDS_VM_GameOptionColorPicker::SetNewColor(UDS_VM_GameOptionColorPicker *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->NewColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->NewColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->NewColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->NewColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::NewColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::NewColor.FieldName;
    (this->NewColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->NewColor).field0_0x0._s_0.G = fVar1;
    (this->NewColor).field0_0x0._s_0.B = fVar2;
    (this->NewColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetOldColor @ 14bde80f0

void __thiscall
UDS_VM_GameOptionColorPicker::SetOldColor(UDS_VM_GameOptionColorPicker *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->OldColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->OldColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->OldColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->OldColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::OldColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::OldColor.FieldName;
    (this->OldColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->OldColor).field0_0x0._s_0.G = fVar1;
    (this->OldColor).field0_0x0._s_0.B = fVar2;
    (this->OldColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSelectedHSVColor @ 14bde8d80

void __thiscall
UDS_VM_GameOptionColorPicker::SetSelectedHSVColor
          (UDS_VM_GameOptionColorPicker *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FLinearColor *pFVar4;
  FLinearColor_u_0 local_28;
  undefined1 local_18 [16];
  
  if (((((param_1->field0_0x0)._s_0.R != (this->SelectedHSVColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->SelectedHSVColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->SelectedHSVColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->SelectedHSVColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_28._s_0.B = (float)FFieldNotificationClassDescriptor::SelectedHSVColor.BitNumber;
    local_28._0_8_ = FFieldNotificationClassDescriptor::SelectedHSVColor.FieldName;
    (this->SelectedHSVColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->SelectedHSVColor).field0_0x0._s_0.G = fVar1;
    (this->SelectedHSVColor).field0_0x0._s_0.B = fVar2;
    (this->SelectedHSVColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_18._0_8_ = *(undefined8 *)&(this->SelectedHSVColor).field0_0x0;
  local_18._12_4_ =
       (undefined4)
       ((ulonglong)*(undefined8 *)((longlong)&(this->SelectedHSVColor).field0_0x0 + 8) >> 0x20);
  local_18._8_4_ = this->SelectedValue;
  pFVar4 = FLinearColor::HSVToLinearRGB((FLinearColor *)local_18,(FLinearColor *)&local_28._s_0);
  SetNewColor(this,pFVar4);
  return;
}

// SetSelectedValue @ 14bde8fb0

void __thiscall
UDS_VM_GameOptionColorPicker::SetSelectedValue(UDS_VM_GameOptionColorPicker *this,float param_1)

{
  FName FVar1;
  int iVar2;
  FLinearColor *pFVar3;
  FLinearColor_u_0 local_28;
  undefined1 local_18 [16];
  
  iVar2 = FFieldNotificationClassDescriptor::SelectedValue.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::SelectedValue.FieldName;
  if (param_1 != this->SelectedValue) {
    this->SelectedValue = param_1;
    local_28._s_0.B = (float)iVar2;
    local_28._0_8_ = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_18._0_8_ = *(undefined8 *)&(this->SelectedHSVColor).field0_0x0;
  local_18._12_4_ =
       (undefined4)
       ((ulonglong)*(undefined8 *)((longlong)&(this->SelectedHSVColor).field0_0x0 + 8) >> 0x20);
  local_18._8_4_ = this->SelectedValue;
  pFVar3 = FLinearColor::HSVToLinearRGB((FLinearColor *)local_18,(FLinearColor *)&local_28._s_0);
  SetNewColor(this,pFVar3);
  return;
}

// UnbindModel @ 14bdece20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GameOptionColorPicker::UnbindModel(UDS_VM_GameOptionColorPicker *this)

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

// UpdateGameOptionColorPicker @ 14bdf17b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GameOptionColorPicker::UpdateGameOptionColorPicker(UDS_VM_GameOptionColorPicker *this)

{
  FName FVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_M_GameOptionDataColor *this_00;
  FLinearColor *pFVar6;
  longlong *plVar7;
  undefined1 auStackY_1a8 [32];
  FLinearColor_u_0 local_178;
  FLinearColor_u_0 local_168;
  FLinearColor_u_0 local_158;
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar4 = FWeakObjectPtr::IsValid(&(this->GameOptionDataColorModel).WeakPtr);
  if (bVar4) {
    this_00 = (UDS_M_GameOptionDataColor *)
              FWeakObjectPtr::Get(&(this->GameOptionDataColorModel).WeakPtr);
    UDS_M_GameOptionDataColor::GetOptionColor(this_00,(FLinearColor *)&local_168._s_0);
    FLinearColor::LinearRGBToHSV((FLinearColor *)&local_168._s_0,(FLinearColor *)&local_158._s_0);
    if ((((local_168._s_0.R != (this->OldColor).field0_0x0._s_0.R) ||
         (local_168._s_0.G != (this->OldColor).field0_0x0._s_0.G)) ||
        (local_168._s_0.B != (this->OldColor).field0_0x0._s_0.B)) ||
       (local_168._s_0.A != (this->OldColor).field0_0x0._s_0.A)) {
      local_178._s_0.B = (float)FFieldNotificationClassDescriptor::OldColor.BitNumber;
      local_178._s_0.R =
           (float)FFieldNotificationClassDescriptor::OldColor.FieldName.ComparisonIndex.Value;
      local_178._s_0.G = (float)FFieldNotificationClassDescriptor::OldColor.FieldName.Number;
      (this->OldColor).field0_0x0._s_0.R = local_168._s_0.R;
      (this->OldColor).field0_0x0._s_0.G = local_168._s_0.G;
      (this->OldColor).field0_0x0._s_0.B = local_168._s_0.B;
      (this->OldColor).field0_0x0._s_0.A = local_168._s_0.A;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    }
    plVar7 = &this->_padding_;
    if (((local_158._s_0.R != (this->SelectedHSVColor).field0_0x0._s_0.R) ||
        (local_158._s_0.G != (this->SelectedHSVColor).field0_0x0._s_0.G)) ||
       ((local_158._s_0.B != (this->SelectedHSVColor).field0_0x0._s_0.B ||
        (local_158._s_0.A != (this->SelectedHSVColor).field0_0x0._s_0.A)))) {
      local_178._s_0.B = (float)FFieldNotificationClassDescriptor::SelectedHSVColor.BitNumber;
      local_178._s_0.R =
           (float)FFieldNotificationClassDescriptor::SelectedHSVColor.FieldName.ComparisonIndex.
                  Value;
      local_178._s_0.G = (float)FFieldNotificationClassDescriptor::SelectedHSVColor.FieldName.Number
      ;
      (this->SelectedHSVColor).field0_0x0._s_0.R = local_158._s_0.R;
      (this->SelectedHSVColor).field0_0x0._s_0.G = local_158._s_0.G;
      (this->SelectedHSVColor).field0_0x0._s_0.B = local_158._s_0.B;
      (this->SelectedHSVColor).field0_0x0._s_0.A = local_158._s_0.A;
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_178);
    }
    local_148._0_8_ = *(undefined8 *)&(this->SelectedHSVColor).field0_0x0;
    local_148._12_4_ =
         (undefined4)
         ((ulonglong)*(undefined8 *)((longlong)&(this->SelectedHSVColor).field0_0x0 + 8) >> 0x20);
    local_148._8_4_ = this->SelectedValue;
    pFVar6 = FLinearColor::HSVToLinearRGB((FLinearColor *)local_148,(FLinearColor *)&local_178._s_0)
    ;
    SetNewColor(this,pFVar6);
    iVar3 = FFieldNotificationClassDescriptor::SelectedValue.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::SelectedValue.FieldName;
    if (local_158._s_0.B != this->SelectedValue) {
      this->SelectedValue = local_158._s_0.B;
      FVar2 = FFieldNotificationClassDescriptor::SelectedValue.FieldName;
      local_178._s_0.B = (float)iVar3;
      FFieldNotificationClassDescriptor::SelectedValue.FieldName.ComparisonIndex =
           FVar1.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::SelectedValue.FieldName.Number = FVar1.Number;
      local_178._s_0.R =
           (float)FFieldNotificationClassDescriptor::SelectedValue.FieldName.ComparisonIndex.Value;
      local_178._s_0.G = (float)FFieldNotificationClassDescriptor::SelectedValue.FieldName.Number;
      FFieldNotificationClassDescriptor::SelectedValue.FieldName = FVar2;
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_178);
    }
    local_148._0_8_ = *(undefined8 *)&(this->SelectedHSVColor).field0_0x0;
    local_148._12_4_ =
         (undefined4)
         ((ulonglong)*(undefined8 *)((longlong)&(this->SelectedHSVColor).field0_0x0 + 8) >> 0x20);
    local_148._8_4_ = this->SelectedValue;
    pFVar6 = FLinearColor::HSVToLinearRGB((FLinearColor *)local_148,(FLinearColor *)&local_178._s_0)
    ;
    SetNewColor(this,pFVar6);
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_GameOptionColorPicker::UpdateGameOptionColorPicker",0x39,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x97,L"GameOptionDataColorModel.IsValid() == false")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

