// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetEventSwipeLeft_WrapperImpl @ 14b6761a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_HUD_RingCmd_QuickSlotList::SetEventSwipeLeft_WrapperImpl(void *param_1,void *param_2)

{
  FDS_UIData *pFVar1;
  int iVar2;
  FName aFStackX_18 [2];
  FName FStack_18;
  int iStack_10;
  
  if (!FDS_RingCommandService::bIsRingCommandKeyPressed) {
    pFVar1 = TDS_Singleton<FDS_UIData>::GetInst();
    iVar2 = pFVar1->CurrentRingCmdQuickSlotDeckIndex + -1;
    if (iVar2 < 0) {
      iVar2 = 2;
    }
    pFVar1->CurrentRingCmdQuickSlotDeckIndex = iVar2;
    RefreshQuickSlotList(param_1);
    RefreshDeckIndex(param_1);
    ::FName::FName(aFStackX_18,"Left_Ani");
    *(FName *)((longlong)param_1 + 0x120) = aFStackX_18[0];
    *(undefined1 *)((longlong)param_1 + 300) = 2;
    iStack_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetEventSwipeRight_WrapperImpl @ 14b6761b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_HUD_RingCmd_QuickSlotList::SetEventSwipeRight_WrapperImpl(void *param_1,void *param_2)

{
  FDS_UIData *pFVar1;
  int iVar2;
  int iVar3;
  FName aFStackX_18 [2];
  FName FStack_18;
  int iStack_10;
  
  if (!FDS_RingCommandService::bIsRingCommandKeyPressed) {
    pFVar1 = TDS_Singleton<FDS_UIData>::GetInst();
    iVar3 = pFVar1->CurrentRingCmdQuickSlotDeckIndex + 1;
    iVar2 = 0;
    if (iVar3 < 3) {
      iVar2 = iVar3;
    }
    pFVar1->CurrentRingCmdQuickSlotDeckIndex = iVar2;
    RefreshQuickSlotList(param_1);
    RefreshDeckIndex(param_1);
    ::FName::FName(aFStackX_18,"Right_Ani");
    *(FName *)((longlong)param_1 + 0x120) = aFStackX_18[0];
    *(undefined1 *)((longlong)param_1 + 300) = 2;
    iStack_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b6761c0

UClass * __cdecl UDS_VM_HUD_RingCmd_QuickSlotList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_RingCmd_QuickSlotList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_RingCmd_QuickSlotList",
               &Z_Registration_Info_UClass_UDS_VM_HUD_RingCmd_QuickSlotList.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_RingCmd_QuickSlotList,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_RingCmd_QuickSlotList>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_RingCmd_QuickSlotList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_RingCmd_QuickSlotList.InnerSingleton;
}

// UDS_VM_HUD_RingCmd_QuickSlotList @ 14b67a450

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_HUD_RingCmd_QuickSlotList * __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::UDS_VM_HUD_RingCmd_QuickSlotList
          (UDS_VM_HUD_RingCmd_QuickSlotList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_RingCmd_QuickSlotList__6B_;
  *(undefined8 *)&this->OnClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnDoubleClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 = 0;
  (this->VM_Slot_1).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_2).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_3).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_4).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_5).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_6).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_7).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_8).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_DeckIndex).field0_0x0.DebugPtr = (UDS_VM_Common_DeckIndex *)0x0;
  this->EventSwipeLeft = false;
  this->EventSwipeRight = false;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_HUD_RingCmd_QuickSlotList @ 14b67a550

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_HUD_RingCmd_QuickSlotList * __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::UDS_VM_HUD_RingCmd_QuickSlotList
          (UDS_VM_HUD_RingCmd_QuickSlotList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_RingCmd_QuickSlotList__6B_;
  *(undefined8 *)&this->OnClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnDoubleClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 = 0;
  (this->VM_Slot_1).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_2).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_3).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_4).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_5).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_6).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_7).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_Slot_8).field0_0x0.DebugPtr = (UDS_VM_RingCmdQuickSlot *)0x0;
  (this->VM_DeckIndex).field0_0x0.DebugPtr = (UDS_VM_Common_DeckIndex *)0x0;
  this->EventSwipeLeft = false;
  this->EventSwipeRight = false;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_HUD_RingCmd_QuickSlotList @ 14b67b990

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::~UDS_VM_HUD_RingCmd_QuickSlotList
          (UDS_VM_HUD_RingCmd_QuickSlotList *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_RingCmd_QuickSlotList__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClickRingMenuDelegate);
  pvVar1 = *(void **)&(this->OnDoubleClickRingMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDoubleClickRingMenuDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickRingMenuDelegate);
  pvVar1 = *(void **)&(this->OnClickRingMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickRingMenuDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67e050

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::GetFieldNotificationDescriptor
          (UDS_VM_HUD_RingCmd_QuickSlotList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_RingCmd_QuickSlotList::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67ebf0

UClass * __cdecl UDS_VM_HUD_RingCmd_QuickSlotList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_RingCmd_QuickSlotList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_RingCmd_QuickSlotList",
               &Z_Registration_Info_UClass_UDS_VM_HUD_RingCmd_QuickSlotList.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_RingCmd_QuickSlotList,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_RingCmd_QuickSlotList>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_RingCmd_QuickSlotList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_RingCmd_QuickSlotList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_RingCmd_QuickSlotList @ 14b67f2f0

void __cdecl
UDS_VM_HUD_RingCmd_QuickSlotList::StaticRegisterNativesUDS_VM_HUD_RingCmd_QuickSlotList(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_RingCmd_QuickSlotList_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnRingCmdDataDirty @ 14b680750

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_HUD_RingCmd_QuickSlotList::execOnRingCmdDataDirty
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRingCmdDataDirty((UDS_VM_HUD_RingCmd_QuickSlotList *)param_1,local_res10);
  return;
}

// BindModel @ 14be76640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_RingCmd_QuickSlotList::BindModel(UDS_VM_HUD_RingCmd_QuickSlotList *this)

{
  UDS_HudManager *pUVar1;
  UDS_RingCommandUIEvent *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_HudManager::GetInst();
  if (pUVar1 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_RingCmd_QuickSlotList>
              (&pUVar1->OnHudShowDelegate,(UDS_VM_HUD_RingCmd_QuickSlotList *)&stack0x00000010,
               (pmf_c89ff16d *)this);
  }
  pUVar2 = UDS_RingCommandUIEvent::GetEvent();
  if (pUVar2 != (UDS_RingCommandUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnRingCmdQuickSlotPrevDeck,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_RingCmd_QuickSlotList>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnRingCmdQuickSlotPrevDeck,
               (UDS_VM_HUD_RingCmd_QuickSlotList *)&stack0x00000010,(pmf_9bdfc0dd *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnRingCmdQuickSlotNextDeck,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_RingCmd_QuickSlotList>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnRingCmdQuickSlotNextDeck,
               (UDS_VM_HUD_RingCmd_QuickSlotList *)&stack0x00000010,(pmf_9bdfc0dd *)this);
  }
  return;
}

// GetSlotVMByIndex @ 14be89da0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TObjectPtr<UDS_VM_RingCmdQuickSlot> __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::GetSlotVMByIndex
          (UDS_VM_HUD_RingCmd_QuickSlotList *this,int param_1)

{
  TObjectPtr<UDS_VM_RingCmdQuickSlot>_u_0 TVar1;
  UDS_VM_RingCmdQuickSlot *pUVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  TVar1._4_4_ = in_register_00000014;
  TVar1._0_4_ = param_1;
  switch(in_R8D) {
  case 0:
    pUVar2 = (this->VM_Slot_1).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_VM_RingCmdQuickSlot *)0x0) {
      pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_RingCmdQuickSlot>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_VM_RingCmdQuickSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->VM_Slot_1).field0_0x0.DebugPtr = pUVar2;
    }
    break;
  case 1:
    pUVar2 = (this->VM_Slot_2).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_VM_RingCmdQuickSlot *)0x0) {
      pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_RingCmdQuickSlot>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_VM_RingCmdQuickSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->VM_Slot_2).field0_0x0.DebugPtr = pUVar2;
    }
    break;
  case 2:
    pUVar2 = (this->VM_Slot_3).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_VM_RingCmdQuickSlot *)0x0) {
      pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_RingCmdQuickSlot>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_VM_RingCmdQuickSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->VM_Slot_3).field0_0x0.DebugPtr = pUVar2;
    }
    break;
  case 3:
    pUVar2 = (this->VM_Slot_4).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_VM_RingCmdQuickSlot *)0x0) {
      pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_RingCmdQuickSlot>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_VM_RingCmdQuickSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->VM_Slot_4).field0_0x0.DebugPtr = pUVar2;
    }
    break;
  case 4:
    pUVar2 = (this->VM_Slot_5).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_VM_RingCmdQuickSlot *)0x0) {
      pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_RingCmdQuickSlot>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_VM_RingCmdQuickSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->VM_Slot_5).field0_0x0.DebugPtr = pUVar2;
    }
    break;
  case 5:
    pUVar2 = (this->VM_Slot_6).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_VM_RingCmdQuickSlot *)0x0) {
      pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_RingCmdQuickSlot>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_VM_RingCmdQuickSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->VM_Slot_6).field0_0x0.DebugPtr = pUVar2;
    }
    break;
  case 6:
    pUVar2 = (this->VM_Slot_7).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_VM_RingCmdQuickSlot *)0x0) {
      pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_RingCmdQuickSlot>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_VM_RingCmdQuickSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->VM_Slot_7).field0_0x0.DebugPtr = pUVar2;
    }
    break;
  case 7:
    pUVar2 = (this->VM_Slot_8).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_VM_RingCmdQuickSlot *)0x0) {
      pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_RingCmdQuickSlot>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_VM_RingCmdQuickSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->VM_Slot_8).field0_0x0.DebugPtr = pUVar2;
    }
    break;
  default:
    *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
    return (TObjectPtr<UDS_VM_RingCmdQuickSlot>)TVar1.DebugPtr;
  }
  (TVar1.DebugPtr)->_padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UDS_VM_RingCmdQuickSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
    return (TObjectPtr<UDS_VM_RingCmdQuickSlot>)TVar1;
  }
  return (TObjectPtr<UDS_VM_RingCmdQuickSlot>)TVar1.DebugPtr;
}

