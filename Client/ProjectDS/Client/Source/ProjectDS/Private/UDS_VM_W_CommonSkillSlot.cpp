// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 55

// OnButtonEvent @ 14b67f120

void __thiscall
UDS_VM_W_CommonSkillSlot::OnButtonEvent
          (UDS_VM_W_CommonSkillSlot *this,EDS_InputDevicePressType param_1)

{
  return;
}

// StaticClass @ 14b67f130

UClass * __cdecl UDS_VM_W_CommonSkillSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CommonSkillSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CommonSkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_CommonSkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CommonSkillSlot,0x3a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_CommonSkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CommonSkillSlot>,aFStackX_8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CommonSkillSlot.InnerSingleton;
}

// GetFieldNotificationDescriptor @ 14b6a9d30

IClassDescriptor * __thiscall
UDS_VM_W_CommonSkillSlot::GetFieldNotificationDescriptor(UDS_VM_W_CommonSkillSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// SetClickEventField_WrapperImpl @ 14b724110

void __cdecl UDS_VM_W_CommonSkillSlot::SetClickEventField_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014bfb9a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x330))();
  return;
}

// SetButtonEventField_WrapperImpl @ 14b724120

void __cdecl UDS_VM_W_CommonSkillSlot::SetButtonEventField_WrapperImpl(void *param_1,void *param_2)

