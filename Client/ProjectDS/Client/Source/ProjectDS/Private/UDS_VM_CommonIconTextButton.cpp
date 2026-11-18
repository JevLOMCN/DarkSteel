// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// SetClickEventField_WrapperImpl @ 14b61bac0

void __cdecl
UDS_VM_CommonIconTextButton::SetClickEventField_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  UObject *pUVar2;
  UDS_ModelBase *this;
  UDS_ModelEventBase *pUVar3;
  FWeakObjectPtr FStackX_8;
  UDS_ModelEventBase *apUStackX_18 [2];
  FReadAccessScope FStack_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x1a8),
             &FStack_38);
  if ((*(int *)((longlong)param_1 + 0x1b8) != 0) &&
     (plVar1 = *(longlong **)((longlong)param_1 + 0x1b0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_38);
  if (*(longlong *)((longlong)param_1 + 0xa0) != 0) {
    pUVar3 = NewObject<UDS_ModelEventBase>(param_1);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 == (UDS_ModelEventBase *)0x0) {
        return;
      }
    }
    else {
      if (pUVar3 == (UDS_ModelEventBase *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar2 = *(UObject **)((longlong)param_1 + 0xa0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
    }
    FStackX_8.ObjectIndex = 0;
    FStackX_8.ObjectSerialNumber = 0;
    apUStackX_18[0] = (UDS_ModelEventBase *)pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)apUStackX_18);
    (pUVar3->Model).WeakPtr = FStackX_8;
    this = *(UDS_ModelBase **)((longlong)param_1 + 0xa0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)pUVar3),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FStackX_8.ObjectIndex = 0;
    FStackX_8.ObjectSerialNumber = 0;
    apUStackX_18[0] = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)apUStackX_18);
    UDS_ModelBase::UpdateModel(this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)FStackX_8);
  }
  return;
}

// SetDSText_WrapperImpl @ 14b61bad0

void __cdecl UDS_VM_CommonIconTextButton::SetDSText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DSText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DSText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xe0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetDSTooltipText_WrapperImpl @ 14b61bae0

void __cdecl UDS_VM_CommonIconTextButton::SetDSTooltipText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DSTooltipText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DSTooltipText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x130),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetButtonDataID_WrapperImpl @ 14b61baf0

void __cdecl UDS_VM_CommonIconTextButton::SetButtonDataID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::ButtonDataID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ButtonDataID.FieldName;
  if (*(longlong *)((longlong)param_1 + 0x180) != *(longlong *)param_2) {
    *(longlong *)((longlong)param_1 + 0x180) = *(longlong *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetIsSelected_WrapperImpl @ 14b61bb00

void __cdecl UDS_VM_CommonIconTextButton::SetIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x188) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetIsRedDot_WrapperImpl @ 14b61bb10

void __cdecl UDS_VM_CommonIconTextButton::SetIsRedDot_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x189) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IsRedDot.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsRedDot.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetIsDisabled_WrapperImpl @ 14b61bb20

void __cdecl UDS_VM_CommonIconTextButton::SetIsDisabled_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x18a) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IsDisabled.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsDisabled.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetIsLongPress_WrapperImpl @ 14b61bb30

void __cdecl UDS_VM_CommonIconTextButton::SetIsLongPress_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x18b) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IsLongPress.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsLongPress.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetLongPressTime_WrapperImpl @ 14b61bb40

void __cdecl UDS_VM_CommonIconTextButton::SetLongPressTime_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::LongPressTime.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::LongPressTime.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetLongPressRatio_WrapperImpl @ 14b61bb50

