// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 71

// SetEventMouseEnter_WrapperImpl @ 14b71a720

void __cdecl UDS_VM_W_CharacterSlot::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  UDS_InputEvent *pUVar2;
  bool abStackX_8 [8];
  EDS_InputKeyGroupType aEStackX_18 [4];
  int aiStackX_20 [2];
  
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    abStackX_8[0] = true;
    aEStackX_18[0] = ContentsTabFrame;
    aiStackX_20[0] = 2;
    FDS_EventDelegate<enum_EDS_InputKeyGroupType_const_&,int_const_&,bool_const_&>::Broadcast
              (&pUVar2->OnInputKeyAddRemoveEvent,aEStackX_18,aiStackX_20,abStackX_8);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x5e0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))(plVar1,param_2);
  }
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b71a730

void __cdecl UDS_VM_W_CharacterSlot::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  UDS_InputEvent *pUVar2;
  bool abStackX_8 [8];
  EDS_InputKeyGroupType aEStackX_18 [4];
  int aiStackX_20 [2];
  
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    abStackX_8[0] = false;
    aEStackX_18[0] = ContentsTabFrame;
    aiStackX_20[0] = 2;
    FDS_EventDelegate<enum_EDS_InputKeyGroupType_const_&,int_const_&,bool_const_&>::Broadcast
              (&pUVar2->OnInputKeyAddRemoveEvent,aEStackX_18,aiStackX_20,abStackX_8);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x5e0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x368))(plVar1,param_2);
  }
  return;
}

// SetEventOnDragDetected_WrapperImpl @ 14b71a740

void __cdecl UDS_VM_W_CharacterSlot::SetEventOnDragDetected_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong **)((longlong)param_1 + 0x5e0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfbcdcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x5e0) + 0x378))();
    return;
  }
  return;
}

// SetEventOnDrop_WrapperImpl @ 14b71a750

void __cdecl UDS_VM_W_CharacterSlot::SetEventOnDrop_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong **)((longlong)param_1 + 0x5e0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfbcdef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x5e0) + 0x380))();
    return;
  }
  return;
}

// SetEventOnDragCancelled_WrapperImpl @ 14b71a760

void __cdecl
UDS_VM_W_CharacterSlot::SetEventOnDragCancelled_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong **)((longlong)param_1 + 0x5e0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfbcdaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x5e0) + 0x388))();
    return;
  }
  return;
}

// SetEventMouseButtonUp_WrapperImpl @ 14b71a770

void __cdecl UDS_VM_W_CharacterSlot::SetEventMouseButtonUp_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong **)((longlong)param_1 + 0x5e0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfbcbef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x5e0) + 0x370))();
    return;
  }
  return;
}

// SetClickBtnEvent_WrapperImpl @ 14b71a780

void __cdecl UDS_VM_W_CharacterSlot::SetClickBtnEvent_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  
  if (*(longlong **)((longlong)param_1 + 0x5e0) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)((longlong)param_1 + 0x5e0) + 0x328))();
    if (cVar1 == '\x01') {
      UDS_CharacterUIEvent::GetEvent();
      return;
    }
  }
  return;
}

// SetClickAddBtnEvent_WrapperImpl @ 14b71a790

void __cdecl UDS_VM_W_CharacterSlot::SetClickAddBtnEvent_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong **)((longlong)param_1 + 0x5e0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfb860f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x5e0) + 0x350))();
    return;
  }
  return;
}

// SetClickChangeBtnEvent_WrapperImpl @ 14b71a7a0

void __cdecl UDS_VM_W_CharacterSlot::SetClickChangeBtnEvent_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong **)((longlong)param_1 + 0x5e0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfb8b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x5e0) + 0x358))();
    return;
  }
  return;
}

// StaticClass @ 14b71a7b0

UClass * __cdecl UDS_VM_W_CharacterSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterSlot,0x680,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_CharacterSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterSlot.InnerSingleton;
}