{
  undefined7 uVar1;
  
  uVar1 = (undefined7)
          ((ulonglong)
           (switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_14bfb4a6b::switchdataD_14bfb4aa0)[*(int *)((longlong)param_2 + 4)]) >> 8);
  switch(*(int *)((longlong)param_2 + 4)) {
  default:
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x00014bfb4a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x338))(param_1,CONCAT71(uVar1,1));
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00014bfb4a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x338))(param_1,CONCAT71(uVar1,4));
    return;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00014bfb4a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x338))(param_1,CONCAT71(uVar1,2));
    return;
  case 6:
  case 7:
                    /* WARNING: Could not recover jumptable at 0x00014bfb4a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x338))(param_1,CONCAT71(uVar1,5));
    return;
  }
}

// SetUseSkillAnimationFinishedEvent_WrapperImpl @ 14b724130

void __cdecl
UDS_VM_W_CommonSkillSlot::SetUseSkillAnimationFinishedEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::Vis_UseSkill.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Vis_UseSkill.FieldName;
  if (*(char *)((longlong)param_1 + 0x210) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x210) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetEndCooldownAnimationFinishedEvent_WrapperImpl @ 14b724140

void __cdecl
UDS_VM_W_CommonSkillSlot::SetEndCooldownAnimationFinishedEvent_WrapperImpl
          (void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::Vis_EndCooldown.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Vis_EndCooldown.FieldName;
  if (*(char *)((longlong)param_1 + 0x2a8) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2a8) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// UDS_VM_W_CommonSkillSlot @ 14b727d90

UDS_VM_W_CommonSkillSlot * __thiscall
UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot
          (UDS_VM_W_CommonSkillSlot *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_InputKey = Collapsed;
  this->Vis_Smite = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_StackCount_Up).field0_0x0.DebugPtr = (UDS_VM_StackSkillCount *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CommonSkillSlot__6B_;
  (this->VM_StackCount_Down).field0_0x0.DebugPtr = (UDS_VM_StackSkillCount *)0x0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->SmiteAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->SmiteAnimationEvent).AnimationName.Number = 0;
  (this->SmiteAnimationEvent).AnimationPlayTime = 0.0;
  (this->SmiteAnimationEvent).AnimationEventType = None;
  (this->SmiteAnimationEvent).AnimationStateType = None;
  (this->SmiteAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->SmiteAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->SmiteAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->SmiteAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->SmiteAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->SmiteAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->SmiteAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->VM_SmiteEffect).field0_0x0.DebugPtr = (UDS_VM_W_SmiteEffect *)0x0;
  this->VigorValue = 0.0;
  this->WidgetEnabled = true;
  this->AvailableProgressRatio = 0.0;
  this->CooldownProgressRatio = 0.0;
  this->CooldownValue = 0.0;
  this->VigorProgressRatio = 0.0;
  this->Vis_CooldownProgress = Collapsed;
  this->Vis_CooldownProgress_Color = Collapsed;
  this->Vis_AvailableProgress = Collapsed;
  this->Vis_Icon = Collapsed;
  this->Vis_QuickSlot = Collapsed;
  this->Vis_SkillLevel = Collapsed;
  FText::FText(&this->QuickSlotIndexText);
  (this->SkillNameText).StringTableType = None;
  (this->SkillNameText).StringTableID = 0;
  (this->SkillNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SkillNameText).StringEnumTableNameID.Number = 0;
  (this->SkillNameText).DateTime.Ticks = 0;
  (this->SkillNameText).TimeSpan.Ticks = 0;
  (this->SkillNameText).TimeExpressionType = None;
  (this->SkillNameText).IsExpression = false;
  (this->SkillNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillNameText).UniqueString.Data.ArrayNum = 0;
  (this->SkillNameText).UniqueString.Data.ArrayMax = 0;
  (this->SkillNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillNameText).FormatArgs.ArrayNum = 0;
  (this->SkillNameText).FormatArgs.ArrayMax = 0;
  FText::FText(&this->SkillLevelText);
  FText::FText(&this->CooldownText);
  this->Vis_StackSkillCount = Collapsed;
  this->StackSkillCount = 0;
  this->IsButtonDisabled = false;
  this->IsSkillExist = false;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  (this->ButtonEventField)._padding_ = '\0';
  (this->ButtonEventField).bIsCustomSelected = false;
  (this->ButtonEventField).bIsLacked = false;
  (this->ButtonEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ButtonEventField).Delegate = 0;
  *(undefined8 *)&(this->ButtonEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ButtonEventField).Delegate.field_0x10 = 0;
  (this->UseSkillAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->UseSkillAnimationEvent).AnimationName.Number = 0;
  (this->UseSkillAnimationEvent).AnimationPlayTime = 0.0;
  (this->UseSkillAnimationEvent).AnimationEventType = None;
  (this->UseSkillAnimationEvent).AnimationStateType = None;
  (this->UseSkillAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->UseSkillAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->UseSkillAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->UseSkillAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->UseSkillAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->UseSkillAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->UseSkillAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->UseSkillAnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->UseSkillAnimationFinishedEvent).AnimationName.Number = 0;
  (this->UseSkillAnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->UseSkillAnimationFinishedEvent).AnimationEventType = None;
  (this->UseSkillAnimationFinishedEvent).AnimationStateType = None;
  (this->UseSkillAnimationFinishedEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->UseSkillAnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->UseSkillAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->UseSkillAnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->UseSkillAnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->UseSkillAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->UseSkillAnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EndCooldownAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->EndCooldownAnimationEvent).AnimationName.Number = 0;
  (this->EndCooldownAnimationEvent).AnimationPlayTime = 0.0;
  (this->EndCooldownAnimationEvent).AnimationEventType = None;
  (this->EndCooldownAnimationEvent).AnimationStateType = None;
  (this->EndCooldownAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->EndCooldownAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->EndCooldownAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->EndCooldownAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->EndCooldownAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->EndCooldownAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->EndCooldownAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EndCooldownAnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->EndCooldownAnimationFinishedEvent).AnimationName.Number = 0;
  (this->EndCooldownAnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->EndCooldownAnimationFinishedEvent).AnimationEventType = None;
  (this->EndCooldownAnimationFinishedEvent).AnimationStateType = None;
  (this->EndCooldownAnimationFinishedEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ToggleAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ToggleAnimationEvent).AnimationName.Number = 0;
  (this->ToggleAnimationEvent).AnimationPlayTime = 0.0;
  (this->ToggleAnimationEvent).AnimationEventType = None;
  (this->ToggleAnimationEvent).AnimationStateType = None;
  (this->ToggleAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ToggleAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ToggleAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ToggleAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ToggleAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ToggleAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ToggleAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->SkillData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->SkillData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharBuffData).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// UDS_VM_W_CommonSkillSlot @ 14b7280c0

UDS_VM_W_CommonSkillSlot * __thiscall
UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot
          (UDS_VM_W_CommonSkillSlot *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_InputKey = Collapsed;
  this->Vis_Smite = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_StackCount_Up).field0_0x0.DebugPtr = (UDS_VM_StackSkillCount *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CommonSkillSlot__6B_;
  (this->VM_StackCount_Down).field0_0x0.DebugPtr = (UDS_VM_StackSkillCount *)0x0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->SmiteAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->SmiteAnimationEvent).AnimationName.Number = 0;
  (this->SmiteAnimationEvent).AnimationPlayTime = 0.0;
  (this->SmiteAnimationEvent).AnimationEventType = None;
  (this->SmiteAnimationEvent).AnimationStateType = None;
  (this->SmiteAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->SmiteAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->SmiteAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->SmiteAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->SmiteAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->SmiteAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->SmiteAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->VM_SmiteEffect).field0_0x0.DebugPtr = (UDS_VM_W_SmiteEffect *)0x0;
  this->VigorValue = 0.0;
  this->WidgetEnabled = true;
  this->AvailableProgressRatio = 0.0;
  this->CooldownProgressRatio = 0.0;
  this->CooldownValue = 0.0;
  this->VigorProgressRatio = 0.0;
  this->Vis_CooldownProgress = Collapsed;
  this->Vis_CooldownProgress_Color = Collapsed;
  this->Vis_AvailableProgress = Collapsed;
  this->Vis_Icon = Collapsed;
  this->Vis_QuickSlot = Collapsed;
  this->Vis_SkillLevel = Collapsed;
  FText::FText(&this->QuickSlotIndexText);
  (this->SkillNameText).StringTableType = None;
  (this->SkillNameText).StringTableID = 0;
  (this->SkillNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SkillNameText).StringEnumTableNameID.Number = 0;
  (this->SkillNameText).DateTime.Ticks = 0;
  (this->SkillNameText).TimeSpan.Ticks = 0;
  (this->SkillNameText).TimeExpressionType = None;
  (this->SkillNameText).IsExpression = false;
  (this->SkillNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillNameText).UniqueString.Data.ArrayNum = 0;
  (this->SkillNameText).UniqueString.Data.ArrayMax = 0;
  (this->SkillNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillNameText).FormatArgs.ArrayNum = 0;
  (this->SkillNameText).FormatArgs.ArrayMax = 0;
  FText::FText(&this->SkillLevelText);
  FText::FText(&this->CooldownText);
  this->Vis_StackSkillCount = Collapsed;
  this->StackSkillCount = 0;
  this->IsButtonDisabled = false;
  this->IsSkillExist = false;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  (this->ButtonEventField)._padding_ = '\0';
  (this->ButtonEventField).bIsCustomSelected = false;
  (this->ButtonEventField).bIsLacked = false;
  (this->ButtonEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ButtonEventField).Delegate = 0;
  *(undefined8 *)&(this->ButtonEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ButtonEventField).Delegate.field_0x10 = 0;
  (this->UseSkillAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->UseSkillAnimationEvent).AnimationName.Number = 0;
  (this->UseSkillAnimationEvent).AnimationPlayTime = 0.0;
  (this->UseSkillAnimationEvent).AnimationEventType = None;
  (this->UseSkillAnimationEvent).AnimationStateType = None;
  (this->UseSkillAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->UseSkillAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->UseSkillAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->UseSkillAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->UseSkillAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->UseSkillAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->UseSkillAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->UseSkillAnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->UseSkillAnimationFinishedEvent).AnimationName.Number = 0;
  (this->UseSkillAnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->UseSkillAnimationFinishedEvent).AnimationEventType = None;
  (this->UseSkillAnimationFinishedEvent).AnimationStateType = None;
  (this->UseSkillAnimationFinishedEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->UseSkillAnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->UseSkillAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->UseSkillAnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->UseSkillAnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->UseSkillAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->UseSkillAnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EndCooldownAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->EndCooldownAnimationEvent).AnimationName.Number = 0;
  (this->EndCooldownAnimationEvent).AnimationPlayTime = 0.0;
  (this->EndCooldownAnimationEvent).AnimationEventType = None;
  (this->EndCooldownAnimationEvent).AnimationStateType = None;
  (this->EndCooldownAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->EndCooldownAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->EndCooldownAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->EndCooldownAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->EndCooldownAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->EndCooldownAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->EndCooldownAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EndCooldownAnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->EndCooldownAnimationFinishedEvent).AnimationName.Number = 0;
  (this->EndCooldownAnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->EndCooldownAnimationFinishedEvent).AnimationEventType = None;
  (this->EndCooldownAnimationFinishedEvent).AnimationStateType = None;
  (this->EndCooldownAnimationFinishedEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->EndCooldownAnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ToggleAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ToggleAnimationEvent).AnimationName.Number = 0;
  (this->ToggleAnimationEvent).AnimationPlayTime = 0.0;
  (this->ToggleAnimationEvent).AnimationEventType = None;
  (this->ToggleAnimationEvent).AnimationStateType = None;
  (this->ToggleAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ToggleAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ToggleAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ToggleAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ToggleAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ToggleAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ToggleAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->SkillData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->SkillData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->CharBuffData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharBuffData).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UDS_VM_W_CommonSkillSlot @ 14b7292c0

void __thiscall UDS_VM_W_CommonSkillSlot::~UDS_VM_W_CommonSkillSlot(UDS_VM_W_CommonSkillSlot *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CommonSkillSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToggleAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->ToggleAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToggleAnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToggleAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->ToggleAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToggleAnimationEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EndCooldownAnimationFinishedEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->EndCooldownAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->EndCooldownAnimationFinishedEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EndCooldownAnimationFinishedEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->EndCooldownAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->EndCooldownAnimationFinishedEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EndCooldownAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->EndCooldownAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->EndCooldownAnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EndCooldownAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->EndCooldownAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->EndCooldownAnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->UseSkillAnimationFinishedEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->UseSkillAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->UseSkillAnimationFinishedEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->UseSkillAnimationFinishedEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->UseSkillAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->UseSkillAnimationFinishedEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->UseSkillAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->UseSkillAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->UseSkillAnimationEvent).Delegate_ValidAnimation
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->UseSkillAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->UseSkillAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->UseSkillAnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ButtonEventField).Delegate);
  pvVar1 = *(void **)&(this->ButtonEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ButtonEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEventField).Delegate);
  pvVar1 = *(void **)&(this->ClickEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEventField).Delegate);
  pIVar2 = (this->CooldownText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->SkillLevelText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SkillNameText).FormatArgs.AllocatorInstance.Data,
             (this->SkillNameText).FormatArgs.ArrayNum);
  pFVar3 = (this->SkillNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SkillNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pIVar2 = (this->QuickSlotIndexText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SmiteAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->SmiteAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SmiteAnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SmiteAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->SmiteAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SmiteAnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b72b820

UClass * __cdecl UDS_VM_W_CommonSkillSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CommonSkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CommonSkillSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_CommonSkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CommonSkillSlot,0x3a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_CommonSkillSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CommonSkillSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CommonSkillSlot.InnerSingleton;
}

// OnClickSkillSlot @ 14b72bd90

void __thiscall UDS_VM_W_CommonSkillSlot::OnClickSkillSlot(UDS_VM_W_CommonSkillSlot *this)

{
  return;
}

// StaticRegisterNativesUDS_VM_W_CommonSkillSlot @ 14b72be80

void __cdecl UDS_VM_W_CommonSkillSlot::StaticRegisterNativesUDS_VM_W_CommonSkillSlot(void)

{
  return;
}

// BindModel @ 14bf9cc20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_CommonSkillSlot::BindModel(UDS_VM_W_CommonSkillSlot *this)

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

// BindSkillData_StartEnd @ 14bf9d120

void __thiscall
UDS_VM_W_CommonSkillSlot::BindSkillData_StartEnd
          (UDS_VM_W_CommonSkillSlot *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x10,this);
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_CommonSkillSlot>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                *)&pUVar2[10].field_0x10,(UDS_VM_W_CommonSkillSlot *)(local_res10 + 1),
               (pmf_0eaa1c03 *)this);
  }
  return;
}

// InitViewModel @ 14bfb0b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_CommonSkillSlot::InitViewModel(UDS_VM_W_CommonSkillSlot *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_SmiteEffect *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  int local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_SmiteEffect).field0_0x0.DebugPtr == (UDS_VM_W_SmiteEffect *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_W_SmiteEffect_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_W_SmiteEffect_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_W_SmiteEffect *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_W_SmiteEffect *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_W_SmiteEffect *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_SmiteEffect).field0_0x0.DebugPtr = pUVar5;
  }
  local_a0 = FFieldNotificationClassDescriptor::Vis_ToggleSkill.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::Vis_ToggleSkill.FieldName;
  if (this->Vis_ToggleSkill != Collapsed) {
    this->Vis_ToggleSkill = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  local_a0 = FFieldNotificationClassDescriptor::Vis_EndCooldown.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::Vis_EndCooldown.FieldName;
  if (this->Vis_EndCooldown != Collapsed) {
    this->Vis_EndCooldown = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  local_a0 = FFieldNotificationClassDescriptor::Vis_UseSkill.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::Vis_UseSkill.FieldName;
  if (this->Vis_UseSkill != Collapsed) {
    this->Vis_UseSkill = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  local_a0 = FFieldNotificationClassDescriptor::Vis_Silence.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::Vis_Silence.FieldName;
  if (this->Vis_Silence != Collapsed) {
    this->Vis_Silence = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  local_a0 = FFieldNotificationClassDescriptor::Vis_Vigor.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::Vis_Vigor.FieldName;
  if (this->Vis_Vigor != Collapsed) {
    this->Vis_Vigor = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  local_a0 = FFieldNotificationClassDescriptor::Vis_CooldownProgress_Color.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::Vis_CooldownProgress_Color.FieldName;
  if (this->Vis_CooldownProgress_Color != Collapsed) {
    this->Vis_CooldownProgress_Color = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  return;
}

// OnButtonEventField @ 14bfb4a50

void __thiscall
UDS_VM_W_CommonSkillSlot::OnButtonEventField
          (UDS_VM_W_CommonSkillSlot *this,FDS_ButtonEventField *param_1)

{
  undefined7 uVar1;
  
  uVar1 = (undefined7)
          ((ulonglong)
           (switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_14bfb4a6b::switchdataD_14bfb4aa0)[(int)param_1->ButtonEventType]) >> 8);
  switch(param_1->ButtonEventType) {
  default:
    return;
  case Press:
                    /* WARNING: Could not recover jumptable at 0x00014bfb4a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x338))(this,CONCAT71(uVar1,1));
    return;
  case Pressing:
                    /* WARNING: Could not recover jumptable at 0x00014bfb4a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x338))(this,CONCAT71(uVar1,4));
    return;
  case LongPress:
                    /* WARNING: Could not recover jumptable at 0x00014bfb4a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x338))(this,CONCAT71(uVar1,2));
    return;
  case Release:
  case OnClick:
                    /* WARNING: Could not recover jumptable at 0x00014bfb4a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x338))(this,CONCAT71(uVar1,5));
    return;
  }
}

// OnChangedBuffList @ 14bfb61a0

void __thiscall
UDS_VM_W_CommonSkillSlot::OnChangedBuffList
          (UDS_VM_W_CommonSkillSlot *this,ulong64 *param_1,int *param_2,bool *param_3)

{
  bool bVar1;
  UDS_CharBuffData *this_00;
  UObject *pUVar2;
  ESlateVisibility EVar3;
  char cVar4;
  EDS_SpecialBuffType local_res8 [2];
  FName local_18;
  int local_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SkillData).WeakPtr);
  if (!bVar1) {
    return;
  }
  cVar4 = '\x01';
  this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&(this->CharBuffData).WeakPtr);
  local_res8[0] = Silence;
  bVar1 = UDS_CharBuffData::HasSpecialBuffInfo(this_00,local_res8);
  if ((bVar1) &&
     ((pUVar2 = FWeakObjectPtr::Get(&(this->SkillData).WeakPtr), pUVar2[9].field_0x7 == '\x01' ||
      (pUVar2 = FWeakObjectPtr::Get(&(this->SkillData).WeakPtr), pUVar2[9].field_0x7 == '\x02')))) {
    pUVar2 = FWeakObjectPtr::Get(&(this->SkillData).WeakPtr);
    cVar4 = pUVar2[8].field_0x24;
  }
  local_10 = FFieldNotificationClassDescriptor::Vis_Silence.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Silence.FieldName;
  if (cVar4 == '\x01') {
    if (this->Vis_Silence == Collapsed) {
      return;
    }
    this->Vis_Silence = Collapsed;
  }
  else {
    EVar3 = Collapsed;
    if (*param_3 == true) {
      EVar3 = SelfHitTestInvisible;
    }
    if (this->Vis_Silence == EVar3) {
      return;
    }
    this->Vis_Silence = EVar3;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickEventField @ 14bfb9a40

void __thiscall
UDS_VM_W_CommonSkillSlot::OnClickEventField
          (UDS_VM_W_CommonSkillSlot *this,FDS_ButtonEventField *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bfb9a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))();
  return;
}

// OnCloseInit @ 14bfbbf00

void __thiscall UDS_VM_W_CommonSkillSlot::OnCloseInit(UDS_VM_W_CommonSkillSlot *this)

{
  (this->VM_SmiteEffect).field0_0x0.DebugPtr = (UDS_VM_W_SmiteEffect *)0x0;
  return;
}

// OnSetViewModel @ 14bfc9590

void __thiscall
UDS_VM_W_CommonSkillSlot::OnSetViewModel
          (UDS_VM_W_CommonSkillSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> TVar2;
  undefined1 local_res8 [8];
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  TVar2 = UDS_CharBuffData::GetData((ulong64)local_res8);
                    /* WARNING: Load size is inaccurate */
  (this->CharBuffData).WeakPtr = *TVar2.WeakPtr;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSkillStartEndEvent @ 14bfceb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CommonSkillSlot::OnSkillStartEndEvent
          (UDS_VM_W_CommonSkillSlot *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1,
          bool param_2)

