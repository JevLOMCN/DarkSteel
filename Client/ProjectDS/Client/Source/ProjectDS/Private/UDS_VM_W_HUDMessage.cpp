// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetMsgText_WrapperImpl @ 14b730870

void __cdecl UDS_VM_W_HUDMessage::SetMsgText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa8),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::MsgText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MsgText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetEndAniEvent_WrapperImpl @ 14b730880

void __cdecl UDS_VM_W_HUDMessage::SetEndAniEvent_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  FReadAccessScope FStack_28;
  
  if (*(char *)((longlong)param_2 + 0xd) == '\x02') {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xa0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x188)
               ,&FStack_28);
    if ((*(int *)((longlong)param_1 + 0x198) != 0) &&
       (plVar2 = *(longlong **)((longlong)param_1 + 400), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,uVar1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
  }
  return;
}

// StaticClass @ 14b730890

UClass * __cdecl UDS_VM_W_HUDMessage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_HUDMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_HUDMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_HUDMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_HUDMessage,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_HUDMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_HUDMessage>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_HUDMessage.InnerSingleton;
}

// UDS_VM_W_HUDMessage @ 14b735b10

UDS_VM_W_HUDMessage * __thiscall
UDS_VM_W_HUDMessage::UDS_VM_W_HUDMessage(UDS_VM_W_HUDMessage *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUDMessage__6B_;
  this->SlotIndex = 0;
  (this->MsgText).StringTableType = None;
  (this->MsgText).StringTableID = 0;
  (this->MsgText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MsgText).StringEnumTableNameID.Number = 0;
  (this->MsgText).DateTime.Ticks = 0;
  (this->MsgText).TimeSpan.Ticks = 0;
  (this->MsgText).TimeExpressionType = None;
  (this->MsgText).IsExpression = false;
  (this->MsgText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).UniqueString.Data.ArrayNum = 0;
  (this->MsgText).UniqueString.Data.ArrayMax = 0;
  (this->MsgText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).FormatArgs.ArrayNum = 0;
  (this->MsgText).FormatArgs.ArrayMax = 0;
  (this->PlayOpenAniEvent).AnimationName.ComparisonIndex = 0;
  (this->PlayOpenAniEvent).AnimationName.Number = 0;
  (this->PlayOpenAniEvent).AnimationPlayTime = 0.0;
  (this->PlayOpenAniEvent).AnimationEventType = None;
  (this->PlayOpenAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EndAniEvent).AnimationName.ComparisonIndex = 0;
  (this->EndAniEvent).AnimationName.Number = 0;
  (this->EndAniEvent).AnimationPlayTime = 0.0;
  (this->EndAniEvent).AnimationEventType = None;
  (this->EndAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->EndAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->EndAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->EndAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  *(undefined8 *)&this->EndAniDelegate = 0;
  *(undefined8 *)&(this->EndAniDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->EndAniDelegate).field_0x10 = 0;
  (this->PlayOpenAniEvent).NumberOfLoops = 1;
  (this->EndAniEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_HUDMessage @ 14b735c40

UDS_VM_W_HUDMessage * __thiscall
UDS_VM_W_HUDMessage::UDS_VM_W_HUDMessage(UDS_VM_W_HUDMessage *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUDMessage__6B_;
  this->SlotIndex = 0;
  (this->MsgText).StringTableType = None;
  (this->MsgText).StringTableID = 0;
  (this->MsgText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MsgText).StringEnumTableNameID.Number = 0;
  (this->MsgText).DateTime.Ticks = 0;
  (this->MsgText).TimeSpan.Ticks = 0;
  (this->MsgText).TimeExpressionType = None;
  (this->MsgText).IsExpression = false;
  (this->MsgText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).UniqueString.Data.ArrayNum = 0;
  (this->MsgText).UniqueString.Data.ArrayMax = 0;
  (this->MsgText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsgText).FormatArgs.ArrayNum = 0;
  (this->MsgText).FormatArgs.ArrayMax = 0;
  (this->PlayOpenAniEvent).AnimationName.ComparisonIndex = 0;
  (this->PlayOpenAniEvent).AnimationName.Number = 0;
  (this->PlayOpenAniEvent).AnimationPlayTime = 0.0;
  (this->PlayOpenAniEvent).AnimationEventType = None;
  (this->PlayOpenAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EndAniEvent).AnimationName.ComparisonIndex = 0;
  (this->EndAniEvent).AnimationName.Number = 0;
  (this->EndAniEvent).AnimationPlayTime = 0.0;
  (this->EndAniEvent).AnimationEventType = None;
  (this->EndAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->EndAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->EndAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->EndAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->EndAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  *(undefined8 *)&this->EndAniDelegate = 0;
  *(undefined8 *)&(this->EndAniDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->EndAniDelegate).field_0x10 = 0;
  (this->PlayOpenAniEvent).NumberOfLoops = 1;
  (this->EndAniEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_HUDMessage @ 14b736ac0

void __thiscall UDS_VM_W_HUDMessage::~UDS_VM_W_HUDMessage(UDS_VM_W_HUDMessage *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_HUDMessage__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EndAniDelegate);
  pvVar1 = *(void **)&(this->EndAniDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EndAniDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EndAniEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->EndAniEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EndAniEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->EndAniEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->EndAniEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EndAniEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->PlayOpenAniEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->PlayOpenAniEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PlayOpenAniEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->PlayOpenAniEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->PlayOpenAniEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PlayOpenAniEvent).Delegate_AnimationFinish);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MsgText).FormatArgs.AllocatorInstance.Data,
             (this->MsgText).FormatArgs.ArrayNum);
  pFVar2 = (this->MsgText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MsgText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739ad0

IClassDescriptor * __thiscall
UDS_VM_W_HUDMessage::GetFieldNotificationDescriptor(UDS_VM_W_HUDMessage *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_HUDMessage::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73ad40

UClass * __cdecl UDS_VM_W_HUDMessage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_HUDMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_HUDMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_HUDMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_HUDMessage,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_HUDMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_HUDMessage>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_HUDMessage.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_HUDMessage @ 14b73b0e0

void __cdecl UDS_VM_W_HUDMessage::StaticRegisterNativesUDS_VM_W_HUDMessage(void)

{
  return;
}

// ClearMsg @ 14bf9e330

void __thiscall UDS_VM_W_HUDMessage::ClearMsg(UDS_VM_W_HUDMessage *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  pFVar1 = ::FName::FName(local_res8,"OpenAni");
  (this->PlayOpenAniEvent).AnimationName = *pFVar1;
  (this->PlayOpenAniEvent).AnimationEventType = StopAnimation;
  local_10 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
                    /* WARNING: Could not recover jumptable at 0x00014bf9e394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))(this);
  return;
}

// IsEmptyMsg @ 14bfb2f50

bool __thiscall UDS_VM_W_HUDMessage::IsEmptyMsg(UDS_VM_W_HUDMessage *this)

{
  bool bVar1;
  
  bVar1 = FDS_Text::IsEmpty(&this->MsgText);
  return bVar1;
}

// OnCloseInit @ 14bfbbfb0

void __thiscall UDS_VM_W_HUDMessage::OnCloseInit(UDS_VM_W_HUDMessage *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnEndAni @ 14bfbc5d0

void __thiscall
UDS_VM_W_HUDMessage::OnEndAni(UDS_VM_W_HUDMessage *this,FDS_WidgetAnimationEventField *param_1)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  if (param_1->AnimationStateType == Finished) {
    iVar1 = this->SlotIndex;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->EndAniDelegate,
               &local_28);
    if ((*(int *)&(this->EndAniDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->EndAniDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,iVar1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OnSetViewModel @ 14bfce720

void __thiscall
UDS_VM_W_HUDMessage::OnSetViewModel
          (UDS_VM_W_HUDMessage *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PlayOpenAni @ 14bfd31e0

void __thiscall UDS_VM_W_HUDMessage::PlayOpenAni(UDS_VM_W_HUDMessage *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"OpenAni");
  (this->PlayOpenAniEvent).AnimationName = *pFVar1;
  (this->PlayOpenAniEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMsgText @ 14bfdc3d0

void __thiscall UDS_VM_W_HUDMessage::SetMsgText(UDS_VM_W_HUDMessage *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->MsgText,param_1);
  local_10 = FFieldNotificationClassDescriptor::MsgText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MsgText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// StartMsg @ 14bfde950

void __thiscall UDS_VM_W_HUDMessage::StartMsg(UDS_VM_W_HUDMessage *this,FDS_Text *param_1)

{
  FName *pFVar1;
  FName local_res8;
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->MsgText,param_1);
  local_10 = FFieldNotificationClassDescriptor::MsgText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MsgText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  pFVar1 = ::FName::FName(&local_res8,"OpenAni");
  (this->PlayOpenAniEvent).AnimationName = *pFVar1;
  (this->PlayOpenAniEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
  return;
}

// StopOpenAni @ 14bfdeb30

void __thiscall UDS_VM_W_HUDMessage::StopOpenAni(UDS_VM_W_HUDMessage *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"OpenAni");
  (this->PlayOpenAniEvent).AnimationName = *pFVar1;
  (this->PlayOpenAniEvent).AnimationEventType = StopAnimation;
  local_10 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayOpenAniEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bfdffd0

void __thiscall UDS_VM_W_HUDMessage::UnbindModel(UDS_VM_W_HUDMessage *this)

{
  ForAnyElementType FVar1;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.TimeExpressionType = None;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  FDS_Text::operator=(&this->MsgText,&local_58);
  local_60 = FFieldNotificationClassDescriptor::MsgText.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::MsgText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  FVar1.Data = local_58.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar1.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

