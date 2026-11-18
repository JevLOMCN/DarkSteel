// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetEventMouseButtonUp_WrapperImpl @ 14b6d5570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_RingCmdQuickSlot::SetEventMouseButtonUp_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  uint uVar3;
  wchar_t *pwVar4;
  FWeakObjectPtr aFStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_RingCommandDeckData::GetData
            ((ulong64)aFStack_148,UDS_PlayerData::MainPlayerEntityID,
             SUB41(*(undefined4 *)((longlong)param_1 + 0x46c),0));
  bVar1 = FWeakObjectPtr::IsValid(aFStack_148);
  if (bVar1) {
    if (-1 < *(int *)((longlong)param_1 + 0x470)) {
      FDS_RingCommandService::ExecuteRingCommand
                ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)aFStack_148[0],
                 *(int *)((longlong)param_1 + 0x470));
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_RingCmdQuickSlot::OnEventMouseButtonUp",0x2d,Yes);
    pwVar4 = L"SlotIndex is invalid. SlotIndex : %d";
    uVar3 = 0xb9;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_RingCmdQuickSlot::OnEventMouseButtonUp",0x2d,Yes);
    pwVar4 = L"ringCmdDeckData is invalid. DeckIndex : %d";
    uVar3 = 0xb3;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,uVar3,pwVar4);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// SetEventMouseEnter_WrapperImpl @ 14b6d5580

void __cdecl UDS_VM_RingCmdQuickSlot::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsHover.FieldName;
  if (*(char *)((longlong)param_1 + 0x468) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x468) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b6d5590

void __cdecl UDS_VM_RingCmdQuickSlot::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsHover.FieldName;
  if (*(char *)((longlong)param_1 + 0x468) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x468) = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetExecuteFxVisibility_WrapperImpl @ 14b6d55a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RingCmdQuickSlot::SetExecuteFxVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetExecuteFxVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetExecuteAnimationFinishedEvent_WrapperImpl @ 14b6d55b0

void __cdecl
UDS_VM_RingCmdQuickSlot::SetExecuteAnimationFinishedEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::ExecuteFxVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ExecuteFxVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0x3d0) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3d0) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b6d55c0

UClass * __cdecl UDS_VM_RingCmdQuickSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RingCmdQuickSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RingCmdQuickSlot",
               &Z_Registration_Info_UClass_UDS_VM_RingCmdQuickSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_RingCmdQuickSlot,0x478,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RingCmdQuickSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_RingCmdQuickSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RingCmdQuickSlot.InnerSingleton;
}