// UDS_VM_W_CharacterSlot @ 14b71ee60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_CharacterSlot * __thiscall
UDS_VM_W_CharacterSlot::UDS_VM_W_CharacterSlot(UDS_VM_W_CharacterSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterSlot__6B_;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  *(undefined1 *)&(this->EventOnDragDetected)._padding_ = 0;
  (this->EventOnDragDetected).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  (this->EventOnDragDetected).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDragCancelled)._padding_ = 0;
  (this->EventOnDragCancelled).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  (this->EventOnDragCancelled).DragCanceled = false;
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->ClickBtnEvent)._padding_ = '\0';
  (this->ClickBtnEvent).bIsCustomSelected = false;
  (this->ClickBtnEvent).bIsLacked = false;
  (this->ClickBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBtnEvent).Delegate.field_0x10 = 0;
  (this->ClickAddBtnEvent)._padding_ = '\0';
  (this->ClickAddBtnEvent).bIsCustomSelected = false;
  (this->ClickAddBtnEvent).bIsLacked = false;
  (this->ClickAddBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAddBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickAddBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAddBtnEvent).Delegate.field_0x10 = 0;
  (this->ClickChangeBtnEvent)._padding_ = '\0';
  (this->ClickChangeBtnEvent).bIsCustomSelected = false;
  (this->ClickChangeBtnEvent).bIsLacked = false;
  (this->ClickChangeBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChangeBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickChangeBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChangeBtnEvent).Delegate.field_0x10 = 0;
  (this->Implementation).field0_0x0.DebugPtr = (UDS_CharSlotImplBase *)0x0;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SlotIndex = 0;
  *(undefined8 *)&this->OnPartyCharacterSwitch = 0;
  *(undefined8 *)&(this->OnPartyCharacterSwitch).field_0x8 = 0;
  *(undefined4 *)&(this->OnPartyCharacterSwitch).field_0x10 = 0;
  *(undefined8 *)&this->OnDropModeChangeDelegate = 0;
  *(undefined8 *)&(this->OnDropModeChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDropModeChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonUpDelegate = 0;
  *(undefined8 *)&(this->OnButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnAddBtnClickDelegate = 0;
  *(undefined8 *)&(this->OnAddBtnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnAddBtnClickDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeBtnClickDelegate = 0;
  *(undefined8 *)&(this->OnChangeBtnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnChangeBtnClickDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_W_CharacterSlot @ 14b71f060

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_CharacterSlot * __thiscall
UDS_VM_W_CharacterSlot::UDS_VM_W_CharacterSlot
          (UDS_VM_W_CharacterSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterSlot__6B_;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  *(undefined1 *)&(this->EventOnDragDetected)._padding_ = 0;
  (this->EventOnDragDetected).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  (this->EventOnDragDetected).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDragCancelled)._padding_ = 0;
  (this->EventOnDragCancelled).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  (this->EventOnDragCancelled).DragCanceled = false;
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->ClickBtnEvent)._padding_ = '\0';
  (this->ClickBtnEvent).bIsCustomSelected = false;
  (this->ClickBtnEvent).bIsLacked = false;
  (this->ClickBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBtnEvent).Delegate.field_0x10 = 0;
  (this->ClickAddBtnEvent)._padding_ = '\0';
  (this->ClickAddBtnEvent).bIsCustomSelected = false;
  (this->ClickAddBtnEvent).bIsLacked = false;
  (this->ClickAddBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAddBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickAddBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAddBtnEvent).Delegate.field_0x10 = 0;
  (this->ClickChangeBtnEvent)._padding_ = '\0';
  (this->ClickChangeBtnEvent).bIsCustomSelected = false;
  (this->ClickChangeBtnEvent).bIsLacked = false;
  (this->ClickChangeBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChangeBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickChangeBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChangeBtnEvent).Delegate.field_0x10 = 0;
  (this->Implementation).field0_0x0.DebugPtr = (UDS_CharSlotImplBase *)0x0;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SlotIndex = 0;
  *(undefined8 *)&this->OnPartyCharacterSwitch = 0;
  *(undefined8 *)&(this->OnPartyCharacterSwitch).field_0x8 = 0;
  *(undefined4 *)&(this->OnPartyCharacterSwitch).field_0x10 = 0;
  *(undefined8 *)&this->OnDropModeChangeDelegate = 0;
  *(undefined8 *)&(this->OnDropModeChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDropModeChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonUpDelegate = 0;
  *(undefined8 *)&(this->OnButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnAddBtnClickDelegate = 0;
  *(undefined8 *)&(this->OnAddBtnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnAddBtnClickDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeBtnClickDelegate = 0;
  *(undefined8 *)&(this->OnChangeBtnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnChangeBtnClickDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_W_CharacterSlot @ 14b71fee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_CharacterSlot::~UDS_VM_W_CharacterSlot(UDS_VM_W_CharacterSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnChangeBtnClickDelegate);
  pvVar1 = *(void **)&(this->OnChangeBtnClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeBtnClickDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAddBtnClickDelegate);
  pvVar1 = *(void **)&(this->OnAddBtnClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddBtnClickDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnButtonUpDelegate);
  pvVar1 = *(void **)&(this->OnButtonUpDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonUpDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDropModeChangeDelegate);
  pvVar1 = *(void **)&(this->OnDropModeChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDropModeChangeDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPartyCharacterSwitch);
  pvVar1 = *(void **)&(this->OnPartyCharacterSwitch).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPartyCharacterSwitch);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChangeBtnEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickChangeBtnEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChangeBtnEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAddBtnEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickAddBtnEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAddBtnEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickBtnEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickBtnEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickBtnEvent).Delegate);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDrop).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b721330

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_CharacterSlot::GetFieldNotificationDescriptor(UDS_VM_W_CharacterSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_CharacterSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b721a60

UClass * __cdecl UDS_VM_W_CharacterSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterSlot,0x680,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_CharacterSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_CharacterSlot @ 14b721ca0

void __cdecl UDS_VM_W_CharacterSlot::StaticRegisterNativesUDS_VM_W_CharacterSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_CharacterSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddShiftSwitcherIndex @ 14b722820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execAddShiftSwitcherIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = AddShiftSwitcherIndex((UDS_VM_W_CharacterSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execAddShiftSwitcherVisibility @ 14b722860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execAddShiftSwitcherVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = AddShiftSwitcherVisibility((UDS_VM_W_CharacterSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execAddShiftVisibility @ 14b7228a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execAddShiftVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = AddShiftVisibility((UDS_VM_W_CharacterSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execButtonVisibility @ 14b7228e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execButtonVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = ButtonVisibility((UDS_VM_W_CharacterSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execCharElementIconID @ 14b722920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execCharElementIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = CharElementIconID((UDS_VM_W_CharacterSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execCharEvolution @ 14b722960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execCharEvolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = CharEvolution((UDS_VM_W_CharacterSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execCharIconID @ 14b7229a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_CharacterSlot::execCharIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = CharIconID((UDS_VM_W_CharacterSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execCharLevel @ 14b7229e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_CharacterSlot::execCharLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = CharLevel((UDS_VM_W_CharacterSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execCharSlotInfo @ 14b722a20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execCharSlotInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_SlotInfo *pFVar1;
  FDS_SlotInfo local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = CharSlotInfo((UDS_VM_W_CharacterSlot *)param_1,&local_18);
  if (param_3 != pFVar1) {
    *(FDS_SlotInfoBase **)param_3 = (pFVar1->SlotInfo).Object;
    (pFVar1->SlotInfo).Object = (FDS_SlotInfoBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &(pFVar1->SlotInfo).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SlotInfo.SharedReferenceCount.ReferenceController);
  return;
}

// execDimmedSwitcherIndex @ 14b722a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execDimmedSwitcherIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = DimmedSwitcherIndex((UDS_VM_W_CharacterSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execEquipIconID @ 14b722ac0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_CharacterSlot::execEquipIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = EquipIconID((UDS_VM_W_CharacterSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execEquipIconVisibility @ 14b722b00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execEquipIconVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = EquipIconVisibility((UDS_VM_W_CharacterSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execEvolutionVisibility @ 14b722b40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execEvolutionVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = EvolutionVisibility((UDS_VM_W_CharacterSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execIsHaveChar @ 14b722c40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_CharacterSlot::execIsHaveChar(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsHaveChar((UDS_VM_W_CharacterSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsSelected @ 14b722cc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_CharacterSlot::execIsSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSelected((UDS_VM_W_CharacterSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execLevelVisibility @ 14b722d00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execLevelVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = LevelVisibility((UDS_VM_W_CharacterSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execOnChangedCharEvolution @ 14b722e60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execOnChangedCharEvolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedCharEvolution((UDS_VM_W_CharacterSlot *)param_1,piVar2);
  return;
}

// execOnChangedCharLevel @ 14b722f00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execOnChangedCharLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedCharLevel((UDS_VM_W_CharacterSlot *)param_1,piVar2);
  return;
}

// execQuickChangeNumIconID @ 14b723170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execQuickChangeNumIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = QuickChangeNumIconID((UDS_VM_W_CharacterSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execQuickChangeNumVisibility @ 14b7231b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_CharacterSlot::execQuickChangeNumVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = QuickChangeNumVisibility((UDS_VM_W_CharacterSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// AddShiftSwitcherIndex @ 14bf9b290

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_CharacterSlot::AddShiftSwitcherIndex(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  int iVar2;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bf9b2a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(pUVar1->_padding_ + 0x2e0))();
  return iVar2;
}

// AddShiftSwitcherVisibility @ 14bf9b2b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESlateVisibility __thiscall
UDS_VM_W_CharacterSlot::AddShiftSwitcherVisibility(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  char cVar2;
  ESlateVisibility EVar3;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return Collapsed;
  }
  cVar2 = (**(code **)(pUVar1->_padding_ + 0x338))();
  EVar3 = Collapsed;
  if (cVar2 == '\x01') {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// AddShiftVisibility @ 14bf9b2f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESlateVisibility __thiscall UDS_VM_W_CharacterSlot::AddShiftVisibility(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  char cVar2;
  ESlateVisibility EVar3;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return Collapsed;
  }
  cVar2 = (**(code **)(pUVar1->_padding_ + 0x338))();
  EVar3 = Collapsed;
  if (cVar2 == '\x01') {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// BindModel @ 14bf9c9f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_CharacterSlot::BindModel(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  code *pcVar2;
  FWeakObjectPtr local_res8;
  UDS_VM_W_CharacterSlot *local_res10;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x340);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (*pcVar2)(pUVar1,local_res8);
  }
  return;
}

// ButtonVisibility @ 14bf9d300

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESlateVisibility __thiscall UDS_VM_W_CharacterSlot::ButtonVisibility(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  char cVar2;
  ESlateVisibility EVar3;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return Collapsed;
  }
  cVar2 = (**(code **)(pUVar1->_padding_ + 0x330))();
  EVar3 = Collapsed;
  if (cVar2 == '\x01') {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// CharElementIconID @ 14bf9d3b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_CharacterSlot::CharElementIconID(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  int iVar2;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bf9d3c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(pUVar1->_padding_ + 0x2e8))();
  return iVar2;
}

// CharEvolution @ 14bf9d3d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_CharacterSlot::CharEvolution(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  int iVar2;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bf9d3e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(pUVar1->_padding_ + 0x2d0))();
  return iVar2;
}

// CharIconID @ 14bf9d3f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_CharacterSlot::CharIconID(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  int iVar2;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bf9d402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(pUVar1->_padding_ + 0x2c0))();
  return iVar2;
}

// CharLevel @ 14bf9d410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_CharacterSlot::CharLevel(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  int iVar2;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bf9d422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(pUVar1->_padding_ + 0x2c8))();
  return iVar2;
}

// CharSlotInfo @ 14bf9d430

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_SlotInfo * __thiscall
UDS_VM_W_CharacterSlot::CharSlotInfo
          (UDS_VM_W_CharacterSlot *this,FDS_SlotInfo *__return_storage_ptr__)

{
  UDS_CharSlotImplBase *this_00;
  
  this_00 = (this->Implementation).field0_0x0.DebugPtr;
  if (this_00 == (UDS_CharSlotImplBase *)0x0) {
    (__return_storage_ptr__->SlotInfo).Object = (FDS_SlotInfoBase *)0x0;
    (__return_storage_ptr__->SlotInfo).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  UDS_CharSlotImplBase::GetSlotInfo(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DimmedSwitcherIndex @ 14bfa54a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_CharacterSlot::DimmedSwitcherIndex(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  char cVar2;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return 0;
  }
  cVar2 = (**(code **)(pUVar1->_padding_ + 0x310))();
  return (int)(cVar2 != '\0');
}

// EquipIconID @ 14bfa56e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_CharacterSlot::EquipIconID(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  int iVar2;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bfa56f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(pUVar1->_padding_ + 0x2d8))();
  return iVar2;
}

// EquipIconVisibility @ 14bfa5700

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESlateVisibility __thiscall
UDS_VM_W_CharacterSlot::EquipIconVisibility(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  char cVar2;
  FDS_SlotCharacterCardStateTableRow *pFVar3;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_CharSlotImplBase *)0x0) &&
     (cVar2 = (**(code **)(pUVar1->_padding_ + 0x2f8))(), cVar2 == '\x01')) {
    cVar2 = (**(code **)(((this->Implementation).field0_0x0.DebugPtr)->_padding_ + 0x300))();
    if (cVar2 == '\x01') {
      pFVar3 = FDS_SlotCharacterCardStateTableRow::Get((ulonglong)this->SlotType,true);
      if (pFVar3 == (FDS_SlotCharacterCardStateTableRow *)0x0) {
        return Collapsed;
      }
      cVar2 = pFVar3->IsCurrentChar;
    }
    else {
      pFVar3 = FDS_SlotCharacterCardStateTableRow::Get((ulonglong)this->SlotType,true);
      if (pFVar3 == (FDS_SlotCharacterCardStateTableRow *)0x0) {
        return Collapsed;
      }
      cVar2 = pFVar3->IsReserveChar;
    }
    if (cVar2 != '\0') {
      return SelfHitTestInvisible;
    }
  }
  return Collapsed;
}

// EvolutionVisibility @ 14bfa5770

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESlateVisibility __thiscall
UDS_VM_W_CharacterSlot::EvolutionVisibility(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  int iVar2;
  FDS_SlotCharacterCardStateTableRow *pFVar3;
  ESlateVisibility EVar4;
  
  pFVar3 = FDS_SlotCharacterCardStateTableRow::Get((ulonglong)this->SlotType,true);
  if (((pFVar3 != (FDS_SlotCharacterCardStateTableRow *)0x0) && (pFVar3->IsEvolutionLevel != false))
     && (pUVar1 = (this->Implementation).field0_0x0.DebugPtr, pUVar1 != (UDS_CharSlotImplBase *)0x0)
     ) {
    iVar2 = (**(code **)(pUVar1->_padding_ + 0x2d0))();
    EVar4 = Collapsed;
    if (0 < iVar2) {
      EVar4 = SelfHitTestInvisible;
    }
    return EVar4;
  }
  return Collapsed;
}

// IsHaveChar @ 14bfb2fe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_CharacterSlot::IsHaveChar(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  char cVar2;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return false;
  }
  cVar2 = (**(code **)(pUVar1->_padding_ + 0x2f0))();
  return cVar2 == '\0';
}

// IsSelected @ 14bfb3ac0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_CharacterSlot::IsSelected(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CharSlotImplBase *)0x0) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bfb3ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(pUVar1->_padding_ + 0x318))();
  return (bool)uVar2;
}

// LevelVisibility @ 14bfb3f30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESlateVisibility __thiscall UDS_VM_W_CharacterSlot::LevelVisibility(UDS_VM_W_CharacterSlot *this)

{
  ESlateVisibility EVar1;
  FDS_SlotCharacterCardStateTableRow *pFVar2;
  
  pFVar2 = FDS_SlotCharacterCardStateTableRow::Get((ulonglong)this->SlotType,true);
  if (pFVar2 != (FDS_SlotCharacterCardStateTableRow *)0x0) {
    EVar1 = SelfHitTestInvisible;
    if (pFVar2->IsCharLevel == false) {
      EVar1 = Collapsed;
    }
    return EVar1;
  }
  return Collapsed;
}

// OnChangedCharEvolution @ 14bfb62c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnChangedCharEvolution(UDS_VM_W_CharacterSlot *this,int *param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::CharEvolution.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharEvolution.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EvolutionVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EvolutionVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// OnChangedCharLevel @ 14bfb6330

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnChangedCharLevel(UDS_VM_W_CharacterSlot *this,int *param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::CharLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharLevel.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::LevelVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LevelVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// OnClickAddBtnEvent @ 14bfb8600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnClickAddBtnEvent
          (UDS_VM_W_CharacterSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_CharSlotImplBase *pUVar1;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfb860f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x350))();
    return;
  }
  return;
}

// OnClickBtn @ 14bfb87a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnClickBtn(UDS_VM_W_CharacterSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_CharSlotImplBase *pUVar1;
  char cVar2;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x328))();
    if (cVar2 == '\x01') {
      UDS_CharacterUIEvent::GetEvent();
      return;
    }
  }
  return;
}

// OnClickChangeBtnEvent @ 14bfb8b50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnClickChangeBtnEvent
          (UDS_VM_W_CharacterSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_CharSlotImplBase *pUVar1;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfb8b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x358))();
    return;
  }
  return;
}

