// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetEventMouseEnter_WrapperImpl @ 14b65a940

void __cdecl UDS_VM_GuildMarkColorSlot::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

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
    if (*(char *)((longlong)param_1 + 0xa2) == '\x01') goto LAB_14be98330;
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
    if (*(char *)((longlong)param_1 + 0xa2) == '\0') goto LAB_14be98330;
    *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  }
  FStack_18 = FVar3;
  iStack_10 = iVar1;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
LAB_14be98330:
  pFVar2 = ::FName::FName(&FStackX_8,"Hover_Ani");
  *(FName *)((longlong)param_1 + 0xb8) = *pFVar2;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 2;
  iStack_10 = FFieldNotificationClassDescriptor::HoverAnimationEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::HoverAnimationEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b65a950

void __cdecl UDS_VM_GuildMarkColorSlot::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

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

// SetEventMouseButtonDown_WrapperImpl @ 14b65a960

void __cdecl
UDS_VM_GuildMarkColorSlot::SetEventMouseButtonDown_WrapperImpl(void *param_1,void *param_2)

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
              (&pUVar3->SelectedGuildMarkColorSlotDelegate,*(int *)((longlong)param_1 + 0x418));
    return;
  }
  return;
}

// StaticClass @ 14b65a970

UClass * __cdecl UDS_VM_GuildMarkColorSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMarkColorSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMarkColorSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildMarkColorSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMarkColorSlot,0x420,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_GuildMarkColorSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMarkColorSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMarkColorSlot.InnerSingleton;
}

// UDS_VM_GuildMarkColorSlot @ 14b65e830

UDS_VM_GuildMarkColorSlot * __thiscall
UDS_VM_GuildMarkColorSlot::UDS_VM_GuildMarkColorSlot
          (UDS_VM_GuildMarkColorSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->HoverAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->HoverAnimationEvent).AnimationName.Number = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMarkColorSlot__6B_;
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

// UDS_VM_GuildMarkColorSlot @ 14b65e8f0

UDS_VM_GuildMarkColorSlot * __thiscall
UDS_VM_GuildMarkColorSlot::UDS_VM_GuildMarkColorSlot
          (UDS_VM_GuildMarkColorSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->HoverAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->HoverAnimationEvent).AnimationName.Number = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMarkColorSlot__6B_;
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

// ~UDS_VM_GuildMarkColorSlot @ 14b661b10

void __thiscall
UDS_VM_GuildMarkColorSlot::~UDS_VM_GuildMarkColorSlot(UDS_VM_GuildMarkColorSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMarkColorSlot__6B_;
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
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b664490

IClassDescriptor * __thiscall
UDS_VM_GuildMarkColorSlot::GetFieldNotificationDescriptor(UDS_VM_GuildMarkColorSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildMarkColorSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b664ba0

UClass * __cdecl UDS_VM_GuildMarkColorSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMarkColorSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMarkColorSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildMarkColorSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMarkColorSlot,0x420,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_GuildMarkColorSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMarkColorSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMarkColorSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildMarkColorSlot @ 14b665410

void __cdecl UDS_VM_GuildMarkColorSlot::StaticRegisterNativesUDS_VM_GuildMarkColorSlot(void)

{
  return;
}

// BindModel @ 14be75e10

void __thiscall UDS_VM_GuildMarkColorSlot::BindModel(UDS_VM_GuildMarkColorSlot *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkColorSlotDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildMarkColorSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkColorSlotDelegate,
               (UDS_VM_GuildMarkColorSlot *)&stack0x00000010,(pmf_1ae559ae *)this);
  }
  return;
}

// InitViewModel @ 14be8cc80

void __thiscall UDS_VM_GuildMarkColorSlot::InitViewModel(UDS_VM_GuildMarkColorSlot *this)

{
  return;
}

// OnEventMouseButtonDown @ 14be98180

void __thiscall
UDS_VM_GuildMarkColorSlot::OnEventMouseButtonDown
          (UDS_VM_GuildMarkColorSlot *this,FDS_WidgetPointerEventField *param_1)

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
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar3->SelectedGuildMarkColorSlotDelegate,this->TableID);
    return;
  }
  return;
}

// OnEventMouseEnter @ 14be98260

void __thiscall
UDS_VM_GuildMarkColorSlot::OnEventMouseEnter
          (UDS_VM_GuildMarkColorSlot *this,FDS_WidgetPointerEventField *param_1)

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
    if (this->IsSelectHover == true) goto LAB_14be98330;
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
    if (this->IsSelectHover == false) goto LAB_14be98330;
    this->IsSelectHover = false;
  }
  local_18 = FVar3;
  local_10 = iVar1;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