// UDS_VM_RingCmdQuickSlot @ 14b6d9520

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_RingCmdQuickSlot * __thiscall
UDS_VM_RingCmdQuickSlot::UDS_VM_RingCmdQuickSlot
          (UDS_VM_RingCmdQuickSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_RingCmd_Icon).field0_0x0.DebugPtr = (UDS_VM_W_RingCmd_IconImg *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RingCmdQuickSlot__6B_;
  (this->VM_RingCmd_CoolDown).field0_0x0.DebugPtr = (UDS_VM_RingCmdCoolDown *)0x0;
  (this->VM_InputKeyBottom).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  (this->ExecuteAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ExecuteAnimationEvent).AnimationName.Number = 0;
  (this->ExecuteAnimationEvent).AnimationPlayTime = 0.0;
  (this->ExecuteAnimationEvent).AnimationEventType = None;
  (this->ExecuteAnimationEvent).AnimationStateType = None;
  (this->ExecuteAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ExecuteAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ExecuteAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ExecuteAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ExecuteAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ExecuteAnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->ExecuteAnimationFinishedEvent).AnimationName.Number = 0;
  (this->ExecuteAnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->ExecuteAnimationFinishedEvent).AnimationEventType = None;
  (this->ExecuteAnimationFinishedEvent).AnimationStateType = None;
  (this->ExecuteAnimationFinishedEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ExecuteAnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ExecuteAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ExecuteAnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ExecuteAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->IsHover = false;
  this->DeckIndex = -1;
  this->SlotIndex = -1;
  return this;
}

// UDS_VM_RingCmdQuickSlot @ 14b6d96a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_RingCmdQuickSlot * __thiscall
UDS_VM_RingCmdQuickSlot::UDS_VM_RingCmdQuickSlot
          (UDS_VM_RingCmdQuickSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_RingCmd_Icon).field0_0x0.DebugPtr = (UDS_VM_W_RingCmd_IconImg *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RingCmdQuickSlot__6B_;
  (this->VM_RingCmd_CoolDown).field0_0x0.DebugPtr = (UDS_VM_RingCmdCoolDown *)0x0;
  (this->VM_InputKeyBottom).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  (this->ExecuteAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->ExecuteAnimationEvent).AnimationName.Number = 0;
  (this->ExecuteAnimationEvent).AnimationPlayTime = 0.0;
  (this->ExecuteAnimationEvent).AnimationEventType = None;
  (this->ExecuteAnimationEvent).AnimationStateType = None;
  (this->ExecuteAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ExecuteAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ExecuteAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ExecuteAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ExecuteAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ExecuteAnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->ExecuteAnimationFinishedEvent).AnimationName.Number = 0;
  (this->ExecuteAnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->ExecuteAnimationFinishedEvent).AnimationEventType = None;
  (this->ExecuteAnimationFinishedEvent).AnimationStateType = None;
  (this->ExecuteAnimationFinishedEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->ExecuteAnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->ExecuteAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->ExecuteAnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->ExecuteAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->ExecuteAnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->IsHover = false;
  this->DeckIndex = -1;
  this->SlotIndex = -1;
  return this;
}

// ~UDS_VM_RingCmdQuickSlot @ 14b6daaa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RingCmdQuickSlot::~UDS_VM_RingCmdQuickSlot(UDS_VM_RingCmdQuickSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RingCmdQuickSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ExecuteAnimationFinishedEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->ExecuteAnimationFinishedEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ExecuteAnimationFinishedEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ExecuteAnimationFinishedEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->ExecuteAnimationFinishedEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ExecuteAnimationFinishedEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ExecuteAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->ExecuteAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ExecuteAnimationEvent).Delegate_ValidAnimation)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ExecuteAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->ExecuteAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ExecuteAnimationEvent).Delegate_AnimationFinish
            );
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dcfa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_RingCmdQuickSlot::GetFieldNotificationDescriptor(UDS_VM_RingCmdQuickSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RingCmdQuickSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ddc80

UClass * __cdecl UDS_VM_RingCmdQuickSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RingCmdQuickSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RingCmdQuickSlot",
               &Z_Registration_Info_UClass_UDS_VM_RingCmdQuickSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_RingCmdQuickSlot,0x478,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RingCmdQuickSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_RingCmdQuickSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RingCmdQuickSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RingCmdQuickSlot @ 14b6ddfd0

void __cdecl UDS_VM_RingCmdQuickSlot::StaticRegisterNativesUDS_VM_RingCmdQuickSlot(void)

{
  return;
}

// __VTableCtorCaller @ 14b6defa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_RingCmdQuickSlot::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_RingCmdQuickSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FGeometry::FGeometry((FGeometry *)&this[1]._padding_);
    FPointerEvent::FPointerEvent((FPointerEvent *)&this[1]._padding_);
    FKeyEvent::FKeyEvent((FKeyEvent *)&this[2]._padding_);
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    FGeometry::FGeometry((FGeometry *)&this[2].VMName.Number);
    FPointerEvent::FPointerEvent((FPointerEvent *)&this[3]._padding_);
    FKeyEvent::FKeyEvent((FKeyEvent *)(this + 4));
    this[4]._padding_ = 0;
    FGeometry::FGeometry((FGeometry *)&this[4]._padding_);
    FPointerEvent::FPointerEvent((FPointerEvent *)&this[4].VMName.Number);
    FKeyEvent::FKeyEvent((FKeyEvent *)&this[5]._padding_);
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined2 *)((longlong)&this[6]._padding_ + 4) = 0;
    *(undefined4 *)&this[6]._padding_ = 1;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined2 *)((longlong)&this[6]._padding_ + 4) = 0;
    *(undefined4 *)&this[6].ViewModelContext.Object = 1;
    this[6].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[6].Visibility = Visible;
    *(undefined3 *)&this[6].field_0x81 = 0;
    this[6].VMName.ComparisonIndex = 0;
    this[6].VMName.Number = 0;
    this[6].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[6].TextPropertyIDList.ArrayNum = 0;
    this[6].TextPropertyIDList.ArrayMax = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined1 *)&this[7]._padding_ = 0;
    *(undefined8 *)((longlong)&this[7]._padding_ + 4) = 0xffffffffffffffff;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14bf9baf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RingCmdQuickSlot::BindModel(UDS_VM_RingCmdQuickSlot *this)