// OnEventMouseButtonUp @ 14bfbcbe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnEventMouseButtonUp
          (UDS_VM_W_CharacterSlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_CharSlotImplBase *pUVar1;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfbcbef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x370))();
    return;
  }
  return;
}

// OnEventMouseEnter @ 14bfbcc50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnEventMouseEnter
          (UDS_VM_W_CharacterSlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_CharSlotImplBase *pUVar1;
  UDS_InputEvent *pUVar2;
  bool local_res8 [8];
  EDS_InputKeyGroupType local_res18 [4];
  int local_res20 [2];
  
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    local_res8[0] = true;
    local_res18[0] = ContentsTabFrame;
    local_res20[0] = 2;
    FDS_EventDelegate<enum_EDS_InputKeyGroupType_const_&,int_const_&,bool_const_&>::Broadcast
              (&pUVar2->OnInputKeyAddRemoveEvent,local_res18,local_res20,local_res8);
  }
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x360))(pUVar1,param_1);
  }
  return;
}

// OnEventMouseLeave @ 14bfbcd20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnEventMouseLeave
          (UDS_VM_W_CharacterSlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_CharSlotImplBase *pUVar1;
  UDS_InputEvent *pUVar2;
  bool local_res8 [8];
  EDS_InputKeyGroupType local_res18 [4];
  int local_res20 [2];
  
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    local_res8[0] = false;
    local_res18[0] = ContentsTabFrame;
    local_res20[0] = 2;
    FDS_EventDelegate<enum_EDS_InputKeyGroupType_const_&,int_const_&,bool_const_&>::Broadcast
              (&pUVar2->OnInputKeyAddRemoveEvent,local_res18,local_res20,local_res8);
  }
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x368))(pUVar1,param_1);
  }
  return;
}

