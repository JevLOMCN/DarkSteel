// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetEventMouseEnter_WrapperImpl @ 14b65ad40

void __cdecl UDS_VM_GuildMarkSlot::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FName *pFVar2;
  FName FVar3;
  FName FStackX_8;
  FName FStack_18;
  int iStack_10;
  
  iVar1 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::IsHover.FieldName;
  if (*(char *)((longlong)param_1 + 0xa0) == '\x01') {
    if (*(char *)((longlong)param_1 + 0xa1) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
      iStack_10 = iVar1;
      FStack_18 = FVar3;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::IsSelectHover.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::IsSelectHover.FieldName;
    if (*(char *)((longlong)param_1 + 0xa2) == '\x01') goto LAB_14be98460;
    *(undefined1 *)((longlong)param_1 + 0xa2) = 1;
  }
  else {
    if (*(char *)((longlong)param_1 + 0xa1) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
      iStack_10 = iVar1;
      FStack_18 = FVar3;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::IsSelectHover.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::IsSelectHover.FieldName;
    if (*(char *)((longlong)param_1 + 0xa2) == '\0') goto LAB_14be98460;
    *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  }
  FStack_18 = FVar3;
  iStack_10 = iVar1;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
LAB_14be98460:
  pFVar2 = ::FName::FName(&FStackX_8,"Hover_Ani");
  *(FName *)((longlong)param_1 + 200) = *pFVar2;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 2;
  iStack_10 = FFieldNotificationClassDescriptor::HoverAnimationEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::HoverAnimationEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b65ad50

void __cdecl UDS_VM_GuildMarkSlot::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::IsSelectHover.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsSelectHover.FieldName;
  iStack_10 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsHover.FieldName;
  if (*(char *)((longlong)param_1 + 0xa0) == '\x01') {
    if (*(char *)((longlong)param_1 + 0xa2) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_18);
    }
    iStack_10 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsHover.FieldName;
    if (*(char *)((longlong)param_1 + 0xa1) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_18);
    }
  }
  else if (*(char *)((longlong)param_1 + 0xa1) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    return;
  }
  return;
}

// SetEventMouseButtonDown_WrapperImpl @ 14b65ad60

void __cdecl UDS_VM_GuildMarkSlot::SetEventMouseButtonDown_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  UDS_GuildEvent *pUVar3;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if (*(char *)((longlong)param_1 + 0xa0) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
    iStack_10 = iVar2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  pUVar3 = UDS_GuildEvent::GetEvent();
  if (pUVar3 != (UDS_GuildEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar3->SelectedGuildMarkSlotDelegate,*(int *)((longlong)param_1 + 0x428));
    return;
  }
  return;
}

// StaticClass @ 14b65ad70

UClass * __cdecl UDS_VM_GuildMarkSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMarkSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMarkSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildMarkSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMarkSlot,0x430,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildMarkSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMarkSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMarkSlot.InnerSingleton;
}

// UDS_VM_GuildMarkSlot @ 14b65e9b0

UDS_VM_GuildMarkSlot * __thiscall
UDS_VM_GuildMarkSlot::UDS_VM_GuildMarkSlot(UDS_VM_GuildMarkSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MarkResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MarkResourcePath).AssetPath.PackageName.Number = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMarkSlot__6B_;
  (this->MarkResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MarkResourcePath).AssetPath.AssetName.Number = 0;
  (this->MarkResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MarkResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->MarkResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->HoverAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->HoverAnimationEvent).AnimationName.Number = 0;
  (this->HoverAnimationEvent).AnimationPlayTime = 0.0;
  (this->HoverAnimationEvent).AnimationEventType = None;
  (this->HoverAnimationEvent).AnimationStateType = None;
  (this->HoverAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeave);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseButtonDown);
  this->TableID = 0;
  return this;
}

// UDS_VM_GuildMarkSlot @ 14b65ea90

