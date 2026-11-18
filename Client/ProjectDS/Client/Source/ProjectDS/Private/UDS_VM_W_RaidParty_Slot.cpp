// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// SetSlotArrowVisibility_WrapperImpl @ 14b74a4b0

void __cdecl
UDS_VM_W_RaidParty_Slot::SetSlotArrowVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xd0) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::SlotArrowVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SlotArrowVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetEventOnDrop_WrapperImpl @ 14b74a4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_RaidParty_Slot::SetEventOnDrop_WrapperImpl(void *param_1,void *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  undefined1 auStackY_178 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr FStack_148;
  FObjectPtr_u_0 FStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(longlong *)((longlong)param_2 + 8) == 0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_W_RaidParty_Slot::OnEventOnDrop",0x26,Yes);
    pwVar8 = L"InEvent.DragDropOperation is nullptr.";
    uVar7 = 0x3b;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)((longlong)param_2 + 8),pUVar5);
    FStack_140.Handle = (UObject *)0x0;
    if (bVar3) {
      FStack_140 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)((longlong)param_2 + 8))->Handle;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FStack_140.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(FStack_140.Handle);
    }
    FStack_148.ObjectIndex = 0;
    FStack_148.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FStack_140.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(FStack_140.Handle);
    }
    FWeakObjectPtr::operator=(&FStack_148,(FObjectPtr)&FStack_140);
    bVar3 = TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr> *)&FStack_148,
                       (void *)0x0);
    if (!bVar3) {
      pUVar6 = FWeakObjectPtr::Get(&FStack_148);
      pTVar1 = *(TReferenceControllerBase<1> **)&pUVar6[4].field_0x10;
      lVar2 = *(longlong *)&pUVar6[4].field_0x8;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar2 == 0) && (pUVar4 = UDS_LogManager::GetInst(), pUVar4 != (UDS_LogManager *)0x0)) {
        pUVar4 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_W_RaidParty_Slot::OnEventOnDrop",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,0x49,L"slotInfo is nullptr.");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_W_RaidParty_Slot::OnEventOnDrop",0x26,Yes);
    pwVar8 = L"dragDropOperation is nullptr.";
    uVar7 = 0x42;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,uVar7,pwVar8);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// SetClickEmptySlotButton_WrapperImpl @ 14b74a4d0

void __cdecl
UDS_VM_W_RaidParty_Slot::SetClickEmptySlotButton_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xb8),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 200) != 0) &&
     (*(longlong **)((longlong)param_1 + 0xc0) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0xc0) + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x1b0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0xb8),&FStack_28);
      if (*(int *)((longlong)param_1 + 200) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)param_1 + 0xc0);
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar1,0);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// SetClickPlayerNameBtn_WrapperImpl @ 14b74a4e0

void __cdecl UDS_VM_W_RaidParty_Slot::SetClickPlayerNameBtn_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa0),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0xb0) != 0) &&
     (*(longlong **)((longlong)param_1 + 0xa8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0xa8) + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x1b0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0xa0),&FStack_28);
      if (*(int *)((longlong)param_1 + 0xb0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)param_1 + 0xa8);
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// SetSlotIndex_WrapperImpl @ 14b74a4f0

void __cdecl UDS_VM_W_RaidParty_Slot::SetSlotIndex_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x1b0) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::SlotIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SlotIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b74a500

UClass * __cdecl UDS_VM_W_RaidParty_Slot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RaidParty_Slot",
               &Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RaidParty_Slot,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_RaidParty_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RaidParty_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Slot.InnerSingleton;
}