// OnEventOnDragCanceled @ 14bfbcda0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnEventOnDragCanceled
          (UDS_VM_W_CharacterSlot *this,FDS_DragDropEventField *param_1)

{
  UDS_CharSlotImplBase *pUVar1;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfbcdaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x388))();
    return;
  }
  return;
}

// OnEventOnDragDetected @ 14bfbcdc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnEventOnDragDetected
          (UDS_VM_W_CharacterSlot *this,FDS_DragDropEventField *param_1)

{
  UDS_CharSlotImplBase *pUVar1;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfbcdcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x378))();
    return;
  }
  return;
}

// OnEventOnDrop @ 14bfbcde0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnEventOnDrop(UDS_VM_W_CharacterSlot *this,FDS_DragDropEventField *param_1)

{
  UDS_CharSlotImplBase *pUVar1;
  
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bfbcdef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x380))();
    return;
  }
  return;
}

// OnSetViewModel @ 14bfc7f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_CharacterSlot::OnSetViewModel
          (UDS_VM_W_CharacterSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_SlotCharCardStateType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_CharSlotImplBase *pUVar3;
  code *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  UClass *pUVar7;
  UDS_CharSlotImplByCharInfoData *pUVar8;
  longlong *plVar9;
  undefined1 auStack_168 [32];
  TSharedPtr<FDS_ViewModelContext_CharSlotBase,1> local_148;
  TSharedPtr<FDS_ViewModelContext,1> local_138;
  FDS_ViewModelContext *local_128;
  TReferenceControllerBase<1> *local_120;
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_138.Object = param_1->Object;
  local_138.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharSlotBase>(&local_148,&local_138);
  if (local_148.Object == (FDS_ViewModelContext_CharSlotBase *)0x0) goto LAB_14bfc811c;
  if (local_148.Object == (FDS_ViewModelContext_CharSlotBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar1 = (local_148.Object)->SlotType;
  this->SlotType = EVar1;
  if (EVar1 == MyCharacterList) {
LAB_14bfc80b4:
    pUVar8 = NewObject<UDS_CharSlotImplByCharInfoData>((UObject *)this);
LAB_14bfc80bf:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_CharSlotImplByCharInfoData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->Implementation).field0_0x0.DebugPtr = (UDS_CharSlotImplBase *)pUVar8;
  }
  else {
    if (EVar1 == RaidParty) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = Z_Construct_UClass_UDS_CharSlotImplByRaidPartyData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar7);
      local_98._8_8_ = this;
      pUVar8 = (UDS_CharSlotImplByCharInfoData *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        puVar5 = local_98;
        local_118._104_8_ = local_98._104_8_;
LAB_14bfc8046:
        plVar9 = (longlong *)(puVar5 + 0x50);
        if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_118._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      goto LAB_14bfc80bf;
    }
    if (EVar1 == QuickChangerOneCharSelect) goto LAB_14bfc80b4;
    if (EVar1 == GachaResult) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = Z_Construct_UClass_UDS_CharSlotGachaReward_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_118,pUVar7);
      local_118._8_8_ = this;
      pUVar8 = (UDS_CharSlotImplByCharInfoData *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
      if (local_118._64_8_ != 0) {
        puVar5 = local_118;
        goto LAB_14bfc8046;
      }
      goto LAB_14bfc80bf;
    }
  }
  pUVar3 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_CharSlotImplBase *)0x0) {
    pcVar4 = *(code **)(pUVar3->_padding_ + 0x2b0);
    local_128 = param_1->Object;
    local_120 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_120 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_120->SharedReferenceCount = (atomic<int>)((int)local_120->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar4)(pUVar3,&local_128);
  }
  RefreshAll(this);