UDS_VM_GuildMarkSlot * __thiscall
UDS_VM_GuildMarkSlot::UDS_VM_GuildMarkSlot(UDS_VM_GuildMarkSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MarkResourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MarkResourcePath).AssetPath.PackageName.Number = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMarkSlot__6B_;
  (this->MarkResourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MarkResourcePath).AssetPath.AssetName.Number = 0;
  (this->MarkResourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MarkResourcePath).SubPathString.Data.ArrayNum = 0;
  (this->MarkResourcePath).SubPathString.Data.ArrayMax = 0;
  (this->HoverAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->HoverAnimationEvent).AnimationName.Number = 0;
  (this->HoverAnimationEvent).AnimationPlayTime = 0.0;
  (this->HoverAnimationEvent).AnimationEventType = None;
  (this->HoverAnimationEvent).AnimationStateType = None;
  (this->HoverAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->HoverAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->HoverAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeave);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseButtonDown);
  this->TableID = 0;
  return this;
}

// ~UDS_VM_GuildMarkSlot @ 14b661bf0

void __thiscall UDS_VM_GuildMarkSlot::~UDS_VM_GuildMarkSlot(UDS_VM_GuildMarkSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMarkSlot__6B_;
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
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
  pFVar2 = (this->MarkResourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b664500

IClassDescriptor * __thiscall
UDS_VM_GuildMarkSlot::GetFieldNotificationDescriptor(UDS_VM_GuildMarkSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildMarkSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b664c60

UClass * __cdecl UDS_VM_GuildMarkSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMarkSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMarkSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildMarkSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMarkSlot,0x430,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildMarkSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMarkSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMarkSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildMarkSlot @ 14b665420

void __cdecl UDS_VM_GuildMarkSlot::StaticRegisterNativesUDS_VM_GuildMarkSlot(void)

{
  return;
}

// BindModel @ 14be75e90

void __thiscall UDS_VM_GuildMarkSlot::BindModel(UDS_VM_GuildMarkSlot *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkSlotDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildMarkSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkSlotDelegate,(UDS_VM_GuildMarkSlot *)&stack0x00000010,
               (pmf_a17acf4d *)this);
  }
  return;
}

// InitViewModel @ 14be8cc90

void __thiscall UDS_VM_GuildMarkSlot::InitViewModel(UDS_VM_GuildMarkSlot *this)

{
  return;
}

// OnEventMouseButtonDown @ 14be981f0

void __thiscall
UDS_VM_GuildMarkSlot::OnEventMouseButtonDown
          (UDS_VM_GuildMarkSlot *this,FDS_WidgetPointerEventField *param_1)

{
  FName FVar1;
  int iVar2;
  UDS_GuildEvent *pUVar3;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if (this->IsSelected != true) {
    this->IsSelected = true;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pUVar3 = UDS_GuildEvent::GetEvent();
  if (pUVar3 != (UDS_GuildEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast(&pUVar3->SelectedGuildMarkSlotDelegate,this->TableID);
    return;
  }
  return;
}

// OnEventMouseEnter @ 14be98390

void __thiscall
UDS_VM_GuildMarkSlot::OnEventMouseEnter
          (UDS_VM_GuildMarkSlot *this,FDS_WidgetPointerEventField *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res8;
  FName local_18;
  int local_10;
  
  iVar1 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::IsHover.FieldName;
  if (this->IsSelected == true) {
    if (this->IsHover != false) {
      this->IsHover = false;
      local_10 = iVar1;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::IsSelectHover.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::IsSelectHover.FieldName;
    if (this->IsSelectHover == true) goto LAB_14be98460;
    this->IsSelectHover = true;
  }
  else {
    if (this->IsHover != true) {
      this->IsHover = true;
      local_10 = iVar1;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar1 = FFieldNotificationClassDescriptor::IsSelectHover.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::IsSelectHover.FieldName;
    if (this->IsSelectHover == false) goto LAB_14be98460;
    this->IsSelectHover = false;
  }
  local_18 = FVar3;
  local_10 = iVar1;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
LAB_14be98460:
  pFVar2 = ::FName::FName(&local_res8,"Hover_Ani");
  (this->HoverAnimationEvent).AnimationName = *pFVar2;
  (this->HoverAnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::HoverAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HoverAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnEventMouseLeave @ 14be985a0

void __thiscall
UDS_VM_GuildMarkSlot::OnEventMouseLeave
          (UDS_VM_GuildMarkSlot *this,FDS_WidgetPointerEventField *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::IsSelectHover.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsSelectHover.FieldName;
  local_10 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsHover.FieldName;
  if (this->IsSelected == true) {
    if (this->IsSelectHover != false) {
      this->IsSelectHover = false;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_10 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsHover.FieldName;
    if (this->IsHover != false) {
      this->IsHover = false;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  else if (this->IsHover != false) {
    this->IsHover = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    return;
  }
  return;
}

// OnHoverAnimation @ 14be99640

void __thiscall UDS_VM_GuildMarkSlot::OnHoverAnimation(UDS_VM_GuildMarkSlot *this)

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

// OnSelectedMarkSlotEvent @ 14be9d030

void __thiscall
UDS_VM_GuildMarkSlot::OnSelectedMarkSlotEvent(UDS_VM_GuildMarkSlot *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  bVar1 = this->TableID == param_1;
  if (this->IsSelected != bVar1) {
    this->IsSelected = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14be9ff80

void __thiscall
UDS_VM_GuildMarkSlot::OnSetViewModel
          (UDS_VM_GuildMarkSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  FDS_GuildMarkTableRow *this_00;
  FDS_ResourceImageTableRow *this_01;
  FFieldId local_68;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_GuildMarkSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_GuildMarkSlot>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_GuildMarkSlot *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_GuildMarkSlot *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = (local_28.Object)->TableID;
    this->TableID = iVar1;
    this_00 = FDS_GuildMarkTableRow::GetRef((longlong)iVar1,true);
    bVar5 = FDS_GuildMarkTableRow::IsValid(this_00);
    if (bVar5) {
      this_01 = FDS_ResourceImageTableRow::GetRef(this_00->ID_ResourceImage,true);
      bVar5 = FDS_ResourceImageTableRow::IsValid(this_01);
      if (bVar5) {
        local_68.BitNumber = FFieldNotificationClassDescriptor::MarkResourcePath.BitNumber;
        local_68.FieldName = FFieldNotificationClassDescriptor::MarkResourcePath.FieldName;
        UMVVMViewModelBase::SetPropertyValue<FSoftObjectPath,FSoftObjectPath>
                  ((UMVVMViewModelBase *)this,&this->MarkResourcePath,&this_01->IconPath,&local_68);
      }
    }
    iVar1 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
    if (this->IsSelected != (local_28.Object)->IsSelected) {
      this->IsSelected = (local_28.Object)->IsSelected;
      local_50 = iVar1;
      local_58 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    iVar1 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IsHover.FieldName;
    if (this->IsHover != false) {
      this->IsHover = false;
      local_40 = iVar1;
      local_48 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar1 = FFieldNotificationClassDescriptor::IsSelectHover.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IsSelectHover.FieldName;
    if (this->IsSelectHover != false) {
      this->IsSelectHover = false;
      local_30 = iVar1;
      local_38 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsHover @ 14beb1410

void __thiscall UDS_VM_GuildMarkSlot::SetIsHover(UDS_VM_GuildMarkSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsHover.FieldName;
  if (this->IsHover != param_1) {
    this->IsHover = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsSelectHover @ 14beb1a50

void __thiscall UDS_VM_GuildMarkSlot::SetIsSelectHover(UDS_VM_GuildMarkSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectHover.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectHover.FieldName;
  if (this->IsSelectHover != param_1) {
    this->IsSelectHover = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsSelected @ 14beb1b80

void __thiscall UDS_VM_GuildMarkSlot::SetIsSelected(UDS_VM_GuildMarkSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if (this->IsSelected != param_1) {
    this->IsSelected = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMarkResourcePath @ 14beb28e0

void __thiscall
UDS_VM_GuildMarkSlot::SetMarkResourcePath(UDS_VM_GuildMarkSlot *this,FSoftObjectPath *param_1)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::MarkResourcePath.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::MarkResourcePath.BitNumber;
  UMVVMViewModelBase::SetPropertyValue<FSoftObjectPath,FSoftObjectPath>
            ((UMVVMViewModelBase *)this,&this->MarkResourcePath,param_1,local_18);
  return;
}

// UnbindModel @ 14bebc080

void __thiscall UDS_VM_GuildMarkSlot::UnbindModel(UDS_VM_GuildMarkSlot *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkSlotDelegate,this);
    return;
  }
  return;
}

