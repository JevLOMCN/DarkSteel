// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetClickButton_WrapperImpl @ 14b6acf90

void __cdecl
UDS_VM_NpcFunction_MenuSlotBase::SetClickButton_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014b6acf93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x330))();
  return;
}

// SetHoverButton_WrapperImpl @ 14b6acfa0

void __cdecl
UDS_VM_NpcFunction_MenuSlotBase::SetHoverButton_WrapperImpl(void *param_1,void *param_2)

{
  FName *pFVar1;
  FName aFStackX_8 [4];
  FName FStack_18;
  int iStack_10;
  
  pFVar1 = ::FName::FName(aFStackX_8,"Hover_Ani");
  *(FName *)((longlong)param_1 + 0x138) = *pFVar1;
  *(undefined1 *)((longlong)param_1 + 0x144) = 2;
  iStack_10 = FFieldNotificationClassDescriptor::HoverAnimationEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::HoverAnimationEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6acfb0

UClass * __cdecl UDS_VM_NpcFunction_MenuSlotBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_MenuSlotBase",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotBase.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotBase,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcFunction_MenuSlotBase>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_MenuSlotBase>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotBase.InnerSingleton;
}

// UDS_VM_NpcFunction_MenuSlotBase @ 14b6b1ea0

UDS_VM_NpcFunction_MenuSlotBase * __thiscall
UDS_VM_NpcFunction_MenuSlotBase::UDS_VM_NpcFunction_MenuSlotBase
          (UDS_VM_NpcFunction_MenuSlotBase *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotBase__6B_;
  this->IconID = 0;
  (this->Name).StringTableType = None;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  (this->ClickButton)._padding_ = '\0';
  (this->ClickButton).bIsCustomSelected = false;
  (this->ClickButton).bIsLacked = false;
  (this->ClickButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickButton).Delegate = 0;
  *(undefined8 *)&(this->ClickButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButton).Delegate.field_0x10 = 0;
  (this->HoverButton)._padding_ = '\0';
  (this->HoverButton).bIsCustomSelected = false;
  (this->HoverButton).bIsLacked = false;
  (this->HoverButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->HoverButton).Delegate = 0;
  *(undefined8 *)&(this->HoverButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->HoverButton).Delegate.field_0x10 = 0;
  (this->HoverAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->HoverAnimationEvent).AnimationName.Number = 0;
  (this->HoverAnimationEvent).AnimationPlayTime = 0.0;
  (this->HoverAnimationEvent).AnimationEventType = None;
  (this->HoverAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->NpcDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  this->InteractionID = 0;
  this->FunctionType = None;
  (this->HoverAnimationEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_NpcFunction_MenuSlotBase @ 14b6b1fc0

UDS_VM_NpcFunction_MenuSlotBase * __thiscall
UDS_VM_NpcFunction_MenuSlotBase::UDS_VM_NpcFunction_MenuSlotBase
          (UDS_VM_NpcFunction_MenuSlotBase *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotBase__6B_;
  this->IconID = 0;
  (this->Name).StringTableType = None;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  (this->ClickButton)._padding_ = '\0';
  (this->ClickButton).bIsCustomSelected = false;
  (this->ClickButton).bIsLacked = false;
  (this->ClickButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickButton).Delegate = 0;
  *(undefined8 *)&(this->ClickButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButton).Delegate.field_0x10 = 0;
  (this->HoverButton)._padding_ = '\0';
  (this->HoverButton).bIsCustomSelected = false;
  (this->HoverButton).bIsLacked = false;
  (this->HoverButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->HoverButton).Delegate = 0;
  *(undefined8 *)&(this->HoverButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->HoverButton).Delegate.field_0x10 = 0;
  (this->HoverAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->HoverAnimationEvent).AnimationName.Number = 0;
  (this->HoverAnimationEvent).AnimationPlayTime = 0.0;
  (this->HoverAnimationEvent).AnimationEventType = None;
  (this->HoverAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->NpcDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  this->InteractionID = 0;
  this->FunctionType = None;
  (this->HoverAnimationEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_NpcFunction_MenuSlotBase @ 14b6b3e00

void __thiscall
UDS_VM_NpcFunction_MenuSlotBase::~UDS_VM_NpcFunction_MenuSlotBase
          (UDS_VM_NpcFunction_MenuSlotBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->HoverAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->HoverAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HoverAnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->HoverAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->HoverAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HoverAnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HoverButton).Delegate);
  pvVar1 = *(void **)&(this->HoverButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HoverButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickButton).Delegate);
  pvVar1 = *(void **)&(this->ClickButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Name).FormatArgs.AllocatorInstance.Data,
             (this->Name).FormatArgs.ArrayNum);
  pFVar2 = (this->Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6940

IClassDescriptor * __thiscall
UDS_VM_NpcFunction_MenuSlotBase::GetFieldNotificationDescriptor
          (UDS_VM_NpcFunction_MenuSlotBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NpcFunction_MenuSlotBase::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b72e0

UClass * __cdecl UDS_VM_NpcFunction_MenuSlotBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_MenuSlotBase",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotBase.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotBase,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcFunction_MenuSlotBase>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_MenuSlotBase>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotBase.InnerSingleton;
}

// OnClickButton @ 14b6b7d00

void __thiscall
UDS_VM_NpcFunction_MenuSlotBase::OnClickButton
          (UDS_VM_NpcFunction_MenuSlotBase *this,FDS_ButtonEventField *param_1)

{
  return;
}

// StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotBase @ 14b6b7db0

void __cdecl
UDS_VM_NpcFunction_MenuSlotBase::StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotBase(void)

{
  return;
}

// OnHoverAnimation @ 14befdd50

void __thiscall
UDS_VM_NpcFunction_MenuSlotBase::OnHoverAnimation(UDS_VM_NpcFunction_MenuSlotBase *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Hover_Ani");
  (this->HoverAnimationEvent).AnimationName = *pFVar1;
  (this->HoverAnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::HoverAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HoverAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnHoverButton @ 14befddb0

void __thiscall
UDS_VM_NpcFunction_MenuSlotBase::OnHoverButton
          (UDS_VM_NpcFunction_MenuSlotBase *this,FDS_ButtonEventField *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Hover_Ani");
  (this->HoverAnimationEvent).AnimationName = *pFVar1;
  (this->HoverAnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::HoverAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HoverAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bf08d20

void __thiscall
UDS_VM_NpcFunction_MenuSlotBase::OnSetViewModel
          (UDS_VM_NpcFunction_MenuSlotBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  bool bVar1;
  TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> TVar2;
  undefined1 local_res10 [8];
  TSharedPtr<FDS_ViewModelContext_NpcFunctionMenuSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NpcFunctionMenuSlot>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_NpcFunctionMenuSlot *)0x0) {
    TVar2 = TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->NpcDataSet).WeakPtr = *TVar2.WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
    if (bVar1) {
      this->InteractionID = (local_28.Object)->InteractionID;
      this->FunctionType = (local_28.Object)->FunctionType;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIconID @ 14bf14cf0

void __thiscall
UDS_VM_NpcFunction_MenuSlotBase::SetIconID(UDS_VM_NpcFunction_MenuSlotBase *this,int param_1)

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