{
  char cVar1;
  FName FVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_LogManager *pUVar5;
  FName *pFVar6;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    cVar1 = pUVar4[9].field_0x8;
    if (param_2) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_W_CommonSkillSlot::OnSkillStartEndEvent",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Display,local_148.Ptr,0x19f,L"start skill effect");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      FVar2 = FFieldNotificationClassDescriptor::Vis_UseSkill.FieldName;
      if (this->Vis_UseSkill != SelfHitTestInvisible) {
        local_150 = FFieldNotificationClassDescriptor::Vis_UseSkill.BitNumber;
        this->Vis_UseSkill = SelfHitTestInvisible;
        local_158 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
      }
      pFVar6 = ::FName::FName(&local_158,"Release");
      (this->UseSkillAnimationEvent).AnimationName = *pFVar6;
      (this->UseSkillAnimationEvent).AnimationEventType = PlayForward;
      local_150 = FFieldNotificationClassDescriptor::UseSkillAnimationEvent.BitNumber;
      local_158 = FFieldNotificationClassDescriptor::UseSkillAnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
      if ((byte)(cVar1 - 5U) < 3) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_W_CommonSkillSlot::OnSkillStartEndEvent",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Display,local_148.Ptr,0x1ab,L"start toggle skill effect");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        FVar2 = FFieldNotificationClassDescriptor::Vis_ToggleSkill.FieldName;
        if (this->Vis_ToggleSkill != SelfHitTestInvisible) {
          local_150 = FFieldNotificationClassDescriptor::Vis_ToggleSkill.BitNumber;
          this->Vis_ToggleSkill = SelfHitTestInvisible;
          local_158 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
        }
        pFVar6 = ::FName::FName(&local_158,"Running_Loop");
        (this->ToggleAnimationEvent).AnimationName = *pFVar6;
        (this->ToggleAnimationEvent).AnimationEventType = PlayForward;
        (this->ToggleAnimationEvent).NumberOfLoops = 0;
        local_150 = FFieldNotificationClassDescriptor::ToggleAnimationEvent.BitNumber;
        local_158 = FFieldNotificationClassDescriptor::ToggleAnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
      }
    }
    else if ((byte)(cVar1 - 5U) < 3) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_W_CommonSkillSlot::OnSkillStartEndEvent",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Display,local_148.Ptr,0x1b9,L"end toggle skill effect");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      pFVar6 = ::FName::FName(&local_158,"Running_Loop");
      (this->ToggleAnimationEvent).AnimationName = *pFVar6;
      (this->ToggleAnimationEvent).AnimationEventType = StopAnimation;
      local_150 = FFieldNotificationClassDescriptor::ToggleAnimationEvent.BitNumber;
      local_158 = FFieldNotificationClassDescriptor::ToggleAnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
      local_158 = FFieldNotificationClassDescriptor::Vis_ToggleSkill.FieldName;
      if (this->Vis_ToggleSkill != Collapsed) {
        local_150 = FFieldNotificationClassDescriptor::Vis_ToggleSkill.BitNumber;
        this->Vis_ToggleSkill = Collapsed;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
      }
    }
  }
  return;
}