LAB_14be98330:
  pFVar2 = ::FName::FName(&local_res8,"Hover_Ani");
  (this->HoverAnimationEvent).AnimationName = *pFVar2;
  (this->HoverAnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::HoverAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HoverAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnEventMouseLeave @ 14be984c0

void __thiscall
UDS_VM_GuildMarkColorSlot::OnEventMouseLeave
          (UDS_VM_GuildMarkColorSlot *this,FDS_WidgetPointerEventField *param_1)

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

// OnHoverAnimation @ 14be995e0

void __thiscall UDS_VM_GuildMarkColorSlot::OnHoverAnimation(UDS_VM_GuildMarkColorSlot *this)

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

// OnSelectedMarkColorSlotEvent @ 14be9cec0

void __thiscall
UDS_VM_GuildMarkColorSlot::OnSelectedMarkColorSlotEvent(UDS_VM_GuildMarkColorSlot *this,int param_1)

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

// OnSetViewModel @ 14be9fce0

void __thiscall
UDS_VM_GuildMarkColorSlot::OnSetViewModel
          (UDS_VM_GuildMarkColorSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FDS_GuildMarkColorTableRow *this_00;
  FDS_ResourceColorTableRow *this_01;
  FDS_ViewModelContext_GuildMarkColorSlot *pFVar8;
  float fVar9;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_GuildMarkColorSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
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
  SafeCast<FDS_ViewModelContext_GuildMarkColorSlot>(&local_28,&local_18);
  pFVar8 = local_28.Object;
  if (local_28.Object != (FDS_ViewModelContext_GuildMarkColorSlot *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_GuildMarkColorSlot *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar3 = pFVar8->TableID;
    this->TableID = iVar3;
    this_00 = FDS_GuildMarkColorTableRow::GetRef((longlong)iVar3,true);
    bVar7 = FDS_GuildMarkColorTableRow::IsValid(this_00);
    if (bVar7) {
      this_01 = FDS_ResourceColorTableRow::GetRef((longlong)this_00->ID_ResourceColor,true);
      bVar7 = FDS_ResourceColorTableRow::IsValid(this_01);
      iVar3 = FFieldNotificationClassDescriptor::Color.BitNumber;
      FVar6 = FFieldNotificationClassDescriptor::Color.FieldName;
      if (bVar7) {
        fVar1 = FLinearColor::sRGBToLinearTable[(this_01->Color).field0_0x0._s_0.B];
        fVar2 = FLinearColor::sRGBToLinearTable[(this_01->Color).field0_0x0._s_0.G];
        fVar9 = (float)(this_01->Color).field0_0x0._s_0.A * __real_3b808081;
        if ((((FLinearColor::sRGBToLinearTable[(this_01->Color).field0_0x0._s_0.R] !=
               (this->Color).field0_0x0._s_0.R) || (fVar2 != (this->Color).field0_0x0._s_0.G)) ||
            (fVar1 != (this->Color).field0_0x0._s_0.B)) ||
           (fVar9 != (this->Color).field0_0x0._s_0.A)) {
          (this->Color).field0_0x0._s_0.R =
               FLinearColor::sRGBToLinearTable[(this_01->Color).field0_0x0._s_0.R];
          (this->Color).field0_0x0._s_0.G = fVar2;
          (this->Color).field0_0x0._s_0.B = fVar1;
          (this->Color).field0_0x0._s_0.A = fVar9;
          local_60 = iVar3;
          local_68 = FVar6;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
          pFVar8 = local_28.Object;
        }
      }
    }
    if (pFVar8 == (FDS_ViewModelContext_GuildMarkColorSlot *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar3 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
    if (this->IsSelected != pFVar8->IsSelected) {
      this->IsSelected = pFVar8->IsSelected;
      local_50 = iVar3;
      local_58 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    iVar3 = FFieldNotificationClassDescriptor::IsHover.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::IsHover.FieldName;
    if (this->IsHover != false) {
      this->IsHover = false;
      local_40 = iVar3;
      local_48 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar3 = FFieldNotificationClassDescriptor::IsSelectHover.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::IsSelectHover.FieldName;
    if (this->IsSelectHover != false) {
      this->IsSelectHover = false;
      local_30 = iVar3;
      local_38 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetColor @ 14beada90

void __thiscall
UDS_VM_GuildMarkColorSlot::SetColor(UDS_VM_GuildMarkColorSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->Color).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->Color).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->Color).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->Color).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::Color.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::Color.FieldName;
    (this->Color).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->Color).field0_0x0._s_0.G = fVar1;
    (this->Color).field0_0x0._s_0.B = fVar2;
    (this->Color).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsHover @ 14beb13c0

void __thiscall UDS_VM_GuildMarkColorSlot::SetIsHover(UDS_VM_GuildMarkColorSlot *this,bool param_1)

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

// SetIsSelectHover @ 14beb1a00

void __thiscall
UDS_VM_GuildMarkColorSlot::SetIsSelectHover(UDS_VM_GuildMarkColorSlot *this,bool param_1)

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

// SetIsSelected @ 14beb1b30

void __thiscall
UDS_VM_GuildMarkColorSlot::SetIsSelected(UDS_VM_GuildMarkColorSlot *this,bool param_1)

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

// UnbindModel @ 14bebc040

void __thiscall UDS_VM_GuildMarkColorSlot::UnbindModel(UDS_VM_GuildMarkColorSlot *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectedGuildMarkColorSlotDelegate,this);
    return;
  }
  return;
}