void __cdecl UDS_VM_CommonIconTextButton::SetLongPressRatio_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::LongPressRatio.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::LongPressRatio.FieldName;
  if (*(float *)param_2 != *(float *)((longlong)param_1 + 400)) {
    *(float *)((longlong)param_1 + 400) = *(float *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b61bb60

UClass * __cdecl UDS_VM_CommonIconTextButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonIconTextButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonIconTextButton",
               &Z_Registration_Info_UClass_UDS_VM_CommonIconTextButton.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonIconTextButton,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_CommonIconTextButton>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonIconTextButton>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonIconTextButton.InnerSingleton;
}

// UDS_VM_CommonIconTextButton @ 14b6208b0

UDS_VM_CommonIconTextButton * __thiscall
UDS_VM_CommonIconTextButton::UDS_VM_CommonIconTextButton
          (UDS_VM_CommonIconTextButton *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonIconTextButton__6B_;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  (this->DSText).StringTableType = None;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  (this->DSTooltipText).StringTableType = None;
  (this->DSTooltipText).StringTableID = 0;
  (this->DSTooltipText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSTooltipText).StringEnumTableNameID.Number = 0;
  (this->DSTooltipText).DateTime.Ticks = 0;
  (this->DSTooltipText).TimeSpan.Ticks = 0;
  (this->DSTooltipText).TimeExpressionType = None;
  (this->DSTooltipText).IsExpression = false;
  (this->DSTooltipText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSTooltipText).UniqueString.Data.ArrayNum = 0;
  (this->DSTooltipText).UniqueString.Data.ArrayMax = 0;
  (this->DSTooltipText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSTooltipText).FormatArgs.ArrayNum = 0;
  (this->DSTooltipText).FormatArgs.ArrayMax = 0;
  (this->InputEventField)._padding_ = '\0';
  *(undefined8 *)&this->OnClickDelegate = 0;
  *(undefined8 *)&(this->OnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickDelegate).field_0x10 = 0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_CommonIconTextButton @ 14b6209c0

UDS_VM_CommonIconTextButton * __thiscall
UDS_VM_CommonIconTextButton::UDS_VM_CommonIconTextButton
          (UDS_VM_CommonIconTextButton *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonIconTextButton__6B_;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  (this->DSText).StringTableType = None;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  (this->DSTooltipText).StringTableType = None;
  (this->DSTooltipText).StringTableID = 0;
  (this->DSTooltipText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSTooltipText).StringEnumTableNameID.Number = 0;
  (this->DSTooltipText).DateTime.Ticks = 0;
  (this->DSTooltipText).TimeSpan.Ticks = 0;
  (this->DSTooltipText).TimeExpressionType = None;
  (this->DSTooltipText).IsExpression = false;
  (this->DSTooltipText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSTooltipText).UniqueString.Data.ArrayNum = 0;
  (this->DSTooltipText).UniqueString.Data.ArrayMax = 0;
  (this->DSTooltipText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSTooltipText).FormatArgs.ArrayNum = 0;
  (this->DSTooltipText).FormatArgs.ArrayMax = 0;
  (this->InputEventField)._padding_ = '\0';
  *(undefined8 *)&this->OnClickDelegate = 0;
  *(undefined8 *)&(this->OnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickDelegate).field_0x10 = 0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_CommonIconTextButton @ 14b6219d0

void __thiscall
UDS_VM_CommonIconTextButton::~UDS_VM_CommonIconTextButton(UDS_VM_CommonIconTextButton *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonIconTextButton__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickDelegate);
  pvVar1 = *(void **)&(this->OnClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickDelegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSTooltipText).FormatArgs.AllocatorInstance.Data,
             (this->DSTooltipText).FormatArgs.ArrayNum);
  pFVar2 = (this->DSTooltipText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DSTooltipText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSText).FormatArgs.AllocatorInstance.Data,
             (this->DSText).FormatArgs.ArrayNum);
  pFVar2 = (this->DSText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DSText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEventField).Delegate);
  pvVar1 = *(void **)&(this->ClickEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEventField).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623ab0

