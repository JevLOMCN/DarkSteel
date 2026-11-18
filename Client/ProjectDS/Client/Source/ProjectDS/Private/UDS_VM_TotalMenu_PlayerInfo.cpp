// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// SetWidgetSwitcherIndex_WrapperImpl @ 14b6ee070

void __cdecl
UDS_VM_TotalMenu_PlayerInfo::SetWidgetSwitcherIndex_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x158) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetSection2Visibility_WrapperImpl @ 14b6ee080

void __cdecl
UDS_VM_TotalMenu_PlayerInfo::SetSection2Visibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x15c) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::Section2Visibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Section2Visibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetSection3Visibility_WrapperImpl @ 14b6ee090

void __cdecl
UDS_VM_TotalMenu_PlayerInfo::SetSection3Visibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x15d) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::Section3Visibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Section3Visibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetOnStatusDetailBtnClickedEvent_WrapperImpl @ 14b6ee0a0

void __cdecl
UDS_VM_TotalMenu_PlayerInfo::SetOnStatusDetailBtnClickedEvent_WrapperImpl
          (void *param_1,void *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  void *pvStackX_18;
  uint uStack_4c;
  undefined1 auStack_48 [8];
  FDelegateAllocation FStack_40;
  FDestructionSentinel FStack_30;
  FDelegateAllocation *pFStack_18;
  
  auStack_48 = (undefined1  [8])0x0;
  FStack_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_48,
             (FWriteAccessScope *)&FStack_30);
  pFStack_18 = &FStack_40;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&FStack_40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_TotalMenu_PlayerInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar2[3] = 0;
    pvStackX_18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pvStackX_18);
    puVar2[4] = OnOpenStatusDetailPopup;
    puVar2[5] = (ulonglong)uStack_4c << 0x20;
  }
  if (FStack_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_30.Accessor,&FStack_30);
  }
  iVar1 = UDS_PlayerData::GetMainPlayerCurrentCharID();
  FDS_CharacterService::RequestStatusDetailView
            (iVar1,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_48);
  return;
}

// StaticClass @ 14b6ee0b0

UClass * __cdecl UDS_VM_TotalMenu_PlayerInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_PlayerInfo",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_TotalMenu_PlayerInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_PlayerInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo.InnerSingleton;
}

// UDS_VM_TotalMenu_PlayerInfo @ 14b6f2b10

UDS_VM_TotalMenu_PlayerInfo * __thiscall
UDS_VM_TotalMenu_PlayerInfo::UDS_VM_TotalMenu_PlayerInfo
          (UDS_VM_TotalMenu_PlayerInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->OpenAnimationEventField).NumberOfLoops = 1;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo__6B_;
  (this->VM_PlayerData).field0_0x0.DebugPtr = (UDS_VM_PlayerData *)0x0;
  (this->VM_TicketData).field0_0x0.DebugPtr = (UDS_VM_TicketData *)0x0;
  (this->VM_AscenderStatus_Player).field0_0x0.DebugPtr = (UDS_VM_PlayerSkillStatus *)0x0;
  (this->VM_AscenderStatus_Ticket).field0_0x0.DebugPtr = (UDS_VM_PlayerSkillStatus *)0x0;
  (this->VM_Player_IconSlot).field0_0x0.DebugPtr = (UDS_VM_Player_IconSlot *)0x0;
  (this->VM_PlayerInfo_TabFrame).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_PlayerInfo_TabFrame *)0x0;
  (this->EntryBindingEventField_Status).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Coin_Section1).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Coin_Section1).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Coin_Section1).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Coin_Section2).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Coin_Section2).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Coin_Section2).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Coin_Section3).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Coin_Section3).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Coin_Section3).UserObjectList.ArrayMax = 0;
  (this->OpenAnimationEventField).AnimationName.ComparisonIndex = 0;
  (this->OpenAnimationEventField).AnimationName.Number = 0;
  (this->OpenAnimationEventField).AnimationPlayTime = 0.0;
  (this->OpenAnimationEventField).AnimationEventType = None;
  (this->OpenAnimationEventField).AnimationStateType = None;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation.field_0x10 = 0;
  (this->OnStatusDetailBtnClickedEvent)._padding_ = '\0';
  (this->OnStatusDetailBtnClickedEvent).bIsCustomSelected = false;
  (this->OnStatusDetailBtnClickedEvent).bIsLacked = false;
  (this->OnStatusDetailBtnClickedEvent).bIsCustomDisabled = false;
  (this->OnStatusDetailBtnClickedEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate.field_0x8 = 0;
  ::FName::FName(&this->OpenAnimationName,"Open_Ani");
  return this;
}

// UDS_VM_TotalMenu_PlayerInfo @ 14b6f2c30