LAB_14bfc811c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateSelectCharacterSlot @ 14bfd2100

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_CharacterSlot::OnUpdateSelectCharacterSlot(UDS_VM_W_CharacterSlot *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnViewDestruct @ 14bfd2190

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_CharacterSlot::OnViewDestruct(UDS_VM_W_CharacterSlot *this)

{
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res10[0] = 0.0;
  local_res18[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,CharacterTooltip,local_res18,local_res10);
  return;
}

// QuickChangeNumIconID @ 14bfd33a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_CharacterSlot::QuickChangeNumIconID(UDS_VM_W_CharacterSlot *this)

{
  return 0;
}

// QuickChangeNumVisibility @ 14bfd33b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESlateVisibility __thiscall
UDS_VM_W_CharacterSlot::QuickChangeNumVisibility(UDS_VM_W_CharacterSlot *this)

{
  char cVar1;
  FDS_SlotCharacterCardStateTableRow *pFVar2;
  ESlateVisibility EVar3;
  
  pFVar2 = FDS_SlotCharacterCardStateTableRow::Get((ulonglong)this->SlotType,true);
  if ((pFVar2 != (FDS_SlotCharacterCardStateTableRow *)0x0) && (pFVar2->IsFormationNum != false)) {
    cVar1 = (**(code **)(((this->Implementation).field0_0x0.DebugPtr)->_padding_ + 0x308))();
    EVar3 = Collapsed;
    if (cVar1 != '\0') {
      EVar3 = SelfHitTestInvisible;
    }
    return EVar3;
  }
  return Collapsed;
}

// RefreshAll @ 14bfd3e90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_CharacterSlot::RefreshAll(UDS_VM_W_CharacterSlot *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::CharIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharIconID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::CharElementIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharElementIconID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::CharLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharLevel.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::CharEvolution.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharEvolution.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EquipIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EquipIconID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::QuickChangeNumIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::QuickChangeNumIconID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::DimmedSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DimmedSwitcherIndex.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::AddShiftSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AddShiftSwitcherIndex.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::LevelVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LevelVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EvolutionVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EvolutionVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EquipIconVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EquipIconVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::QuickChangeNumVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::QuickChangeNumVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ButtonVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ButtonVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::AddShiftVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AddShiftVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::AddShiftSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AddShiftSwitcherIndex.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::AddShiftSwitcherVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AddShiftSwitcherVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::CharSlotInfo.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharSlotInfo.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsHaveChar.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsHaveChar.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// UnbindModel @ 14bfdfca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_CharacterSlot::UnbindModel(UDS_VM_W_CharacterSlot *this)

{
  UDS_CharSlotImplBase *pUVar1;
  code *pcVar2;
  FWeakObjectPtr local_res8;
  UDS_VM_W_CharacterSlot *local_res10;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = (this->Implementation).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CharSlotImplBase *)0x0) {
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x348);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (*pcVar2)(pUVar1,local_res8);
  }
  return;
}