// OnEventSwipeLeft @ 14be98680

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::OnEventSwipeLeft
          (UDS_VM_HUD_RingCmd_QuickSlotList *this,FDS_WidgetEventField *param_1)

{
  FDS_UIData *pFVar1;
  int iVar2;
  FName local_res18 [2];
  FName local_18;
  int local_10;
  
  if (!FDS_RingCommandService::bIsRingCommandKeyPressed) {
    pFVar1 = TDS_Singleton<FDS_UIData>::GetInst();
    iVar2 = pFVar1->CurrentRingCmdQuickSlotDeckIndex + -1;
    if (iVar2 < 0) {
      iVar2 = 2;
    }
    pFVar1->CurrentRingCmdQuickSlotDeckIndex = iVar2;
    RefreshQuickSlotList(this);
    RefreshDeckIndex(this);
    ::FName::FName(local_res18,"Left_Ani");
    (this->AnimationEvent).AnimationName = local_res18[0];
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnEventSwipeRight @ 14be98710

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::OnEventSwipeRight
          (UDS_VM_HUD_RingCmd_QuickSlotList *this,FDS_WidgetEventField *param_1)

{
  FDS_UIData *pFVar1;
  int iVar2;
  int iVar3;
  FName local_res18 [2];
  FName local_18;
  int local_10;
  
  if (!FDS_RingCommandService::bIsRingCommandKeyPressed) {
    pFVar1 = TDS_Singleton<FDS_UIData>::GetInst();
    iVar3 = pFVar1->CurrentRingCmdQuickSlotDeckIndex + 1;
    iVar2 = 0;
    if (iVar3 < 3) {
      iVar2 = iVar3;
    }
    pFVar1->CurrentRingCmdQuickSlotDeckIndex = iVar2;
    RefreshQuickSlotList(this);
    RefreshDeckIndex(this);
    ::FName::FName(local_res18,"Right_Ani");
    (this->AnimationEvent).AnimationName = local_res18[0];
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnRingCmdDataDirty @ 14be9bef0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::OnRingCmdDataDirty
          (UDS_VM_HUD_RingCmd_QuickSlotList *this,UDS_DataBase *param_1)

{
  return;
}

// OnSetViewModel @ 14bea2830

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::OnSetViewModel
          (UDS_VM_HUD_RingCmd_QuickSlotList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  RefreshQuickSlotList(this);
  RefreshDeckIndex(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnShowHudEvent @ 14bea6860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::OnShowHudEvent
          (UDS_VM_HUD_RingCmd_QuickSlotList *this,EDS_WindowLayerGroupType *param_1)

{
  RefreshQuickSlotList(this);
  RefreshDeckIndex(this);
  return;
}

// RefreshDeckIndex @ 14beac180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::RefreshDeckIndex(UDS_VM_HUD_RingCmd_QuickSlotList *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UDS_VM_Common_DeckIndex *pUVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_00;
  UDS_LogManager *pUVar9;
  FDS_UIData *pFVar10;
  longlong *plVar11;
  FDS_ViewModelContext *pFVar12;
  FDS_ViewModelContext *pFVar13;
  undefined1 auStackY_238 [32];
  TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> local_200;
  FName local_1f8;
  int local_1f0;
  TSharedPtr<FDS_ViewModelContext,1> local_1e8;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar13 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_DeckIndex).field0_0x0.DebugPtr == (UDS_VM_Common_DeckIndex *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_VM_Common_DeckIndex_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_VM_Common_DeckIndex_NoRegister();
    CheckIsClassChildOf_Internal(pUVar5,pUVar4);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar4);
    local_1c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1c8._56_8_ = (UPackage *)0x0;
    local_1c8._16_4_ = 0;
    local_1c8._20_4_ = 0;
    local_1c8._24_4_ = RF_Transient;
    local_1c8._40_8_ = (UObject *)0x0;
    local_1c8[0x20] = false;
    local_1c8._8_8_ = this;
    pUVar6 = (UDS_VM_Common_DeckIndex *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar11 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_Common_DeckIndex *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_Common_DeckIndex *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_DeckIndex).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 == (UDS_VM_Common_DeckIndex *)0x0) {
      return;
    }
  }
  pFVar7 = ::operator_new(0x30);
  pFVar12 = pFVar13;
  if (pFVar7 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
    *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
    (pFVar7->ViewModelName).ComparisonIndex = 0;
    (pFVar7->ViewModelName).Number = 0;
    pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonDeck__6B_;
    *(undefined4 *)&pFVar7[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = 0xffffffff;
    *(undefined8 *)&pFVar7[1].DerivedStaticStruct = 0;
    pFVar12 = pFVar7;
  }
  pFVar7 = ::operator_new(0x20);
  if (pFVar7 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonDeck__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar12;
    pFVar13 = pFVar7;
  }
  if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar8 = FDS_ViewModelContext_CommonDeck::StaticStruct();
  *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar8;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar13->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_1e8.Object = pFVar12;
    local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_1e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.SharedReferenceCount.ReferenceController);
  }
  TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)&local_200);
  bVar3 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                    (&local_200,(void *)0x0);
  if (bVar3) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_HUD_RingCmd_QuickSlotList::RefreshDeckIndex",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_148.Ptr,0xa6,L"ringCmdDataSet is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pFVar10 = TDS_Singleton<FDS_UIData>::GetInst();
    iVar1 = pFVar10->CurrentRingCmdQuickSlotDeckIndex;
    pFVar12->ViewModelTemplateKey = Common_DeckIndex;
    *(undefined4 *)&pFVar12[1]._padding_ = 3;
    *(int *)((longlong)&pFVar12[1]._padding_ + 4) = iVar1;
    *(atomic<int> *)&pFVar12[1].DerivedStaticStruct = (atomic<int>)0x2b5d;
    ((atomic<int> *)&pFVar12[1].DerivedStaticStruct)[1] = (atomic<int>)0x2b5e;
    pUVar6 = (this->VM_DeckIndex).field0_0x0.DebugPtr;
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar13->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_1d8.Object = pFVar12;
    local_1d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_1d8);
    local_1f0 = FFieldNotificationClassDescriptor::VM_DeckIndex.BitNumber;
    local_1f8 = FFieldNotificationClassDescriptor::VM_DeckIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  return;
}