// UDS_VM_W_RaidParty_Slot @ 14b74e0c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_RaidParty_Slot * __thiscall
UDS_VM_W_RaidParty_Slot::UDS_VM_W_RaidParty_Slot
          (UDS_VM_W_RaidParty_Slot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnClickSlotButtonUpDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RaidParty_Slot__6B_;
  *(undefined8 *)&(this->OnClickSlotButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDropModeChangeDelegate = 0;
  *(undefined8 *)&(this->OnDropModeChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDropModeChangeDelegate).field_0x10 = 0;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  (this->ClickEmptySlotButton)._padding_ = '\0';
  (this->ClickEmptySlotButton).bIsCustomSelected = false;
  (this->ClickEmptySlotButton).bIsLacked = false;
  (this->ClickEmptySlotButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEmptySlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickEmptySlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEmptySlotButton).Delegate.field_0x10 = 0;
  (this->ClickPlayerNameBtn)._padding_ = '\0';
  (this->ClickPlayerNameBtn).bIsCustomSelected = false;
  (this->ClickPlayerNameBtn).bIsLacked = false;
  (this->ClickPlayerNameBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPlayerNameBtn).Delegate = 0;
  *(undefined8 *)&(this->ClickPlayerNameBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPlayerNameBtn).Delegate.field_0x10 = 0;
  this->SlotIndex = -1;
  this->Selected = false;
  this->Hovered = false;
  this->Dragging = false;
  return this;
}

// UDS_VM_W_RaidParty_Slot @ 14b74e1a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_RaidParty_Slot * __thiscall
UDS_VM_W_RaidParty_Slot::UDS_VM_W_RaidParty_Slot
          (UDS_VM_W_RaidParty_Slot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnClickSlotButtonUpDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RaidParty_Slot__6B_;
  *(undefined8 *)&(this->OnClickSlotButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDropModeChangeDelegate = 0;
  *(undefined8 *)&(this->OnDropModeChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDropModeChangeDelegate).field_0x10 = 0;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  (this->ClickEmptySlotButton)._padding_ = '\0';
  (this->ClickEmptySlotButton).bIsCustomSelected = false;
  (this->ClickEmptySlotButton).bIsLacked = false;
  (this->ClickEmptySlotButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEmptySlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickEmptySlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEmptySlotButton).Delegate.field_0x10 = 0;
  (this->ClickPlayerNameBtn)._padding_ = '\0';
  (this->ClickPlayerNameBtn).bIsCustomSelected = false;
  (this->ClickPlayerNameBtn).bIsLacked = false;
  (this->ClickPlayerNameBtn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPlayerNameBtn).Delegate = 0;
  *(undefined8 *)&(this->ClickPlayerNameBtn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPlayerNameBtn).Delegate.field_0x10 = 0;
  this->SlotIndex = -1;
  this->Selected = false;
  this->Hovered = false;
  this->Dragging = false;
  return this;
}

// ~UDS_VM_W_RaidParty_Slot @ 14b74f700

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RaidParty_Slot::~UDS_VM_W_RaidParty_Slot(UDS_VM_W_RaidParty_Slot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RaidParty_Slot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPlayerNameBtn).Delegate);
  pvVar1 = *(void **)&(this->ClickPlayerNameBtn).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPlayerNameBtn).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEmptySlotButton).Delegate);
  pvVar1 = *(void **)&(this->ClickEmptySlotButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEmptySlotButton).Delegate);
  FPointerEvent::~FPointerEvent(&(this->EventOnDrop).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDropModeChangeDelegate);
  pvVar1 = *(void **)&(this->OnDropModeChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDropModeChangeDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickSlotButtonUpDelegate);
  pvVar1 = *(void **)&(this->OnClickSlotButtonUpDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickSlotButtonUpDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7515c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_RaidParty_Slot::GetFieldNotificationDescriptor(UDS_VM_W_RaidParty_Slot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_RaidParty_Slot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751fc0

UClass * __cdecl UDS_VM_W_RaidParty_Slot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RaidParty_Slot",
               &Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RaidParty_Slot,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_RaidParty_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RaidParty_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RaidParty_Slot.InnerSingleton;
}

// OnDropModeChanged @ 14b752300

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RaidParty_Slot::OnDropModeChanged(UDS_VM_W_RaidParty_Slot *this,int param_1,bool param_2)

{
  return;
}

// StaticRegisterNativesUDS_VM_W_RaidParty_Slot @ 14b752480

void __cdecl UDS_VM_W_RaidParty_Slot::StaticRegisterNativesUDS_VM_W_RaidParty_Slot(void)

{
  return;
}

// BindModel @ 14c003410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RaidParty_Slot::BindModel(UDS_VM_W_RaidParty_Slot *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyNotify,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_RaidPartyNotifyType,__int64),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_RaidParty_Slot>
              (&pUVar1->OnChangedRaidPartyNotify,(UDS_VM_W_RaidParty_Slot *)&stack0x00000010,
               (pmf_25606016 *)this);
  }
  return;
}