{
  UDS_RingCommandUIEvent *pUVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_EventManager::GetEvent<UDS_RingCommandUIEvent>();
  if (pUVar1 != (UDS_RingCommandUIEvent *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar1->OnRingCmdExecuted).Subscriptions,this->SlotIndex,
                         &this->SlotIndex);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_RingCmdQuickSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               this_00,(UDS_VM_RingCmdQuickSlot *)&stack0x00000010,(pmf_bb40b11a *)this);
  }
  return;
}

// OnEventMouseButtonUp @ 14bfbca60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdQuickSlot::OnEventMouseButtonUp
          (UDS_VM_RingCmdQuickSlot *this,FDS_WidgetPointerEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  uint uVar3;
  wchar_t *pwVar4;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_RingCommandDeckData::GetData
            ((ulong64)local_148,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DeckIndex,0));
  bVar1 = FWeakObjectPtr::IsValid(local_148);
  if (bVar1) {
    if (-1 < this->SlotIndex) {
      FDS_RingCommandService::ExecuteRingCommand
                ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)local_148[0],
                 this->SlotIndex);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_RingCmdQuickSlot::OnEventMouseButtonUp",0x2d,Yes);
    pwVar4 = L"SlotIndex is invalid. SlotIndex : %d";
    uVar3 = 0xb9;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_RingCmdQuickSlot::OnEventMouseButtonUp",0x2d,Yes);
    pwVar4 = L"ringCmdDeckData is invalid. DeckIndex : %d";
    uVar3 = 0xb3;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnEventMouseEnter @ 14bfbcc00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdQuickSlot::OnEventMouseEnter
          (UDS_VM_RingCmdQuickSlot *this,FDS_WidgetPointerEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsHover.FieldName;
  if (this->IsHover != true) {
    this->IsHover = true;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnEventMouseLeave @ 14bfbccd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdQuickSlot::OnEventMouseLeave
          (UDS_VM_RingCmdQuickSlot *this,FDS_WidgetPointerEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsHover.FieldName;
  if (this->IsHover != false) {
    this->IsHover = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnRingCmdExecuted @ 14bfc09e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RingCmdQuickSlot::OnRingCmdExecuted(UDS_VM_RingCmdQuickSlot *this)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  FName local_res8;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ExecuteFxVisibility.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ExecuteFxVisibility.FieldName;
  if (this->ExecuteFxVisibility != SelfHitTestInvisible) {
    this->ExecuteFxVisibility = SelfHitTestInvisible;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pFVar3 = ::FName::FName(&local_res8,"Release");
  (this->ExecuteAnimationEvent).AnimationName = *pFVar3;
  (this->ExecuteAnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::ExecuteAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExecuteAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bfc0d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdQuickSlot::OnSetViewModel
          (UDS_VM_RingCmdQuickSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_RingCmdType EVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  long64 lVar5;
  FDS_ViewModelContext_RingCmd *pFVar6;
  FDS_ViewModelContext_RingCmdSlotInfo *pFVar7;
  FDS_ViewModelContext_InputKey *pFVar8;
  bool bVar9;
  UDS_LogManager *pUVar10;
  UDS_RingCommandDeckData *this_00;
  UClass *pUVar11;
  UClass *pUVar12;
  UDS_VM_W_RingCmd_IconImg *pUVar13;
  UDS_VM_RingCmdCoolDown *pUVar14;
  UDS_VM_InputKey *pUVar15;
  longlong *plVar16;
  undefined1 auStackY_6b8 [32];
  TSharedPtr<FDS_ViewModelContext_RingCmdQuickSlot,1> local_678;
  TSharedPtr<FDS_ViewModelContext_RingCmd,1> local_668;
  TSharedPtr<FDS_ViewModelContext_RingCmdSlotInfo,1> local_658;
  TSharedPtr<FDS_RingCommandSlotData,1> local_648;
  FWeakObjectPtr local_638;
  undefined8 local_630;
  undefined8 local_628;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_618;
  TSharedPtr<FDS_ViewModelContext,1> local_608;
  TSharedPtr<FDS_ViewModelContext,1> local_5f8;
  TSharedPtr<FDS_ViewModelContext,1> local_5e8;
  TSharedPtr<FDS_ViewModelContext,1> local_5d8;
  undefined1 local_5c8 [128];
  undefined1 local_548 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_608.Object = param_1->Object;
  local_608.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_RingCmdQuickSlot>(&local_678,&local_608);
  if (local_678.Object == (FDS_ViewModelContext_RingCmdQuickSlot *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_4c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4c8,"UDS_VM_RingCmdQuickSlot::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_4c8.Ptr,0x16,L"context is nullptr.");
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_678.SharedReferenceCount.ReferenceController);
    goto LAB_14bfc1658;
  }
  iVar2 = (local_678.Object)->DeckIndex;
  this->DeckIndex = iVar2;
  this->SlotIndex = (local_678.Object)->SlotIndex;
  this->ExecuteFxVisibility = Collapsed;
  UDS_RingCommandDeckData::GetData
            ((ulong64)&local_638,UDS_PlayerData::MainPlayerEntityID,SUB41(iVar2,0));
  bVar9 = FWeakObjectPtr::IsValid(&local_638);
  if (!bVar9) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_VM_RingCmdQuickSlot::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_3a8.Ptr,0x23,L"ringCmdDeckData is invalid. DeckIndex : %d")
      ;
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_678.SharedReferenceCount.ReferenceController);
    goto LAB_14bfc1658;
  }
  this_00 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&local_638);
  UDS_RingCommandDeckData::GetRingCommandData(this_00,&local_648,&this->SlotIndex);
  if (local_648.Object == (FDS_RingCommandSlotData *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_RingCmdQuickSlot::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_288.Ptr,0x2a,
                 L"ringCmdSlotData is nullptr. DeckIndex : %d, SlotIndex : %d");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  else {
    if ((this->VM_RingCmd_Icon).field0_0x0.DebugPtr == (UDS_VM_W_RingCmd_IconImg *)0x0) {
      local_630 = 0;
      pUVar11 = Z_Construct_UClass_UDS_VM_W_RingCmd_IconImg_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar12 = Z_Construct_UClass_UDS_VM_W_RingCmd_IconImg_NoRegister();
      CheckIsClassChildOf_Internal(pUVar12,pUVar11);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_5c8,pUVar11);
      local_5c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_5c8._56_8_ = (UPackage *)0x0;
      local_5c8._16_4_ = 0;
      local_5c8._20_4_ = 0;
      local_5c8._24_4_ = RF_Transient;
      local_5c8._40_8_ = (UObject *)0x0;
      local_5c8[0x20] = false;
      local_5c8._8_8_ = this;
      pUVar13 = (UDS_VM_W_RingCmd_IconImg *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_5c8);
      if (local_5c8._64_8_ != 0) {
        plVar16 = (longlong *)(local_5c8 + 0x50);
        if ((longlong *)local_5c8._104_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_5c8._104_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (pUVar13 != (UDS_VM_W_RingCmd_IconImg *)0x0) {
        *(undefined1 *)((longlong)&pUVar13->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar13 != (UDS_VM_W_RingCmd_IconImg *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      (this->VM_RingCmd_Icon).field0_0x0.DebugPtr = pUVar13;
      if (pUVar13 != (UDS_VM_W_RingCmd_IconImg *)0x0) goto LAB_14bfc10d6;
    }
    else {
LAB_14bfc10d6:
      MakeContext<FDS_ViewModelContext_RingCmd>(&local_668);
      pFVar6 = local_668.Object;
      if (local_668.Object != (FDS_ViewModelContext_RingCmd *)0x0) {
        if ((local_668.Object == (FDS_ViewModelContext_RingCmd *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)&pFVar6->_padding_ = 0x113;
        if ((local_678.Object == (FDS_ViewModelContext_RingCmdQuickSlot *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (local_678.Object)->DeckIndex;
        if ((pFVar6 == (FDS_ViewModelContext_RingCmd *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6->RingCmdDeckNum = iVar2;
        if ((local_678.Object == (FDS_ViewModelContext_RingCmdQuickSlot *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (local_678.Object)->SlotIndex;
        if ((pFVar6 == (FDS_ViewModelContext_RingCmd *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6->RingCmdIndex = iVar2;
        pUVar13 = (this->VM_RingCmd_Icon).field0_0x0.DebugPtr;
        local_5f8.Object = (FDS_ViewModelContext *)local_668.Object;
        local_5f8.SharedReferenceCount.ReferenceController =
             local_668.SharedReferenceCount.ReferenceController;
        if (local_668.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_668.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_668.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar13,&local_5f8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_668.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_RingCmd_CoolDown).field0_0x0.DebugPtr == (UDS_VM_RingCmdCoolDown *)0x0) {
      local_628 = 0;
      pUVar11 = Z_Construct_UClass_UDS_VM_RingCmdCoolDown_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar12 = Z_Construct_UClass_UDS_VM_RingCmdCoolDown_NoRegister();
      CheckIsClassChildOf_Internal(pUVar12,pUVar11);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_548,pUVar11);
      local_548._48_8_ = (FObjectInstancingGraph *)0x0;
      local_548._56_8_ = (UPackage *)0x0;
      local_548._16_4_ = 0;
      local_548._20_4_ = 0;
      local_548._24_4_ = RF_Transient;
      local_548._40_8_ = (UObject *)0x0;
      local_548[0x20] = false;
      local_548._8_8_ = this;
      pUVar14 = (UDS_VM_RingCmdCoolDown *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_548);
      if (local_548._64_8_ != 0) {
        plVar16 = (longlong *)(local_548 + 0x50);
        if ((longlong *)local_548._104_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_548._104_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (pUVar14 != (UDS_VM_RingCmdCoolDown *)0x0) {
        *(undefined1 *)((longlong)&pUVar14->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UDS_VM_RingCmdCoolDown *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      (this->VM_RingCmd_CoolDown).field0_0x0.DebugPtr = pUVar14;
      if (pUVar14 != (UDS_VM_RingCmdCoolDown *)0x0) goto LAB_14bfc1325;
    }
    else {
LAB_14bfc1325:
      MakeContext<FDS_ViewModelContext_RingCmdSlotInfo>(&local_658);
      pFVar7 = local_658.Object;
      if ((local_658.Object == (FDS_ViewModelContext_RingCmdSlotInfo *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&pFVar7->_padding_ = 0x114;
      if ((local_648.Object == (FDS_RingCommandSlotData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar5 = (local_648.Object)->SlotData;
      if ((pFVar7 == (FDS_ViewModelContext_RingCmdSlotInfo *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7->RingCmdContentId = (int)lVar5;
      if ((local_648.Object == (FDS_RingCommandSlotData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar1 = (local_648.Object)->SlotType;
      if ((pFVar7 == (FDS_ViewModelContext_RingCmdSlotInfo *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7->RingCmdType = EVar1;
      pUVar14 = (this->VM_RingCmd_CoolDown).field0_0x0.DebugPtr;
      local_5e8.Object = (FDS_ViewModelContext *)local_658.Object;
      local_5e8.SharedReferenceCount.ReferenceController =
           local_658.SharedReferenceCount.ReferenceController;
      if (local_658.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_658.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_658.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar14,&local_5e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_658.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_InputKeyBottom).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
      pUVar15 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar15 != (UDS_VM_InputKey *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      (this->VM_InputKeyBottom).field0_0x0.DebugPtr = pUVar15;
      if (pUVar15 == (UDS_VM_InputKey *)0x0) goto LAB_14bfc1634;
    }
    MakeContext<FDS_ViewModelContext_InputKey>(&local_618);
    pFVar8 = local_618.Object;
    if ((local_618.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&pFVar8->_padding_ = 0x15d;
    switch(this->SlotIndex) {
    case 0:
      pFVar8->KeyActionType = IA_RingCommandQuickSlot_0;
      break;
    case 1:
      pFVar8->KeyActionType = IA_RingCommandQuickSlot_1;
      break;
    case 2:
      pFVar8->KeyActionType = IA_RingCommandQuickSlot_2;
      break;
    case 3:
      pFVar8->KeyActionType = IA_RingCommandQuickSlot_3;
      break;
    case 4:
      pFVar8->KeyActionType = IA_RingCommandQuickSlot_4;
      break;
    case 5:
      pFVar8->KeyActionType = IA_RingCommandQuickSlot_5;
      break;
    case 6:
      pFVar8->KeyActionType = IA_RingCommandQuickSlot_6;
      break;
    case 7:
      pFVar8->KeyActionType = IA_RingCommandQuickSlot_7;
      break;
    default:
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_RingCmdQuickSlot::OnSetViewModel",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar10,1,Warning,local_168.Ptr,0x8f,L"Invalid SlotIndex : %d");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
      pFVar8->KeyActionType = None;
    }
    pUVar15 = (this->VM_InputKeyBottom).field0_0x0.DebugPtr;
    local_5d8.Object = (FDS_ViewModelContext *)local_618.Object;
    local_5d8.SharedReferenceCount.ReferenceController =
         local_618.SharedReferenceCount.ReferenceController;
    if (local_618.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar15,&local_5d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_618.SharedReferenceCount.ReferenceController);
  }
LAB_14bfc1634:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_648.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_678.SharedReferenceCount.ReferenceController);
LAB_14bfc1658:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetExecuteAnimationFinishedEvent @ 14bfd9a00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdQuickSlot::SetExecuteAnimationFinishedEvent
          (UDS_VM_RingCmdQuickSlot *this,FDS_WidgetAnimationEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ExecuteFxVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExecuteFxVisibility.FieldName;
  if (this->ExecuteFxVisibility != Collapsed) {
    this->ExecuteFxVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetExecuteFxVisibility @ 14bfd9a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdQuickSlot::SetExecuteFxVisibility
          (UDS_VM_RingCmdQuickSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ExecuteFxVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExecuteFxVisibility.FieldName;
  if (this->ExecuteFxVisibility != param_1) {
    this->ExecuteFxVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bfdf2c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RingCmdQuickSlot::UnbindModel(UDS_VM_RingCmdQuickSlot *this)

{
  UDS_RingCommandUIEvent *pUVar1;
  
  pUVar1 = UDS_EventManager::GetEvent<UDS_RingCommandUIEvent>();
  if (pUVar1 != (UDS_RingCommandUIEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_>::Remove<UDS_VM_RingCmdQuickSlot>
              (&pUVar1->OnRingCmdExecuted,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