IClassDescriptor * __thiscall
UDS_VM_CommonIconTextButton::GetFieldNotificationDescriptor(UDS_VM_CommonIconTextButton *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CommonIconTextButton::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b624430

UClass * __cdecl UDS_VM_CommonIconTextButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonIconTextButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonIconTextButton",
               &Z_Registration_Info_UClass_UDS_VM_CommonIconTextButton.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonIconTextButton,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_CommonIconTextButton>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonIconTextButton>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonIconTextButton.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CommonIconTextButton @ 14b624b70

void __cdecl UDS_VM_CommonIconTextButton::StaticRegisterNativesUDS_VM_CommonIconTextButton(void)

{
  return;
}

// BindModel @ 14bd48840

void __thiscall UDS_VM_CommonIconTextButton::BindModel(UDS_VM_CommonIconTextButton *this)

{
  UDS_InputEvent *pUVar1;
  
  UDS_VM_ModelBase::BindModel((UDS_VM_ModelBase *)this);
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputDeviceType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_CommonIconTextButton>
              (&pUVar1->OnChangeInputDeviceType,(UDS_VM_CommonIconTextButton *)&stack0x00000010,
               (pmf_ac3f6860 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangeInputKey,this)
    ;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_CommonIconTextButton>
              (&pUVar1->OnChangeInputKey,(UDS_VM_CommonIconTextButton *)&stack0x00000010,
               (pmf_ff6b1527 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnInputUIEvent,this);
    TMulticastDelegateRegistration<void___cdecl(bool_const_&,enum_EDS_KeyActionType_const_&,enum_EDS_WindowWidget_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_CommonIconTextButton>
              (&pUVar1->OnInputUIEvent,(UDS_VM_CommonIconTextButton *)&stack0x00000010,
               (pmf_bbee3a3a *)this);
  }
  return;
}

// OnChangedInputKey @ 14bd70340

void __thiscall
UDS_VM_CommonIconTextButton::OnChangedInputKey
          (UDS_VM_CommonIconTextButton *this,EDS_KeyActionType *param_1)

{
  return;
}

// OnChangedInputType @ 14bd70350

void __thiscall
UDS_VM_CommonIconTextButton::OnChangedInputType
          (UDS_VM_CommonIconTextButton *this,EDS_InputDeviceType *param_1)

{
  bool bVar1;
  ADS_PlayerController *pAVar2;
  EDS_InputDevicePressType EVar3;
  float fVar4;
  FWeakObjectPtr local_res18 [2];
  FName local_18;
  int local_10;
  
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pAVar2 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res18);
    bVar1 = ADS_PlayerController::IsLongPressKey(pAVar2,this->KeyActionType);
    this->IsLongPress = bVar1;
    EVar3 = Released;
    if (bVar1) {
      EVar3 = LongPress;
    }
    this->PressType = EVar3;
    local_10 = FFieldNotificationClassDescriptor::IsLongPress.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsLongPress.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pAVar2 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res18);
    fVar4 = ADS_PlayerController::GetLongPressTime(pAVar2,this->KeyActionType);
    this->LongPressTime = fVar4;
    local_10 = FFieldNotificationClassDescriptor::LongPressTime.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::LongPressTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickEventField @ 14bd72c20

void __thiscall
UDS_VM_CommonIconTextButton::OnClickEventField
          (UDS_VM_CommonIconTextButton *this,FDS_ButtonEventField *param_1)

{
  longlong *plVar1;
  UObject *pUVar2;
  UDS_ModelBase *this_00;
  UDS_ModelEventBase *pUVar3;
  FWeakObjectPtr local_res8;
  UDS_ModelEventBase *local_res18 [2];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClickDelegate,
             &local_38);
  if ((*(int *)&(this->OnClickDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnClickDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (this->_padding_ != 0) {
    pUVar3 = NewObject<UDS_ModelEventBase>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 == (UDS_ModelEventBase *)0x0) {
        return;
      }
    }
    else {
      if (pUVar3 == (UDS_ModelEventBase *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar2 = (UObject *)this->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = (UDS_ModelEventBase *)pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    (pUVar3->Model).WeakPtr = local_res8;
    this_00 = (UDS_ModelBase *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)pUVar3),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    UDS_ModelBase::UpdateModel
              (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  }
  return;
}

// OnInputEvnet @ 14bd79c50

void __thiscall
UDS_VM_CommonIconTextButton::OnInputEvnet
          (UDS_VM_CommonIconTextButton *this,bool *param_1,EDS_KeyActionType *param_2,
          EDS_WindowWidget *param_3)

{
  EDS_InputDevicePressType EVar1;
  
  if ((this->KeyActionType != *param_2) || (this->ParentWindowWidget != *param_3)) {
    return;
  }
  EVar1 = this->PressType;
  if (EVar1 != LongPress) {
    if (EVar1 == Press) {
      if (*param_1 == false) {
        return;
      }
    }
    else {
      if (EVar1 != Released) {
        return;
      }
      if (*param_1 != false) {
        return;
      }
    }
  }
  SetInputEvent(this,param_1);
  return;
}

// OnSetViewModel @ 14bd81da0

void __thiscall
UDS_VM_CommonIconTextButton::OnSetViewModel
          (UDS_VM_CommonIconTextButton *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  FName FVar2;
  int iVar3;
  ADS_PlayerController *pAVar4;
  EDS_InputDevicePressType EVar5;
  FName *pFVar6;
  bool bVar7;
  float fVar8;
  FWeakObjectPtr local_res10;
  undefined1 local_138 [8];
  ForAnyElementType local_130;
  int local_128;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_f8;
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
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  FDestructionSentinel local_58;
  FReadAccessScope local_40;
  
  local_78.Object = param_1->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_78);
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonIconTextButton>(&local_f8,&local_68);
  if (local_f8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  else {
    if (&(local_f8.Object)->OnClickDelegate != &this->OnClickDelegate) {
      local_138 = (undefined1  [8])0x0;
      local_130.Data = (FScriptContainerElement *)0x0;
      local_128 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_f8.Object)->OnClickDelegate,&local_40);
      if ((*(int *)&((local_f8.Object)->OnClickDelegate).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&((local_f8.Object)->OnClickDelegate).field_0x8,
         plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x50))(plVar1,local_138);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_138);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
                 (FWriteAccessScope *)&local_58);
      if ((local_128 != 0) && (local_130.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_130.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_130,0,0,0x10);
        local_128 = 0;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      if (local_130.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_138);
    }
    iVar3 = FFieldNotificationClassDescriptor::KeyActionType.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::KeyActionType.FieldName;
    if (this->KeyActionType != (local_f8.Object)->KeyActionType) {
      this->KeyActionType = (local_f8.Object)->KeyActionType;
      local_e0 = iVar3;
      local_e8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
    }
    iVar3 = FFieldNotificationClassDescriptor::ParentWindowWidget.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::ParentWindowWidget.FieldName;
    if (this->ParentWindowWidget != (local_f8.Object)->ParentWindowWidget) {
      this->ParentWindowWidget = (local_f8.Object)->ParentWindowWidget;
      local_d0 = iVar3;
      local_d8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
    }
    iVar3 = FFieldNotificationClassDescriptor::ButtonDataID.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::ButtonDataID.FieldName;
    if (this->ButtonDataID != (local_f8.Object)->ButtonDataID) {
      this->ButtonDataID = (local_f8.Object)->ButtonDataID;
      local_c0 = iVar3;
      local_c8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    }
    this->IsSelected = (local_f8.Object)->IsSelected;
    local_b0 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
    local_b8 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    this->IsRedDot = (local_f8.Object)->IsRedDot;
    local_a0 = FFieldNotificationClassDescriptor::IsRedDot.BitNumber;
    local_a8 = FFieldNotificationClassDescriptor::IsRedDot.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    iVar3 = FFieldNotificationClassDescriptor::bIsBindInputKey.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::bIsBindInputKey.FieldName;
    bVar7 = (local_f8.Object)->KeyActionType != None;
    if (this->bIsBindInputKey != bVar7) {
      this->bIsBindInputKey = bVar7;
      local_90 = iVar3;
      local_98 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
    if (this->_padding_ == 0) {
      SetDSText(this,&(local_f8.Object)->DSText);
      SetDSTooltipText(this,&(local_f8.Object)->DSTooltipText);
      this->IsDisabled = (local_f8.Object)->IsDisabled;
      local_80 = FFieldNotificationClassDescriptor::IsDisabled.BitNumber;
      local_88 = FFieldNotificationClassDescriptor::IsDisabled.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    ADS_PlayerController::GetPlayerController();
    bVar7 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar7) {
      pAVar4 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res10);
      bVar7 = ADS_PlayerController::IsLongPressKey(pAVar4,(local_f8.Object)->KeyActionType);
      this->IsLongPress = bVar7;
      EVar5 = Released;
      if (bVar7) {
        EVar5 = LongPress;
      }
      this->PressType = EVar5;
      local_100 = FFieldNotificationClassDescriptor::IsLongPress.BitNumber;
      local_108 = FFieldNotificationClassDescriptor::IsLongPress.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
      pAVar4 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res10);
      fVar8 = ADS_PlayerController::GetLongPressTime(pAVar4,(local_f8.Object)->KeyActionType);
      this->LongPressTime = fVar8;
      pFVar6 = &local_118;
      local_118 = FFieldNotificationClassDescriptor::LongPressTime.FieldName;
      local_110 = FFieldNotificationClassDescriptor::LongPressTime.BitNumber;
    }
    else {
      this->PressType = None;
      this->IsLongPress = false;
      local_110 = FFieldNotificationClassDescriptor::IsLongPress.BitNumber;
      local_118 = FFieldNotificationClassDescriptor::IsLongPress.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
      this->LongPressTime = 0.0;
      pFVar6 = &local_108;
      local_108 = FFieldNotificationClassDescriptor::LongPressTime.FieldName;
      local_100 = FFieldNotificationClassDescriptor::LongPressTime.BitNumber;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetButtonDataID @ 14bd86e40

void __thiscall
UDS_VM_CommonIconTextButton::SetButtonDataID(UDS_VM_CommonIconTextButton *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ButtonDataID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ButtonDataID.FieldName;
  if (this->ButtonDataID != *param_1) {
    this->ButtonDataID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDSText @ 14bd88120

void __thiscall
UDS_VM_CommonIconTextButton::SetDSText(UDS_VM_CommonIconTextButton *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DSText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DSText.FieldName;
  FDS_Text::operator=(&this->DSText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetDSTooltipText @ 14bd88180

void __thiscall
UDS_VM_CommonIconTextButton::SetDSTooltipText(UDS_VM_CommonIconTextButton *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DSTooltipText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DSTooltipText.FieldName;
  FDS_Text::operator=(&this->DSTooltipText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetInputEvent @ 14bd894f0

void __thiscall
UDS_VM_CommonIconTextButton::SetInputEvent(UDS_VM_CommonIconTextButton *this,bool *param_1)

{
  FDS_InputEventField local_res8;
  FName local_18;
  int local_10;
  
  local_res8.IsPress = *param_1;
  local_res8._padding_ = '\x01';
  this->InputEventField = local_res8;
  local_10 = FFieldNotificationClassDescriptor::InputEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InputEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsBindInputKey @ 14bd89a20

void __thiscall
UDS_VM_CommonIconTextButton::SetIsBindInputKey(UDS_VM_CommonIconTextButton *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsBindInputKey.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsBindInputKey.FieldName;
  if (this->bIsBindInputKey != *param_1) {
    this->bIsBindInputKey = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsDisabled @ 14bd89a70

void __thiscall
UDS_VM_CommonIconTextButton::SetIsDisabled(UDS_VM_CommonIconTextButton *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsDisabled = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsDisabled.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDisabled.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsLongPress @ 14bd89ba0

void __thiscall
UDS_VM_CommonIconTextButton::SetIsLongPress(UDS_VM_CommonIconTextButton *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsLongPress = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsLongPress.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsLongPress.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsRedDot @ 14bd89be0

void __thiscall
UDS_VM_CommonIconTextButton::SetIsRedDot(UDS_VM_CommonIconTextButton *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsRedDot = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsRedDot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsRedDot.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsSelected @ 14bd89cc0

void __thiscall
UDS_VM_CommonIconTextButton::SetIsSelected(UDS_VM_CommonIconTextButton *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsSelected = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetKeyActionType @ 14bd8a130

void __thiscall
UDS_VM_CommonIconTextButton::SetKeyActionType
          (UDS_VM_CommonIconTextButton *this,EDS_KeyActionType *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::KeyActionType.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::KeyActionType.FieldName;
  if (this->KeyActionType != *param_1) {
    this->KeyActionType = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetLongPressRatio @ 14bd8a220

void __thiscall
UDS_VM_CommonIconTextButton::SetLongPressRatio(UDS_VM_CommonIconTextButton *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::LongPressRatio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LongPressRatio.FieldName;
  if (*param_1 != this->LongPressRatio) {
    this->LongPressRatio = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetLongPressTime @ 14bd8a270

void __thiscall
UDS_VM_CommonIconTextButton::SetLongPressTime(UDS_VM_CommonIconTextButton *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  this->LongPressTime = *param_1;
  local_10 = FFieldNotificationClassDescriptor::LongPressTime.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LongPressTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetWindowWidget @ 14bd8af10

void __thiscall
UDS_VM_CommonIconTextButton::SetWindowWidget
          (UDS_VM_CommonIconTextButton *this,EDS_WindowWidget *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ParentWindowWidget.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ParentWindowWidget.FieldName;
  if (this->ParentWindowWidget != *param_1) {
    this->ParentWindowWidget = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bd8c380

void __thiscall UDS_VM_CommonIconTextButton::UnbindModel(UDS_VM_CommonIconTextButton *this)

{
  UDS_InputEvent *pUVar1;
  
  UDS_VM_ModelBase::UnbindModel((UDS_VM_ModelBase *)this);
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputDeviceType,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangeInputKey,this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnInputUIEvent,this);
  }
  return;
}

// UpdateView @ 14bd93c40

void __thiscall
UDS_VM_CommonIconTextButton::UpdateView
          (UDS_VM_CommonIconTextButton *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  FDS_Text *pFVar6;
  FName FVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  FName local_res8;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  if (this->_padding_ != 0) {
    pFVar6 = FDS_DataContainer::GetData<FDS_Text,enum_EDS_CommonIconTextButtonData>
                       ((FDS_DataContainer *)(this->_padding_ + 0x40),&local_68,ButtonText);
    iVar3 = FFieldNotificationClassDescriptor::DSText.BitNumber;
    local_res8 = FFieldNotificationClassDescriptor::DSText.FieldName;
    FDS_Text::operator=(&this->DSText,pFVar6);
    local_78 = local_res8;
    local_70 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
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
    pFVar6 = FDS_DataContainer::GetData<FDS_Text,enum_EDS_CommonIconTextButtonData>
                       ((FDS_DataContainer *)(this->_padding_ + 0x40),&local_68,ButtonTooltipText);
    iVar3 = FFieldNotificationClassDescriptor::DSTooltipText.BitNumber;
    local_res8 = FFieldNotificationClassDescriptor::DSTooltipText.FieldName;
    FDS_Text::operator=(&this->DSTooltipText,pFVar6);
    local_78 = local_res8;
    local_70 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
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
    lVar1 = this->_padding_;
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonIconTextButtonData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_CommonIconTextButtonData)&local_res8
                      );
    uVar2 = *(undefined8 *)FVar7;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    this->IsDisabled = bVar4;
    local_70 = FFieldNotificationClassDescriptor::IsDisabled.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::IsDisabled.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  return;
}