// InitViewModel @ 14c01ec70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RaidParty_Slot::InitViewModel(UDS_VM_W_RaidParty_Slot *this)

{
  return;
}

// OnClickEmptySlot @ 14c0262f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RaidParty_Slot::OnClickEmptySlot(UDS_VM_W_RaidParty_Slot *this)

{
  return;
}

// OnClickEmptySlotButton @ 14c026300

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RaidParty_Slot::OnClickEmptySlotButton
          (UDS_VM_W_RaidParty_Slot *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDropModeChangeDelegate,&local_28);
  if ((*(int *)&(this->OnDropModeChangeDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnDropModeChangeDelegate).field_0x8, plVar3 != (longlong *)0x0)
     ) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      iVar1 = this->SlotIndex;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnDropModeChangeDelegate,&local_28);
      if (*(int *)&(this->OnDropModeChangeDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->OnDropModeChangeDelegate).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,iVar1,0);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnClickPlayerNameBtn @ 14c0268a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RaidParty_Slot::OnClickPlayerNameBtn
          (UDS_VM_W_RaidParty_Slot *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnClickSlotButtonUpDelegate,&local_28);
  if ((*(int *)&(this->OnClickSlotButtonUpDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnClickSlotButtonUpDelegate).field_0x8,
     plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      iVar1 = this->SlotIndex;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnClickSlotButtonUpDelegate,&local_28);
      if (*(int *)&(this->OnClickSlotButtonUpDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->OnClickSlotButtonUpDelegate).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,iVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnCloseInit @ 14c028610

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RaidParty_Slot::OnCloseInit(UDS_VM_W_RaidParty_Slot *this)

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

// OnEventOnDrop @ 14c029770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RaidParty_Slot::OnEventOnDrop
          (UDS_VM_W_RaidParty_Slot *this,FDS_DragDropEventField *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  undefined1 auStackY_178 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_148;
  UDragDropOperation *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((param_1->DragDropOperation).field0_0x0.DebugPtr == (UDragDropOperation *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_RaidParty_Slot::OnEventOnDrop",0x26,Yes);
    pwVar8 = L"InEvent.DragDropOperation is nullptr.";
    uVar7 = 0x3b;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->DragDropOperation,pUVar5);
    local_140 = (UDragDropOperation *)0x0;
    if (bVar3) {
      local_140 = (param_1->DragDropOperation).field0_0x0.DebugPtr;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UDragDropOperation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UDragDropOperation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
    bVar3 = TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr> *)&local_148,
                       (void *)0x0);
    if (!bVar3) {
      pUVar6 = FWeakObjectPtr::Get(&local_148);
      pTVar1 = *(TReferenceControllerBase<1> **)&pUVar6[4].field_0x10;
      lVar2 = *(longlong *)&pUVar6[4].field_0x8;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar2 == 0) && (pUVar4 = UDS_LogManager::GetInst(), pUVar4 != (UDS_LogManager *)0x0)) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_RaidParty_Slot::OnEventOnDrop",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x49,L"slotInfo is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_RaidParty_Slot::OnEventOnDrop",0x26,Yes);
    pwVar8 = L"dragDropOperation is nullptr.";
    uVar7 = 0x42;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnSetViewModel @ 14c033940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RaidParty_Slot::OnSetViewModel
          (UDS_VM_W_RaidParty_Slot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1b8 [32];
  TSharedPtr<FDS_ViewModelContext_RaidPartySlot,1> local_188;
  code *local_178;
  ulonglong uStack_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  undefined1 local_148 [272];
  FDeprecateSlateVector2D local_38;
  FDeprecateSlateVector2D local_30;
  FName local_18;
  
  local_18 = (FName)(__security_cookie.value ^ (ulonglong)auStackY_1b8);
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
  SafeCast<FDS_ViewModelContext_RaidPartySlot>(&local_188,&local_158);
  if ((FDeprecateSlateVector2D)local_188.Object == (FDeprecateSlateVector2D)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_38 = (FDeprecateSlateVector2D)local_188.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                 "UDS_VM_W_RaidParty_Slot::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,(wchar_t *)local_30,0x13,L"context.IsValid() == false");
      if (local_38 != (FDeprecateSlateVector2D)0x0) {
        FMemory::Free((void *)local_38);
      }
    }
  }
  else {
    if ((FDeprecateSlateVector2D)local_188.Object == (FDeprecateSlateVector2D)0x0) {
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
    this->SlotIndex = *(int *)((longlong)local_188.Object + 0x20);
    local_160 = FFieldNotificationClassDescriptor::SlotIndex.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::SlotIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::operator=
              (&this->OnDropModeChangeDelegate,
               (TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)
               ((longlong)local_188.Object + 0x28));
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
              (&this->OnClickSlotButtonUpDelegate,
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               ((longlong)local_188.Object + 0x48));
    if (*(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)local_188.Object + 0x40)
        != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                (*(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)
                  ((longlong)local_188.Object + 0x40),this);
      uStack_170 = uStack_170 & 0xffffffff00000000;
      local_178 = _vcall__824__flat______;
      TMulticastDelegateRegistration<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_W_RaidParty_Slot>
                (*(TMulticastDelegateRegistration<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                   **)((longlong)local_188.Object + 0x40),(UDS_VM_W_RaidParty_Slot *)local_148,
                 (pmf_2319ee28 *)this);
    }
    (**(code **)(this->_padding_ + 0x2f0))(this);
    (**(code **)(this->_padding_ + 0x330))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RaidPartyMemberInfoChangedEvent @ 14c03da40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RaidParty_Slot::RaidPartyMemberInfoChangedEvent
          (UDS_VM_W_RaidParty_Slot *this,EDS_RaidPartyNotifyType param_1,long64 param_2)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar1 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_00,this->SlotIndex);
  if (pFVar1->PlayerUID == param_2) {
    (**(code **)(this->_padding_ + 0x330))(this);
  }
  return;
}

// SetSlotArrowVisibility @ 14c043760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RaidParty_Slot::SetSlotArrowVisibility
          (UDS_VM_W_RaidParty_Slot *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->SlotArrowVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::SlotArrowVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotArrowVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSlotIndex @ 14c0437a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RaidParty_Slot::SetSlotIndex(UDS_VM_W_RaidParty_Slot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->SlotIndex = *param_1;
  local_10 = FFieldNotificationClassDescriptor::SlotIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SwitchPartySlot @ 14c047c60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RaidParty_Slot::SwitchPartySlot(UDS_VM_W_RaidParty_Slot *this,int *param_1)

{
  return;
}

// UnbindModel @ 14c048c60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RaidParty_Slot::UnbindModel(UDS_VM_W_RaidParty_Slot *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyNotify,this);
    return;
  }
  return;
}

// UpdateProperties @ 14c04dcb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RaidParty_Slot::UpdateProperties(UDS_VM_W_RaidParty_Slot *this)

{
  FName local_18;
  int local_10;
  
  this->SlotArrowVisibility = Collapsed;
  local_10 = FFieldNotificationClassDescriptor::SlotArrowVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotArrowVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