UDS_VM_TotalMenu_PlayerInfo * __thiscall
UDS_VM_TotalMenu_PlayerInfo::UDS_VM_TotalMenu_PlayerInfo
          (UDS_VM_TotalMenu_PlayerInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->OpenAnimationEventField).NumberOfLoops = 1;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo__6B_;
  (this->VM_PlayerData).field0_0x0.DebugPtr = (UDS_VM_PlayerData *)0x0;
  (this->VM_TicketData).field0_0x0.DebugPtr = (UDS_VM_TicketData *)0x0;
  (this->VM_AscenderStatus_Player).field0_0x0.DebugPtr = (UDS_VM_PlayerSkillStatus *)0x0;
  (this->VM_AscenderStatus_Ticket).field0_0x0.DebugPtr = (UDS_VM_PlayerSkillStatus *)0x0;
  (this->VM_Player_IconSlot).field0_0x0.DebugPtr = (UDS_VM_Player_IconSlot *)0x0;
  (this->VM_PlayerInfo_TabFrame).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_PlayerInfo_TabFrame *)0x0;
  (this->EntryBindingEventField_Status).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Status).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Coin_Section1).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Coin_Section1).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Coin_Section1).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Coin_Section2).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Coin_Section2).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Coin_Section2).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Coin_Section3).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Coin_Section3).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Coin_Section3).UserObjectList.ArrayMax = 0;
  (this->OpenAnimationEventField).AnimationName.ComparisonIndex = 0;
  (this->OpenAnimationEventField).AnimationName.Number = 0;
  (this->OpenAnimationEventField).AnimationPlayTime = 0.0;
  (this->OpenAnimationEventField).AnimationEventType = None;
  (this->OpenAnimationEventField).AnimationStateType = None;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation.field_0x10 = 0;
  (this->OnStatusDetailBtnClickedEvent)._padding_ = '\0';
  (this->OnStatusDetailBtnClickedEvent).bIsCustomSelected = false;
  (this->OnStatusDetailBtnClickedEvent).bIsLacked = false;
  (this->OnStatusDetailBtnClickedEvent).bIsCustomDisabled = false;
  (this->OnStatusDetailBtnClickedEvent).ButtonEventType = None;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnStatusDetailBtnClickedEvent).Delegate.field_0x8 = 0;
  ::FName::FName(&this->OpenAnimationName,"Open_Ani");
  return this;
}

// ~UDS_VM_TotalMenu_PlayerInfo @ 14b6f4590

void __thiscall
UDS_VM_TotalMenu_PlayerInfo::~UDS_VM_TotalMenu_PlayerInfo(UDS_VM_TotalMenu_PlayerInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OnStatusDetailBtnClickedEvent).Delegate);
  pvVar1 = *(void **)&(this->OnStatusDetailBtnClickedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnStatusDetailBtnClickedEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenAnimationEventField).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->OpenAnimationEventField).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->OpenAnimationEventField).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenAnimationEventField).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->OpenAnimationEventField).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->OpenAnimationEventField).Delegate_AnimationFinish);
  pFVar2 = (this->EntryBindingEventField_Coin_Section3).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EntryBindingEventField_Coin_Section2).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EntryBindingEventField_Coin_Section1).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EntryBindingEventField_Status).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f6ee0

IClassDescriptor * __thiscall
UDS_VM_TotalMenu_PlayerInfo::GetFieldNotificationDescriptor(UDS_VM_TotalMenu_PlayerInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TotalMenu_PlayerInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7a20

UClass * __cdecl UDS_VM_TotalMenu_PlayerInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_PlayerInfo",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_TotalMenu_PlayerInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_PlayerInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo @ 14b6f84b0

void __cdecl UDS_VM_TotalMenu_PlayerInfo::StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo(void)

{
  return;
}

// BindModel @ 14bf422c0

void __thiscall UDS_VM_TotalMenu_PlayerInfo::BindModel(UDS_VM_TotalMenu_PlayerInfo *this)

{
  UDS_TotalMenuEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_TotalMenuEvent::GetEvent();
  if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClickPlayerInfoTab,
               this);
    TMulticastDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_TotalMenu_PlayerInfo>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnClickPlayerInfoTab,(UDS_VM_TotalMenu_PlayerInfo *)&stack0x00000010,
               (pmf_b3dc6a82 *)this);
  }
  return;
}

// InitViewModel @ 14bf5bb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_TotalMenu_PlayerInfo::InitViewModel(UDS_VM_TotalMenu_PlayerInfo *this)