// SetAvailableProgressRatio @ 14bfd6150

void __thiscall
UDS_VM_W_CommonSkillSlot::SetAvailableProgressRatio(UDS_VM_W_CommonSkillSlot *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::AvailableProgressRatio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AvailableProgressRatio.FieldName;
  if (param_1 != this->AvailableProgressRatio) {
    this->AvailableProgressRatio = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCooldownProgressRatio @ 14bfd8540

void __thiscall
UDS_VM_W_CommonSkillSlot::SetCooldownProgressRatio(UDS_VM_W_CommonSkillSlot *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CooldownProgressRatio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CooldownProgressRatio.FieldName;
  if (param_1 != this->CooldownProgressRatio) {
    this->CooldownProgressRatio = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCooldownSwitcherIndex @ 14bfd8590

void __thiscall
UDS_VM_W_CommonSkillSlot::SetCooldownSwitcherIndex(UDS_VM_W_CommonSkillSlot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CooldownSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CooldownSwitcherIndex.FieldName;
  if (this->CooldownSwitcherIndex != *param_1) {
    this->CooldownSwitcherIndex = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCooldownValue @ 14bfd85e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CommonSkillSlot::SetCooldownValue(UDS_VM_W_CommonSkillSlot *this,float param_1)

{
  ITextData *pIVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  FString *pFVar5;
  UDS_LogManager *pUVar6;
  FName *pFVar7;
  undefined1 auVar8 [16];
  undefined1 auStackY_1c8 [32];
  FString local_198;
  FText local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_198.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::CooldownValue.FieldName;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (param_1 != this->CooldownValue) {
    local_198.Data.ArrayNum = FFieldNotificationClassDescriptor::CooldownValue.BitNumber;
    this->CooldownValue = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    auVar8 = roundps(ZEXT416((uint)param_1),ZEXT416((uint)param_1),2);
    pFVar5 = UDS_TimeUtilManager::ConvertStringFromSec(&local_198,auVar8._0_4_,Seconds,false);
    FText::FromString(&local_188,pFVar5);
    if ((FName)local_198.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    iVar3 = FFieldNotificationClassDescriptor::CooldownText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::CooldownText.FieldName;
    bVar4 = FText::IdenticalTo(&this->CooldownText,&local_188,None);
    if (!bVar4) {
      pIVar1 = (this->CooldownText).TextData.Reference;
      if (pIVar1 != local_188.TextData.Reference) {
        (this->CooldownText).TextData.Reference = local_188.TextData.Reference;
        if (local_188.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_188.TextData.Reference + 8))
                    (local_188.TextData.Reference,&local_198);
        }
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
        }
      }
      (this->CooldownText).Flags = local_188.Flags;
      local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
      local_198.Data.ArrayNum = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    }
    if (param_1 <= 0.0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_VM_W_CommonSkillSlot::SetCooldownValue",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Display,local_178.Ptr,0x91,L"end cooldown");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
      FVar2 = FFieldNotificationClassDescriptor::Vis_EndCooldown.FieldName;
      if (this->Vis_EndCooldown != SelfHitTestInvisible) {
        local_198.Data.ArrayNum = FFieldNotificationClassDescriptor::Vis_EndCooldown.BitNumber;
        this->Vis_EndCooldown = SelfHitTestInvisible;
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
      }
      pFVar7 = ::FName::FName((FName *)&local_198,"EndCooltime");
      (this->EndCooldownAnimationEvent).AnimationName = *pFVar7;
      (this->EndCooldownAnimationEvent).AnimationEventType = PlayForward;
      local_198.Data.ArrayNum =
           FFieldNotificationClassDescriptor::EndCooldownAnimationEvent.BitNumber;
      local_198.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)
           FFieldNotificationClassDescriptor::EndCooldownAnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    }
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetEndCooldownAnimationFinishedEvent @ 14bfd98b0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetEndCooldownAnimationFinishedEvent
          (UDS_VM_W_CommonSkillSlot *this,FDS_WidgetAnimationEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_EndCooldown.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_EndCooldown.FieldName;
  if (this->Vis_EndCooldown != Collapsed) {
    this->Vis_EndCooldown = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIcon @ 14bfda4a0

void __thiscall UDS_VM_W_CommonSkillSlot::SetIcon(UDS_VM_W_CommonSkillSlot *this,int param_1)

{
  longlong *plVar1;
  FDS_ResourceIconTableRow *pFVar2;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_Icon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Icon.FieldName;
  if (param_1 == 0) {
    if (this->Vis_Icon != Collapsed) {
      this->Vis_Icon = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      return;
    }
  }
  else {
    pFVar2 = FDS_ResourceIconTableRow::Get((longlong)param_1,true);
    local_10 = FFieldNotificationClassDescriptor::Vis_Icon.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::Vis_Icon.FieldName;
    if (pFVar2 == (FDS_ResourceIconTableRow *)0x0) {
      if (this->Vis_Icon != Collapsed) {
        this->Vis_Icon = Collapsed;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        return;
      }
    }
    else {
      plVar1 = &this->_padding_;
      if (this->Vis_Icon != SelfHitTestInvisible) {
        this->Vis_Icon = SelfHitTestInvisible;
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
      }
      local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
      if (this->IconID != param_1) {
        this->IconID = param_1;
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
      }
    }
  }
  return;
}

// SetIsButtonDisabled @ 14bfda8c0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetIsButtonDisabled(UDS_VM_W_CommonSkillSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsButtonDisabled.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsButtonDisabled.FieldName;
  if (this->IsButtonDisabled != param_1) {
    this->IsButtonDisabled = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsSkillExist @ 14bfdaa10

void __thiscall
UDS_VM_W_CommonSkillSlot::SetIsSkillExist(UDS_VM_W_CommonSkillSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSkillExist.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSkillExist.FieldName;
  if (this->IsSkillExist != param_1) {
    this->IsSkillExist = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetQuickSlotIndex @ 14bfdd420

void __thiscall
UDS_VM_W_CommonSkillSlot::SetQuickSlotIndex(UDS_VM_W_CommonSkillSlot *this,FString *param_1)

{
  ITextData *pIVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  FName local_38;
  int local_30;
  FText local_28;
  
  FText::FromString(&local_28,param_1);
  iVar3 = FFieldNotificationClassDescriptor::QuickSlotIndexText.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::QuickSlotIndexText.FieldName;
  bVar4 = FText::IdenticalTo(&this->QuickSlotIndexText,&local_28,None);
  if (!bVar4) {
    pIVar1 = (this->QuickSlotIndexText).TextData.Reference;
    if (pIVar1 != local_28.TextData.Reference) {
      (this->QuickSlotIndexText).TextData.Reference = local_28.TextData.Reference;
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 8))
                  (local_28.TextData.Reference,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (this->QuickSlotIndexText).Flags = local_28.Flags;
    local_38 = FVar2;
    local_30 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// SetSkillIconID @ 14bfdd710

void __thiscall UDS_VM_W_CommonSkillSlot::SetSkillIconID(UDS_VM_W_CommonSkillSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  if (this->IconID != param_1) {
    this->IconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSkillLevel @ 14bfdd760

void __thiscall
UDS_VM_W_CommonSkillSlot::SetSkillLevel(UDS_VM_W_CommonSkillSlot *this,FString *param_1)

{
  ITextData *pIVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  FName local_38;
  int local_30;
  FText local_28;
  
  FText::FromString(&local_28,param_1);
  iVar3 = FFieldNotificationClassDescriptor::SkillLevelText.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::SkillLevelText.FieldName;
  bVar4 = FText::IdenticalTo(&this->SkillLevelText,&local_28,None);
  if (!bVar4) {
    pIVar1 = (this->SkillLevelText).TextData.Reference;
    if (pIVar1 != local_28.TextData.Reference) {
      (this->SkillLevelText).TextData.Reference = local_28.TextData.Reference;
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 8))
                  (local_28.TextData.Reference,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (this->SkillLevelText).Flags = local_28.Flags;
    local_38 = FVar2;
    local_30 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// SetSkillName @ 14bfdd840

void __thiscall
UDS_VM_W_CommonSkillSlot::SetSkillName(UDS_VM_W_CommonSkillSlot *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->SkillNameText,param_1);
  local_10 = FFieldNotificationClassDescriptor::SkillNameText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SkillNameText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetStackSkillCount @ 14bfdd9e0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetStackSkillCount(UDS_VM_W_CommonSkillSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::StackSkillCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StackSkillCount.FieldName;
  if (this->StackSkillCount != param_1) {
    this->StackSkillCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetUseSkillAnimationFinishedEvent @ 14bfddfa0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetUseSkillAnimationFinishedEvent
          (UDS_VM_W_CommonSkillSlot *this,FDS_WidgetAnimationEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_UseSkill.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_UseSkill.FieldName;
  if (this->Vis_UseSkill != Collapsed) {
    this->Vis_UseSkill = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVigorProgressRatio @ 14bfde1d0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVigorProgressRatio(UDS_VM_W_CommonSkillSlot *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VigorProgressRatio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VigorProgressRatio.FieldName;
  if (param_1 != this->VigorProgressRatio) {
    this->VigorProgressRatio = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVigorValue @ 14bfde220

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVigorValue(UDS_VM_W_CommonSkillSlot *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VigorValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VigorValue.FieldName;
  if (param_1 != this->VigorValue) {
    this->VigorValue = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_AvailableProgress @ 14bfde270

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_AvailableProgress
          (UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_AvailableProgress.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_AvailableProgress.FieldName;
  if (this->Vis_AvailableProgress != param_1) {
    this->Vis_AvailableProgress = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_CooldownProgress @ 14bfde2c0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_CooldownProgress
          (UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_CooldownProgress.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_CooldownProgress.FieldName;
  if (this->Vis_CooldownProgress != param_1) {
    this->Vis_CooldownProgress = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_CooldownProgress_Color @ 14bfde310

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_CooldownProgress_Color
          (UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_CooldownProgress_Color.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_CooldownProgress_Color.FieldName;
  if (this->Vis_CooldownProgress_Color != param_1) {
    this->Vis_CooldownProgress_Color = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_EndCoolDown @ 14bfde360

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_EndCoolDown
          (UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_EndCooldown.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_EndCooldown.FieldName;
  if (this->Vis_EndCooldown != param_1) {
    this->Vis_EndCooldown = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_Icon @ 14bfde3b0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_Icon(UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_Icon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Icon.FieldName;
  if (this->Vis_Icon != param_1) {
    this->Vis_Icon = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_InputKey @ 14bfde400

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_InputKey(UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_InputKey.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_InputKey.FieldName;
  if (this->Vis_InputKey != param_1) {
    this->Vis_InputKey = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_Silence @ 14bfde450

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_Silence(UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_Silence.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Silence.FieldName;
  if (this->Vis_Silence != param_1) {
    this->Vis_Silence = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_Smite @ 14bfde4a0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_Smite(UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_Smite.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Smite.FieldName;
  if (this->Vis_Smite != param_1) {
    this->Vis_Smite = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_StackSkillCount @ 14bfde4f0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_StackSkillCount
          (UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.FieldName;
  if (this->Vis_StackSkillCount != param_1) {
    this->Vis_StackSkillCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_ToggleSkill @ 14bfde540

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_ToggleSkill
          (UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_ToggleSkill.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_ToggleSkill.FieldName;
  if (this->Vis_ToggleSkill != param_1) {
    this->Vis_ToggleSkill = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_UseSkill @ 14bfde590

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_UseSkill(UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_UseSkill.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_UseSkill.FieldName;
  if (this->Vis_UseSkill != param_1) {
    this->Vis_UseSkill = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVis_Vigor @ 14bfde5e0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVis_Vigor(UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_Vigor.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_Vigor.FieldName;
  if (this->Vis_Vigor != param_1) {
    this->Vis_Vigor = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_QuickSlot @ 14bfde660

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVisibility_QuickSlot
          (UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_QuickSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_QuickSlot.FieldName;
  if (this->Vis_QuickSlot != param_1) {
    this->Vis_QuickSlot = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_SkillLevel @ 14bfde6b0

void __thiscall
UDS_VM_W_CommonSkillSlot::SetVisibility_SkillLevel
          (UDS_VM_W_CommonSkillSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_SkillLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_SkillLevel.FieldName;
  if (this->Vis_SkillLevel != param_1) {
    this->Vis_SkillLevel = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetWidgetEnabled @ 14bfde700

void __thiscall
UDS_VM_W_CommonSkillSlot::SetWidgetEnabled(UDS_VM_W_CommonSkillSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::WidgetEnabled.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WidgetEnabled.FieldName;
  if (this->WidgetEnabled != param_1) {
    this->WidgetEnabled = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bfdfd80

void __thiscall UDS_VM_W_CommonSkillSlot::UnbindModel(UDS_VM_W_CommonSkillSlot *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->SkillData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->SkillData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
    local_res8 = (this->SkillData).WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x10,this);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharBuffData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CharBuffData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x8,this);
  }
  return;
}

// UnbindSkillData_StartEnd @ 14bfe0270

void __thiscall
UDS_VM_W_CommonSkillSlot::UnbindSkillData_StartEnd
          (UDS_VM_W_CommonSkillSlot *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x10,this);
  }
  return;
}