// RefreshQuickSlot @ 14beac500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::RefreshQuickSlot
          (UDS_VM_HUD_RingCmd_QuickSlotList *this,int param_1,
          TSharedPtr<FDS_RingCommandSlotData,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  UDS_ViewModelBase *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  GetSlotVMByIndex(this,(int)&local_res20);
  if (local_res20 != (UDS_ViewModelBase *)0x0) {
    pFVar3 = ::operator_new(0x28);
    pFVar6 = (FDS_ViewModelContext *)0x0;
    pFVar5 = pFVar6;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_RingCmdQuickSlot__6B_;
      pFVar3[1]._padding_ = -1;
      pFVar5 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RingCmdQuickSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar5;
      pFVar6 = pFVar3;
    }
    if ((pFVar5 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_RingCmdQuickSlot::StaticStruct();
    *(UScriptStruct **)&pFVar5->DerivedStaticStruct = pUVar4;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_28.Object = pFVar5;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    pFVar5->ViewModelTemplateKey = HUD_RingCmd_QuickSlot;
    if ((param_2->Object == (FDS_RingCommandSlotData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)&pFVar5[1]._padding_ = param_2->Object->DeckNumber;
    if ((param_2->Object == (FDS_RingCommandSlotData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)((longlong)&pFVar5[1]._padding_ + 4) = param_2->Object->SlotNumber;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_18.Object = pFVar5;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    UDS_ViewModelBase::SetContext(local_res20,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// RefreshQuickSlotList @ 14beac6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::RefreshQuickSlotList(UDS_VM_HUD_RingCmd_QuickSlotList *this)

{
  int iVar1;
  int iVar2;
  TSharedPtr<FDS_RingCommandSlotData,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FDS_UIData *pFVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStackY_368 [32];
  ForAnyElementType local_328;
  int local_320;
  int local_31c;
  FWeakObjectPtr local_318 [2];
  FName local_308;
  int local_300;
  FName local_2f8;
  int local_2f0;
  FName local_2e8;
  int local_2e0;
  FName local_2d8;
  int local_2d0;
  FName local_2c8;
  int local_2c0;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  FName local_298;
  int local_290;
  TSharedPtr<FDS_RingCommandSlotData,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pFVar7 = TDS_Singleton<FDS_UIData>::GetInst();
  UDS_RingCommandDeckData::GetData
            ((ulong64)local_318,UDS_PlayerData::MainPlayerEntityID,
             SUB41(pFVar7->CurrentRingCmdQuickSlotDeckIndex,0));
  bVar5 = FWeakObjectPtr::IsValid(local_318);
  if (bVar5) {
    pUVar9 = FWeakObjectPtr::Get(local_318);
    iVar1 = *(int *)&pUVar9[2].field_0xc;
    lVar13 = (longlong)iVar1;
    pUVar9 = FWeakObjectPtr::Get(local_318);
    uVar12 = 0;
    local_328.Data = (FScriptContainerElement *)0x0;
    iVar2 = *(int *)&pUVar9[2].field_0x18;
    pTVar3 = *(TSharedPtr<FDS_RingCommandSlotData,1> **)&pUVar9[2].field_0x10;
    local_320 = iVar2;
    if (iVar2 == 0) {
      local_31c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,&local_328,iVar2,&local_31c);
      ConstructItems<TSharedPtr<FDS_RingCommandSlotData,1>,TSharedPtr<FDS_RingCommandSlotData,1>,int>
                (local_328.Data,pTVar3,iVar2);
    }
    uVar14 = uVar12;
    if (0 < iVar1) {
      do {
        uVar11 = (uint)uVar12;
        if (((int)uVar11 < 0) || (local_320 <= (int)uVar11)) {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 != (UDS_LogManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_VM_HUD_RingCmd_QuickSlotList::RefreshQuickSlotList",0x36,Yes)
            ;
            UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x75,L"Invalid Index : %d");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
        }
        else {
          uVar6 = 0;
          if ((int)uVar11 < local_320) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_288.Object = *(FDS_RingCommandSlotData **)(local_328.Data + uVar14);
          local_288.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(local_328.Data + uVar14 + 8);
          if (local_288.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          RefreshQuickSlot(this,uVar11,&local_288);
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar14 = uVar14 + 0x10;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    local_300 = FFieldNotificationClassDescriptor::VM_Slot_1.BitNumber;
    local_308 = FFieldNotificationClassDescriptor::VM_Slot_1.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_308);
    local_2f0 = FFieldNotificationClassDescriptor::VM_Slot_2.BitNumber;
    local_2f8 = FFieldNotificationClassDescriptor::VM_Slot_2.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2f8);
    local_2e0 = FFieldNotificationClassDescriptor::VM_Slot_3.BitNumber;
    local_2e8 = FFieldNotificationClassDescriptor::VM_Slot_3.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2e8);
    local_2d0 = FFieldNotificationClassDescriptor::VM_Slot_4.BitNumber;
    local_2d8 = FFieldNotificationClassDescriptor::VM_Slot_4.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2d8);
    local_2c0 = FFieldNotificationClassDescriptor::VM_Slot_5.BitNumber;
    local_2c8 = FFieldNotificationClassDescriptor::VM_Slot_5.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2c8);
    local_2b0 = FFieldNotificationClassDescriptor::VM_Slot_6.BitNumber;
    local_2b8 = FFieldNotificationClassDescriptor::VM_Slot_6.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
    local_2a0 = FFieldNotificationClassDescriptor::VM_Slot_7.BitNumber;
    local_2a8 = FFieldNotificationClassDescriptor::VM_Slot_7.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
    local_290 = FFieldNotificationClassDescriptor::VM_Slot_8.BitNumber;
    local_298 = FFieldNotificationClassDescriptor::VM_Slot_8.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
    DestructItems<TSharedPtr<FDS_RingCommandSlotData,1>,int>
              ((TSharedPtr<FDS_RingCommandSlotData,1> *)local_328.Data,local_320);
    FVar10.Data = local_328.Data;
  }
  else {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_VM_HUD_RingCmd_QuickSlotList::RefreshQuickSlotList",0x36,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Warning,local_278.Ptr,0x6a,L"ringCmdDeckData is invalid. DeckIndex : %d");
    FVar10.Data = (FScriptContainerElement *)local_278._padding_;
  }
  if ((TSharedPtr<FDS_RingCommandSlotData,1> *)FVar10.Data !=
      (TSharedPtr<FDS_RingCommandSlotData,1> *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return;
}

// SetNextDeck @ 14beb38c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::SetNextDeck(UDS_VM_HUD_RingCmd_QuickSlotList *this)

{
  FDS_UIData *pFVar1;
  int iVar2;
  int iVar3;
  
  pFVar1 = TDS_Singleton<FDS_UIData>::GetInst();
  iVar3 = pFVar1->CurrentRingCmdQuickSlotDeckIndex + 1;
  iVar2 = 0;
  if (iVar3 < 3) {
    iVar2 = iVar3;
  }
  pFVar1->CurrentRingCmdQuickSlotDeckIndex = iVar2;
  RefreshQuickSlotList(this);
  RefreshDeckIndex(this);
  return;
}

// SetPrevDeck @ 14beb3c40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::SetPrevDeck(UDS_VM_HUD_RingCmd_QuickSlotList *this)

{
  FDS_UIData *pFVar1;
  int iVar2;
  
  pFVar1 = TDS_Singleton<FDS_UIData>::GetInst();
  iVar2 = pFVar1->CurrentRingCmdQuickSlotDeckIndex + -1;
  if (iVar2 < 0) {
    iVar2 = 2;
  }
  pFVar1->CurrentRingCmdQuickSlotDeckIndex = iVar2;
  RefreshQuickSlotList(this);
  RefreshDeckIndex(this);
  return;
}

// UnbindModel @ 14bebc490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_RingCmd_QuickSlotList::UnbindModel(UDS_VM_HUD_RingCmd_QuickSlotList *this)

{
  UDS_HudManager *pUVar1;
  UDS_RingCommandUIEvent *pUVar2;
  
  pUVar1 = UDS_HudManager::GetInst();
  if (pUVar1 != (UDS_HudManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnHudShowDelegate,this
              );
  }
  pUVar2 = UDS_RingCommandUIEvent::GetEvent();
  if (pUVar2 != (UDS_RingCommandUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnRingCmdQuickSlotPrevDeck,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnRingCmdQuickSlotNextDeck,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