{
  UDS_VM_PlayerData *pUVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  UDS_VM_TicketData *pUVar4;
  UDS_VM_Player_IconSlot *pUVar5;
  UDS_VM_TotalMenu_PlayerInfo_TabFrame *pUVar6;
  UDS_VM_PlayerSkillStatus *pUVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_PlayerData).field0_0x0.DebugPtr == (UDS_VM_PlayerData *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_PlayerData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_PlayerData *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_PlayerData).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_TicketData).field0_0x0.DebugPtr == (UDS_VM_TicketData *)0x0) {
    local_a8 = 0;
    pUVar2 = Z_Construct_UClass_UDS_VM_TicketData_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_VM_TicketData_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar4 = (UDS_VM_TicketData *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_TicketData *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_TicketData *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_TicketData).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_Player_IconSlot).field0_0x0.DebugPtr == (UDS_VM_Player_IconSlot *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Player_IconSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_Player_IconSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_Player_IconSlot).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VM_PlayerInfo_TabFrame).field0_0x0.DebugPtr ==
      (UDS_VM_TotalMenu_PlayerInfo_TabFrame *)0x0) {
    local_a8 = 0;
    pUVar2 = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_TabFrame_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_VM_TotalMenu_PlayerInfo_TabFrame_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar6 = (UDS_VM_TotalMenu_PlayerInfo_TabFrame *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_TotalMenu_PlayerInfo_TabFrame *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_TotalMenu_PlayerInfo_TabFrame *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_PlayerInfo_TabFrame).field0_0x0.DebugPtr = pUVar6;
  }
  if ((this->VM_AscenderStatus_Player).field0_0x0.DebugPtr == (UDS_VM_PlayerSkillStatus *)0x0) {
    pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_PlayerSkillStatus>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_VM_PlayerSkillStatus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_AscenderStatus_Player).field0_0x0.DebugPtr = pUVar7;
  }
  if ((this->VM_AscenderStatus_Ticket).field0_0x0.DebugPtr == (UDS_VM_PlayerSkillStatus *)0x0) {
    pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_PlayerSkillStatus>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_VM_PlayerSkillStatus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_AscenderStatus_Ticket).field0_0x0.DebugPtr = pUVar7;
  }
  return;
}

// OnClickTab @ 14bf62d80

void __thiscall
UDS_VM_TotalMenu_PlayerInfo::OnClickTab
          (UDS_VM_TotalMenu_PlayerInfo *this,FDS_ButtonEventField *param_1,int *param_2)

{
  FName local_18;
  int local_10;
  
  this->WidgetSwitcherIndex = *param_2;
  local_10 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnOpenStatusDetailPopup @ 14bf65af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_TotalMenu_PlayerInfo::OnOpenStatusDetailPopup(UDS_VM_TotalMenu_PlayerInfo *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  bool local_188;
  UDS_VM_TotalMenu_PlayerInfo *local_178;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_TotalMenu_PlayerInfo::OnOpenStatusDetailPopup",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x143,L"windowMng is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    uStack_190 = 0;
    local_198 = OnStatusDetailPopupOpened;
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_1b0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_TotalMenu_PlayerInfo____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_TotalMenu_PlayerInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_178 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_TotalMenu_PlayerInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_178);
      puVar2[4] = local_198;
      puVar2[5] = CONCAT44(uStack_18c,uStack_190);
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_198,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_1b8);
    UDS_WindowManager::OpenWindow(this_00,StatusDetailPopup,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_198);
    if ((local_1b0.DelegateSize != 0) &&
       (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1b0,0,0,0x10);
      local_1b0.DelegateSize = 0;
    }
    if (local_188 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_18c,uStack_190),
                 (FDestructionSentinel *)&local_198);
    }
    if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b8);
  }
  return;
}

// OnSetViewModel @ 14bf6eb80

void __thiscall
UDS_VM_TotalMenu_PlayerInfo::OnSetViewModel
          (UDS_VM_TotalMenu_PlayerInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_PlayerData *this_00;
  UDS_VM_TicketData *this_01;
  UDS_VM_Player_IconSlot *this_02;
  UDS_VM_TotalMenu_PlayerInfo_TabFrame *this_03;
  UDS_VM_PlayerSkillStatus *pUVar2;
  code *pcVar3;
  FDS_ViewModelContext_PlayerData *pFVar4;
  FDS_ViewModelContext_Ticket *pFVar5;
  FDS_ViewModelContext_PlayerIconSlot *pFVar6;
  FDS_ViewModelContext_PlayerSkillStatus *pFVar7;
  bool bVar8;
  UObject *pUVar9;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TSharedPtr<FDS_ViewModelContext,1> local_f8;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  TSharedPtr<FDS_ViewModelContext_PlayerData,1> local_c8;
  TSharedPtr<FDS_ViewModelContext_Ticket,1> local_b8;
  TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> local_a8;
  TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> local_98;
  TSharedPtr<FDS_ViewModelContext_PlayerSkillStatus,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((this->VM_PlayerData).field0_0x0.DebugPtr != (UDS_VM_PlayerData *)0x0) {
    MakeContext<FDS_ViewModelContext_PlayerData>(&local_c8);
    pFVar4 = local_c8.Object;
    if (local_c8.Object == (FDS_ViewModelContext_PlayerData *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&pFVar4->_padding_ = 0xb;
    pFVar4->PlayerEntityID = UDS_PlayerData::MainPlayerEntityID;
    this_00 = (this->VM_PlayerData).field0_0x0.DebugPtr;
    local_78.Object = (FDS_ViewModelContext *)local_c8.Object;
    local_78.SharedReferenceCount.ReferenceController =
         local_c8.SharedReferenceCount.ReferenceController;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_TicketData).field0_0x0.DebugPtr != (UDS_VM_TicketData *)0x0) {
    UDS_TicketData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,true);
    bVar8 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar8) {
      MakeContext<FDS_ViewModelContext_Ticket>(&local_b8);
      pFVar5 = local_b8.Object;
      if (local_b8.Object == (FDS_ViewModelContext_Ticket *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)&pFVar5->_padding_ = 99;
      (pFVar5->TicketData).WeakPtr = local_res8;
      this_01 = (this->VM_TicketData).field0_0x0.DebugPtr;
      local_68.Object = (FDS_ViewModelContext *)local_b8.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_b8.SharedReferenceCount.ReferenceController;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
    }
  }
  if ((this->VM_Player_IconSlot).field0_0x0.DebugPtr != (UDS_VM_Player_IconSlot *)0x0) {
    UDS_PlayerData::GetMainPlayerData();
    bVar8 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar8) {
      MakeContext<FDS_ViewModelContext_PlayerIconSlot>(&local_a8);
      pFVar6 = local_a8.Object;
      if (local_a8.Object == (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)&pFVar6->_padding_ = 0x1bf;
      pUVar9 = FWeakObjectPtr::Get(&local_res10);
      local_58.Object = (FDS_ViewModelContext *)local_a8.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_a8.SharedReferenceCount.ReferenceController;
      pFVar6->PlayerIconID = *(int *)&pUVar9[8].field_0x1c;
      pFVar6->PlayerIconSlotType = Changeable;
      this_02 = (this->VM_Player_IconSlot).field0_0x0.DebugPtr;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
    }
  }
  if ((this->VM_PlayerInfo_TabFrame).field0_0x0.DebugPtr !=
      (UDS_VM_TotalMenu_PlayerInfo_TabFrame *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_f8);
    if (local_f8.Object == (FDS_ViewModelContext *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (local_f8.Object)->ViewModelTemplateKey = TotalMenu_PlayerInfo_TabFrame;
    this_03 = (this->VM_PlayerInfo_TabFrame).field0_0x0.DebugPtr;
    local_48.Object = local_f8.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_f8.SharedReferenceCount.ReferenceController;
    if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_03,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_AscenderStatus_Player).field0_0x0.DebugPtr != (UDS_VM_PlayerSkillStatus *)0x0) {
    MakeContext<FDS_ViewModelContext_PlayerSkillStatus>(&local_98);
    pFVar7 = local_98.Object;
    if (local_98.Object == (FDS_ViewModelContext_PlayerSkillStatus *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&pFVar7->_padding_ = 0x1c4;
    pFVar7->AscenderStatusType = PlayerData;
    pUVar2 = (this->VM_AscenderStatus_Player).field0_0x0.DebugPtr;
    local_38.Object = (FDS_ViewModelContext *)local_98.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_AscenderStatus_Ticket).field0_0x0.DebugPtr != (UDS_VM_PlayerSkillStatus *)0x0) {
    MakeContext<FDS_ViewModelContext_PlayerSkillStatus>(&local_88);
    pFVar7 = local_88.Object;
    if (local_88.Object == (FDS_ViewModelContext_PlayerSkillStatus *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&pFVar7->_padding_ = 0x1c4;
    pFVar7->AscenderStatusType = TicketData;
    pUVar2 = (this->VM_AscenderStatus_Ticket).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_88.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  UDS_TotalMenuLocalSave::GetInst();
  bVar8 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar8) {
    pUVar9 = FWeakObjectPtr::Get(&local_res18);
    this->WidgetSwitcherIndex = *(int *)(pUVar9 + 1);
    local_e0 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.BitNumber;
    local_e8 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
  }
  SetStatus(this);
  SetCoin(this);
  (this->OpenAnimationEventField).AnimationName = this->OpenAnimationName;
  (this->OpenAnimationEventField).AnimationEventType = PlayForward;
  local_d0 = FFieldNotificationClassDescriptor::OpenAnimationEventField.BitNumber;
  local_d8 = FFieldNotificationClassDescriptor::OpenAnimationEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnStatusDetailBtnClicked @ 14bf71750

void __thiscall
UDS_VM_TotalMenu_PlayerInfo::OnStatusDetailBtnClicked
          (UDS_VM_TotalMenu_PlayerInfo *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_VM_TotalMenu_PlayerInfo *local_res18;
  uint uStack_4c;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_TotalMenu_PlayerInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_TotalMenu_PlayerInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_TotalMenu_PlayerInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res18);
    puVar2[4] = OnOpenStatusDetailPopup;
    puVar2[5] = (ulonglong)uStack_4c << 0x20;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  iVar1 = UDS_PlayerData::GetMainPlayerCurrentCharID();
  FDS_CharacterService::RequestStatusDetailView
            (iVar1,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48);
  return;
}

// OnStatusDetailPopupOpened @ 14bf71880

void __thiscall
UDS_VM_TotalMenu_PlayerInfo::OnStatusDetailPopupOpened
          (UDS_VM_TotalMenu_PlayerInfo *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  atomic<int> aVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar4 = ::operator_new(0x30);
    pFVar7 = (FDS_ViewModelContext *)0x0;
    pFVar6 = pFVar7;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      ((atomic<int> *)&pFVar4[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_StatusCategoryList__6B_;
      pFVar4[1]._padding_ = 0;
      *(atomic<int> *)&pFVar4[1].DerivedStaticStruct = (atomic<int>)0x0;
      pFVar6 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_StatusCategoryList__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar6;
      pFVar7 = pFVar4;
    }
    if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_StatusCategoryList::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar6;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    pFVar6->ViewModelTemplateKey = StatusCategoryList;
    pFVar6[1]._padding_ = UDS_PlayerData::MainPlayerEntityID;
    aVar3 = (atomic<int>)UDS_PlayerData::GetMainPlayerCurrentCharID();
    *(atomic<int> *)&pFVar6[1].DerivedStaticStruct = aVar3;
    *(undefined1 *)((atomic<int> *)&pFVar6[1].DerivedStaticStruct + 1) = 0;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar7->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar6;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
  }
  return;
}

// SetCoin @ 14bf79ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_TotalMenu_PlayerInfo::SetCoin(UDS_VM_TotalMenu_PlayerInfo *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  UDS_VM_TotalMenu_PlayerInfo *pUVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *pUVar12;
  TReferenceControllerBase<1> *pTVar13;
  ESlateVisibility EVar14;
  ulonglong uVar15;
  longlong *plVar16;
  FDS_EntryBindingEventField *pFVar17;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  FDS_ViewModelContext *pFVar21;
  FDS_ViewModelContext *pFVar22;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7;
  EDS_MoneyType local_1b6;
  FIdentityFunctor local_1b5 [5];
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  FDS_EntryBindingEventField *local_1a0;
  uint local_198;
  UDS_VM_TotalMenu_PlayerInfo *local_190;
  TArray<FDS_MoneyBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_188;
  UDS_UserObjectListItem *local_178;
  UDS_UserObjectListItem *local_170;
  UDS_UserObjectListItem *local_168;
  FScriptContainerElement *local_160;
  FName local_158;
  int local_150;
  FName local_148;
  int local_140;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  TSharedPtr<FDS_ViewModelContext,1> local_108;
  TSharedPtr<FDS_ViewModelContext,1> local_f8;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TArray<FDS_MoneyBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_190 = this;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Coin_Section1);
  pFVar17 = &this->EntryBindingEventField_Coin_Section2;
  local_1a0 = pFVar17;
  FDS_EntryBindingEventField::Reset(pFVar17);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Coin_Section3);
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 0;
  FDS_MoneyBaseTableRow::GetAll(&local_c8);
  FDS_MoneyBaseTableRow::GetAll(&local_188);
  iVar6 = local_188.ArrayNum;
  pFVar1 = local_188.AllocatorInstance.Data + (longlong)local_188.ArrayNum * 8;
  FVar20.Data = local_188.AllocatorInstance.Data;
  while( true ) {
    if (local_188.ArrayNum != iVar6) {
      local_1b8 = 0;
      `TCheckedPointerIterator<FDS_MoneyBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1b8);
    }
    if (FVar20.Data == pFVar1) break;
    if ((*(longlong *)FVar20.Data != 0) && (0 < *(int *)(*(longlong *)FVar20.Data + 100))) {
      iVar5 = (uint)local_1a8;
      if ((uint)local_1a8 == local_1a8._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_1b0,(int *)((longlong)&local_1a8 + 4));
      }
      local_1a8 = CONCAT44(local_1a8._4_4_,iVar5 + 1);
      *(longlong *)(local_1b0.Data + (longlong)iVar5 * 8) = *(longlong *)FVar20.Data;
    }
    FVar20.Data = FVar20.Data + 8;
  }
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  AlgoImpl::
  StableSortInternal<FDS_MoneyBaseTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_MoneyBaseTableRow_const_*,_UDS_VM_TotalMenu_PlayerInfo::SetCoin_::__l2::<lambda_1>_>_>
            ((FDS_MoneyBaseTableRow **)local_1b0.Data,(uint)local_1a8,local_1b5[0],
             (<lambda_1> *)local_1b5);
  uVar15 = (ulonglong)(int)(uint)local_1a8;
  local_198 = (uint)local_1a8;
  local_160 = local_1b0.Data + uVar15 * 8;
  uVar19 = uVar15;
  FVar20.Data = local_1b0.Data;
  do {
    pFVar1 = local_160;
    if ((int)uVar15 != (int)uVar19) {
      local_1b7 = 0;
      `TCheckedPointerIterator<FDS_MoneyBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1b7);
    }
    pUVar3 = local_190;
    if (FVar20.Data == pFVar1) {
      local_150 = FFieldNotificationClassDescriptor::EntryBindingEventField_Coin_Section1.BitNumber;
      local_158 = FFieldNotificationClassDescriptor::EntryBindingEventField_Coin_Section1.FieldName;
      (**(code **)(local_190->_padding_ + 0x38))(&local_190->_padding_,&local_158);
      local_140 = FFieldNotificationClassDescriptor::EntryBindingEventField_Coin_Section2.BitNumber;
      local_148 = FFieldNotificationClassDescriptor::EntryBindingEventField_Coin_Section2.FieldName;
      (**(code **)(pUVar3->_padding_ + 0x38))(&pUVar3->_padding_,&local_148);
      local_130 = FFieldNotificationClassDescriptor::EntryBindingEventField_Coin_Section3.BitNumber;
      local_138 = FFieldNotificationClassDescriptor::EntryBindingEventField_Coin_Section3.FieldName;
      (**(code **)(pUVar3->_padding_ + 0x38))(&pUVar3->_padding_,&local_138);
      iVar6 = FDS_EntryBindingEventField::Num(pFVar17);
      EVar14 = Collapsed;
      if (0 < iVar6) {
        EVar14 = SelfHitTestInvisible;
      }
      pUVar3->Section2Visibility = EVar14;
      local_120 = FFieldNotificationClassDescriptor::Section2Visibility.BitNumber;
      local_128 = FFieldNotificationClassDescriptor::Section2Visibility.FieldName;
      (**(code **)(pUVar3->_padding_ + 0x38))(&pUVar3->_padding_,&local_128);
      iVar6 = FDS_EntryBindingEventField::Num(&pUVar3->EntryBindingEventField_Coin_Section3);
      EVar14 = Collapsed;
      if (0 < iVar6) {
        EVar14 = SelfHitTestInvisible;
      }
      pUVar3->Section3Visibility = EVar14;
      local_110 = FFieldNotificationClassDescriptor::Section3Visibility.BitNumber;
      local_118 = FFieldNotificationClassDescriptor::Section3Visibility.FieldName;
      (**(code **)(pUVar3->_padding_ + 0x38))(&pUVar3->_padding_,&local_118);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      return;
    }
    pUVar7 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar8);
    local_b8._8_8_ = pUVar7;
    this_00 = (UDS_UserObjectListItem *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar16 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    pFVar9 = ::operator_new(0x28);
    pFVar21 = (FDS_ViewModelContext *)0x0;
    pFVar22 = pFVar21;
    if (pFVar9 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar9->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar9[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar9[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar9[1]._padding_ + 7) = 0;
      *(undefined8 *)&pFVar9->DerivedStaticStruct = 0;
      (pFVar9->ViewModelName).ComparisonIndex = 0;
      (pFVar9->ViewModelName).Number = 0;
      pFVar9->ViewModelTemplateKey = None;
      pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyData__6B_;
      *(undefined1 *)&pFVar9[1]._padding_ = 0;
      pFVar22 = pFVar9;
    }
    pFVar10 = ::operator_new(0x20);
    pFVar9 = pFVar21;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar22;
      pFVar9 = pFVar10;
    }
    if ((pFVar22 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar11 = FDS_ViewModelContext_MoneyData::StaticStruct();
    *(UScriptStruct **)&pFVar22->DerivedStaticStruct = pUVar11;
    pUVar12 = UDS_ViewModelContextManager::GetInst();
    if (pUVar12 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar9->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_108.Object = pFVar22;
      local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
      UDS_ViewModelContextManager::RegisterContext(pUVar12,&local_108);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
    }
    pFVar22->ViewModelTemplateKey = Data_Money;
    *(EDS_MoneyType *)&pFVar22[1]._padding_ = (*(FDS_MoneyBaseTableRow **)FVar20.Data)->ID;
    if (0 < ((*(FDS_MoneyBaseTableRow **)FVar20.Data)->MoneyDescription).ID) {
      pFVar10 = ::operator_new(0x48);
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
        pFVar10[1].ViewModelName.ComparisonIndex = 0;
        pFVar10[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
        (pFVar10->ViewModelName).ComparisonIndex = 0;
        (pFVar10->ViewModelName).Number = 0;
        pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyTooltipDetector__6B_;
        pFVar10[1]._padding_ = 0;
        *(undefined8 *)&pFVar10[1].DerivedStaticStruct = 0;
        *(undefined8 *)&pFVar10[1].ViewModelTemplateKey = 0;
        pFVar10[2]._padding_ = 0;
        pFVar21 = pFVar10;
      }
      pTVar13 = ::operator_new(0x20);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyTooltipDetector__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar13[1].SharedReferenceCount = pFVar21;
      }
      if ((pFVar21 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_MoneyTooltipDetector::StaticStruct();
      *(UScriptStruct **)&pFVar21->DerivedStaticStruct = pUVar11;
      pUVar12 = UDS_ViewModelContextManager::GetInst();
      if (pUVar12 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_f8.Object = pFVar21;
        local_f8.SharedReferenceCount.ReferenceController = pTVar13;
        UDS_ViewModelContextManager::RegisterContext(pUVar12,&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
      }
      pFVar21->ViewModelTemplateKey = MoneyTooltipDetector;
      local_1b6 = (*(FDS_MoneyBaseTableRow **)FVar20.Data)->ID;
      TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>::CopyToEmpty<enum_EDS_MoneyType,int>
                (pFVar21 + 1,&local_1b6,1,(int)((atomic<int> *)&pFVar21[1].DerivedStaticStruct)[1]);
      *(undefined1 *)&pFVar21[1].ViewModelName.ComparisonIndex.Value = 2;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.Object = pFVar21;
      local_e8.SharedReferenceCount.ReferenceController = pTVar13;
      UDS_UserObjectListItem::AddContext(this_00,&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
    if (pFVar9 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar9->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_d8.Object = pFVar22;
    local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
    UDS_UserObjectListItem::AddContext(this_00,&local_d8);
    iVar6 = (*(FDS_MoneyBaseTableRow **)FVar20.Data)->VisibleSection;
    if (iVar6 == 1) {
      local_168 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      TVar18.DebugPtr = (UDS_UserObjectListItem *)&local_168;
      pFVar17 = &local_190->EntryBindingEventField_Coin_Section1;
LAB_14bf79f75:
      FDS_EntryBindingEventField::Add(pFVar17,(TObjectPtr<UDS_UserObjectListItem>)TVar18);
      pFVar17 = local_1a0;
    }
    else if (iVar6 == 2) {
      local_170 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar17 = local_1a0;
      FDS_EntryBindingEventField::Add(local_1a0,(TObjectPtr<UDS_UserObjectListItem>)&local_170);
    }
    else {
      pFVar17 = local_1a0;
      if (iVar6 == 3) {
        local_178 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        TVar18.DebugPtr = (UDS_UserObjectListItem *)&local_178;
        pFVar17 = &local_190->EntryBindingEventField_Coin_Section3;
        goto LAB_14bf79f75;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar9);
    uVar15 = local_1a8 & 0xffffffff;
    FVar20.Data = FVar20.Data + 8;
    uVar19 = (ulonglong)local_198;
  } while( true );
}

// SetOpenAnimation @ 14bf7c880

void __thiscall UDS_VM_TotalMenu_PlayerInfo::SetOpenAnimation(UDS_VM_TotalMenu_PlayerInfo *this)

{
  FName local_18;
  int local_10;
  
  (this->OpenAnimationEventField).AnimationName = this->OpenAnimationName;
  (this->OpenAnimationEventField).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::OpenAnimationEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OpenAnimationEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSection2Visibility @ 14bf7d490

void __thiscall
UDS_VM_TotalMenu_PlayerInfo::SetSection2Visibility
          (UDS_VM_TotalMenu_PlayerInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->Section2Visibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::Section2Visibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Section2Visibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSection3Visibility @ 14bf7d4d0

void __thiscall
UDS_VM_TotalMenu_PlayerInfo::SetSection3Visibility
          (UDS_VM_TotalMenu_PlayerInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->Section3Visibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::Section3Visibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Section3Visibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetStatus @ 14bf7e060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_TotalMenu_PlayerInfo::SetStatus(UDS_VM_TotalMenu_PlayerInfo *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_00;
  UDS_CharStatusData *this_01;
  UDS_UserObjectListItem *this_02;
  ulonglong uVar12;
  FDS_ViewModelContext *pFVar13;
  ForAnyElementType FVar14;
  UDS_VM_TotalMenu_PlayerInfo *pUVar15;
  FDS_ViewModelContext *pFVar16;
  float fVar17;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8;
  undefined1 local_1c7;
  FIdentityFunctor local_1c6 [6];
  ForAnyElementType local_1c0;
  uint local_1b8;
  int local_1b4;
  UDS_VM_TotalMenu_PlayerInfo *local_1b0;
  FWeakObjectPtr local_1a8;
  TArray<FDS_StatusTableRow_const_*,TSizedDefaultAllocator<32>_> local_1a0;
  UDS_UserObjectListItem *local_190;
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1b0 = this;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Status);
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharStatusData::GetData((ulong64)&local_1a8);
  bVar6 = FWeakObjectPtr::IsValid(&local_1a8);
  if (bVar6) {
    FDS_StatusTableRow::GetAll(&local_1a0);
    iVar5 = local_1a0.ArrayNum;
    pFVar16 = (FDS_ViewModelContext *)0x0;
    local_1b8 = 0;
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b4 = 0;
    pFVar1 = local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayNum * 8;
    pFVar13 = pFVar16;
    FVar14.Data = local_1a0.AllocatorInstance.Data;
    while( true ) {
      if (local_1a0.ArrayNum != iVar5) {
        local_1c8 = 0;
        `TCheckedPointerIterator<FDS_StatusTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1c8);
        pFVar13 = (FDS_ViewModelContext *)(ulonglong)local_1b8;
      }
      iVar7 = (int)pFVar13;
      if (FVar14.Data == pFVar1) break;
      if ((*(longlong *)FVar14.Data != 0) && (0 < *(int *)(*(longlong *)FVar14.Data + 0x8c))) {
        if (iVar7 == local_1b4) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_1c0,&local_1b4);
        }
        local_1b8 = iVar7 + 1;
        *(longlong *)(local_1c0.Data + (longlong)iVar7 * 8) = *(longlong *)FVar14.Data;
        pFVar13 = (FDS_ViewModelContext *)(ulonglong)local_1b8;
      }
      FVar14.Data = FVar14.Data + 8;
    }
    AlgoImpl::
    StableSortInternal<FDS_StatusTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_StatusTableRow_const_*,_UDS_VM_TotalMenu_PlayerInfo::SetStatus_::__l2::<lambda_1>_>_>
              ((FDS_StatusTableRow **)local_1c0.Data,iVar7,local_1c6[0],(<lambda_1> *)local_1c6);
    uVar4 = local_1b8;
    uVar12 = (ulonglong)(int)local_1b8;
    pFVar1 = local_1c0.Data + uVar12 * 8;
    pUVar15 = local_1b0;
    FVar14.Data = local_1c0.Data;
    while( true ) {
      if ((uint)uVar12 != uVar4) {
        local_1c7 = 0;
        `TCheckedPointerIterator<FDS_StatusTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1c7);
      }
      if (FVar14.Data == pFVar1) break;
      pFVar9 = ::operator_new(0x50);
      pFVar13 = pFVar16;
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar9->ViewModelTemplateKey = 0;
        pFVar9[1]._padding_ = 0;
        pFVar9[1].ViewModelTemplateKey = None;
        *(undefined2 *)&pFVar9[2].DerivedStaticStruct = 0;
        *(undefined4 *)&((atomic<int> *)&pFVar9[2].DerivedStaticStruct)->field_0x2 = 0;
        *(undefined2 *)&((atomic<int> *)&pFVar9[2].DerivedStaticStruct)[1].field_0x2 = 0;
        *(undefined8 *)&pFVar9->DerivedStaticStruct = 0;
        (pFVar9->ViewModelName).ComparisonIndex = 0;
        (pFVar9->ViewModelName).Number = 0;
        pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_StatusUpgradeInfo__6B_;
        *(undefined8 *)&pFVar9[1].DerivedStaticStruct = 0;
        pFVar9[1].ViewModelName.ComparisonIndex = 0;
        pFVar9[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar9[1].field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar9[2]._padding_ + 4) = 0;
        pFVar13 = pFVar9;
      }
      pFVar10 = ::operator_new(0x20);
      pFVar9 = pFVar16;
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        pFVar10->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_StatusUpgradeInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar13;
        pFVar9 = pFVar10;
      }
      if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_StatusUpgradeInfo::StaticStruct();
      *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar11;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar9 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar9->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_178.Object = pFVar13;
        local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_178);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
      }
      pFVar13->ViewModelTemplateKey = W_StatusUpgradeInfo;
      *(int *)&pFVar13[1]._padding_ = (*(FDS_StatusTableRow **)FVar14.Data)->ID_StatusIcon;
      *(long64 *)&pFVar13[1].DerivedStaticStruct =
           ((*(FDS_StatusTableRow **)FVar14.Data)->ID_StatusName).ID;
      uVar3 = *(undefined4 *)
               ((longlong)&((*(FDS_StatusTableRow **)FVar14.Data)->ID_StatusDesc).ID + 4);
      pFVar13[1].ViewModelName.ComparisonIndex =
           (FNameEntryId)*(undefined4 *)&((*(FDS_StatusTableRow **)FVar14.Data)->ID_StatusDesc).ID;
      pFVar13[1].ViewModelName.Number = uVar3;
      *(undefined1 *)&pFVar13[1].ViewModelTemplateKey = None;
      this_01 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_1a8);
      fVar17 = UDS_CharStatusData::GetMaxStatus(this_01,(*(FDS_StatusTableRow **)FVar14.Data)->ID);
      *(int *)&pFVar13[2]._padding_ = (int)fVar17;
      *(EDS_InfoViewValueFormat *)&pFVar13[2].DerivedStaticStruct =
           (*(FDS_StatusTableRow **)FVar14.Data)->InfoViewValueFormat;
      this_02 = NewObject<UDS_UserObjectListItem>((UObject *)local_1b0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_02 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar9->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_168.Object = pFVar13;
      local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
      UDS_UserObjectListItem::AddContext(this_02,&local_168);
      local_190 = this_02;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_02 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      pUVar15 = local_1b0;
      FDS_EntryBindingEventField::Add
                (&local_1b0->EntryBindingEventField_Status,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_190);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar9);
      uVar12 = (ulonglong)local_1b8;
      FVar14.Data = FVar14.Data + 8;
    }
    local_180 = FFieldNotificationClassDescriptor::EntryBindingEventField_Status.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::EntryBindingEventField_Status.FieldName;
    (**(code **)(pUVar15->_padding_ + 0x38))(&pUVar15->_padding_,&local_188);
    if (local_1c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
    if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
  }
  else {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_TotalMenu_PlayerInfo::SetStatus",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0xae,L"charStatusData is Invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5880203896336416593>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\TotalMenu\\DS_VM_TotalMenu_PlayerInfo.cpp"
                       ,0xaf,"false");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SetWidgetSwitcherIndex @ 14bf82360

void __thiscall
UDS_VM_TotalMenu_PlayerInfo::SetWidgetSwitcherIndex(UDS_VM_TotalMenu_PlayerInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->WidgetSwitcherIndex = *param_1;
  local_10 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf85770

void __thiscall UDS_VM_TotalMenu_PlayerInfo::UnbindModel(UDS_VM_TotalMenu_PlayerInfo *this)

{
  UDS_TotalMenuEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_TotalMenuEvent::GetEvent();
  if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClickPlayerInfoTab,
               this);
    return;
  }
  return;
}

