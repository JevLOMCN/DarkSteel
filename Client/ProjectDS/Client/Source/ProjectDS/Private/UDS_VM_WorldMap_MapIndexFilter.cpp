// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// SetOpenMapIndexFilterList_WrapperImpl @ 14b70a0d0

void __cdecl
UDS_VM_WorldMap_MapIndexFilter::SetOpenMapIndexFilterList_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_WorldMapEvent *pUVar2;
  
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->IndexFilterIsOpenNotifyDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->IndexFilterIsOpenNotifyDelegate).Delegate,true);
    }
    FDS_EventDelegate<enum_EDS_LeftMenuType_const_>::Broadcast
              (&pUVar2->WorldMapLeftUITypeDelegate,MAPINDEX);
  }
  OpenMapIndexFilterList_UI(param_1);
  return;
}

// SetCloseMapIndexFilterList_WrapperImpl @ 14b70a0e0

void __cdecl
UDS_VM_WorldMap_MapIndexFilter::SetCloseMapIndexFilterList_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_WorldMapEvent *pUVar2;
  
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->IndexFilterIsOpenNotifyDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->IndexFilterIsOpenNotifyDelegate).Delegate,false);
    }
  }
  CloseMapIndexFilterList_UI(param_1);
  return;
}

// SetAnimationFinishedEvent_WrapperImpl @ 14b70a0f0

void __cdecl
UDS_VM_WorldMap_MapIndexFilter::SetAnimationFinishedEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName *pFVar1;
  FName FStackX_8;
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x1a0) = 1;
  pFVar1 = ::FName::FName(&FStackX_8,"End_Ani");
  if (*(FName *)param_2 == *pFVar1) {
    *(undefined1 *)((longlong)param_1 + 0x170) = 1;
    iStack_10 = FFieldNotificationClassDescriptor::MapIndexVisibility.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::MapIndexVisibility.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b70a100

UClass * __cdecl UDS_VM_WorldMap_MapIndexFilter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_MapIndexFilter",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_MapIndexFilter,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_MapIndexFilter>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_MapIndexFilter>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter.InnerSingleton;
}

// UDS_VM_WorldMap_MapIndexFilter @ 14b711c80

UDS_VM_WorldMap_MapIndexFilter * __thiscall
UDS_VM_WorldMap_MapIndexFilter::UDS_VM_WorldMap_MapIndexFilter
          (UDS_VM_WorldMap_MapIndexFilter *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->MapIndexVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_MapIndexFilter__6B_;
  *(undefined8 *)&(this->OpenMapIndexFilterList).Delegate = 0;
  *(undefined8 *)&(this->OpenMapIndexFilterList).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OpenMapIndexFilterList).Delegate.field_0x10 = 0;
  (this->CloseMapIndexFilterList)._padding_ = '\0';
  (this->CloseMapIndexFilterList).bIsCustomSelected = false;
  (this->CloseMapIndexFilterList).bIsLacked = false;
  (this->CloseMapIndexFilterList).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CloseMapIndexFilterList).Delegate = 0;
  *(undefined8 *)&(this->CloseMapIndexFilterList).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CloseMapIndexFilterList).Delegate.field_0x10 = 0;
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
  (this->AnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishedEvent).AnimationName.Number = 0;
  (this->AnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishedEvent).AnimationEventType = None;
  (this->AnimationFinishedEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->MapIndexFilterListSwitcherIndex = 0;
  (this->EntryBindingEventField_MapIndexList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MapIndexList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MapIndexList).UserObjectList.ArrayMax = 0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  this->MapIndexCategoryTypeMaxValue = 0;
  this->CurMapIndexCategoryType = 0;
  this->CurSelectedIndex = 0;
  this->LastListIndex = 0;
  (this->OpenMapIndexFilterList)._padding_ = '\0';
  (this->OpenMapIndexFilterList).bIsCustomSelected = false;
  (this->OpenMapIndexFilterList).bIsLacked = false;
  (this->OpenMapIndexFilterList).bIsCustomDisabled = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  this->IsMapindeFilterAniFinished = true;
  return this;
}

// UDS_VM_WorldMap_MapIndexFilter @ 14b711dc0

UDS_VM_WorldMap_MapIndexFilter * __thiscall
UDS_VM_WorldMap_MapIndexFilter::UDS_VM_WorldMap_MapIndexFilter
          (UDS_VM_WorldMap_MapIndexFilter *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->MapIndexVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_MapIndexFilter__6B_;
  *(undefined8 *)&(this->OpenMapIndexFilterList).Delegate = 0;
  *(undefined8 *)&(this->OpenMapIndexFilterList).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OpenMapIndexFilterList).Delegate.field_0x10 = 0;
  (this->CloseMapIndexFilterList)._padding_ = '\0';
  (this->CloseMapIndexFilterList).bIsCustomSelected = false;
  (this->CloseMapIndexFilterList).bIsLacked = false;
  (this->CloseMapIndexFilterList).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CloseMapIndexFilterList).Delegate = 0;
  *(undefined8 *)&(this->CloseMapIndexFilterList).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CloseMapIndexFilterList).Delegate.field_0x10 = 0;
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
  (this->AnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishedEvent).AnimationName.Number = 0;
  (this->AnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishedEvent).AnimationEventType = None;
  (this->AnimationFinishedEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->MapIndexFilterListSwitcherIndex = 0;
  (this->EntryBindingEventField_MapIndexList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MapIndexList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MapIndexList).UserObjectList.ArrayMax = 0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  this->MapIndexCategoryTypeMaxValue = 0;
  this->CurMapIndexCategoryType = 0;
  this->CurSelectedIndex = 0;
  this->LastListIndex = 0;
  (this->OpenMapIndexFilterList)._padding_ = '\0';
  (this->OpenMapIndexFilterList).bIsCustomSelected = false;
  (this->OpenMapIndexFilterList).bIsLacked = false;
  (this->OpenMapIndexFilterList).bIsCustomDisabled = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  this->IsMapindeFilterAniFinished = true;
  return this;
}

// ~UDS_VM_WorldMap_MapIndexFilter @ 14b7136f0

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::~UDS_VM_WorldMap_MapIndexFilter
          (UDS_VM_WorldMap_MapIndexFilter *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_MapIndexFilter__6B_;
  pFVar1 = (this->EntryBindingEventField_MapIndexList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishedEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishedEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->AnimationFinishedEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CloseMapIndexFilterList).Delegate)
  ;
  pvVar2 = *(void **)&(this->CloseMapIndexFilterList).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CloseMapIndexFilterList).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OpenMapIndexFilterList).Delegate);
  pvVar2 = *(void **)&(this->OpenMapIndexFilterList).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OpenMapIndexFilterList).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716d70

IClassDescriptor * __thiscall
UDS_VM_WorldMap_MapIndexFilter::GetFieldNotificationDescriptor(UDS_VM_WorldMap_MapIndexFilter *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_MapIndexFilter::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b718010

UClass * __cdecl UDS_VM_WorldMap_MapIndexFilter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_MapIndexFilter",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_MapIndexFilter,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_MapIndexFilter>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_MapIndexFilter>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_MapIndexFilter.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMap_MapIndexFilter @ 14b718ac0

void __cdecl
UDS_VM_WorldMap_MapIndexFilter::StaticRegisterNativesUDS_VM_WorldMap_MapIndexFilter(void)

{
  return;
}

// BindModel @ 14c06c4c0

void __thiscall UDS_VM_WorldMap_MapIndexFilter::BindModel(UDS_VM_WorldMap_MapIndexFilter *this)

{
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 TVar1;
  UDS_UIEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  UDS_WorldMapEvent *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res10;
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 local_res18 [2];
  ulonglong uStack_50;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    TVar1 = (TObjectPtr<UDS_VM_Common_TabGroup>_u_0)(this->TabGroup).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                        ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar2->OnSelectedTabIndex).Subscriptions,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_MapIndexFilter>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )this_00,(UDS_VM_WorldMap_MapIndexFilter *)&local_res18[0].ObjectPtr,
               (pmf_dc779e5c *)this);
  }
  pUVar3 = UDS_WorldMapEvent::GetEvent();
  if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->IndexFilterToggle,this
              );
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_MapIndexFilter>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->IndexFilterToggle,(UDS_VM_WorldMap_MapIndexFilter *)&local_res10,
               (pmf_91b631c6 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->IndexFilterSlotIndexChangeDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_MapIndexFilter>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar3->IndexFilterSlotIndexChangeDelegate,
               (UDS_VM_WorldMap_MapIndexFilter *)&local_res10,(pmf_3f382daa *)this);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar3->CurIndexFilterQueryDelegate);
    uStack_50 = uStack_50 & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar3->CurIndexFilterQueryDelegate,(FWriteAccessScope *)&local_48);
    local_30 = &(pUVar3->CurIndexFilterQueryDelegate).Delegate.field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMap_MapIndexFilter____A6AHXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_WorldMap_MapIndexFilter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res10 = (FWeakObjectPtr)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_WorldMap_MapIndexFilter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res10);
      puVar4[4] = OnGetCurSelectedIndexFilter;
      puVar4[5] = uStack_50;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->WorldMapLeftUITypeDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_LeftMenuType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_MapIndexFilter>
              (&pUVar3->WorldMapLeftUITypeDelegate,(UDS_VM_WorldMap_MapIndexFilter *)&local_res10,
               (pmf_eeca23a6 *)this);
  }
  return;
}

// ChangedMapIndexFilterListSwitcherIndex @ 14c06e240

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::ChangedMapIndexFilterListSwitcherIndex
          (UDS_VM_WorldMap_MapIndexFilter *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->MapIndexFilterListSwitcherIndex = param_1;
  local_10 = FFieldNotificationClassDescriptor::MapIndexFilterListSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MapIndexFilterListSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// CloseMapIndexFilterList_UI @ 14c06f160

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::CloseMapIndexFilterList_UI(UDS_VM_WorldMap_MapIndexFilter *this)

{
  FName *pFVar1;
  FName local_res8;
  FName local_18;
  int local_10;
  
  if (this->IsMapindeFilterAniFinished != false) {
    this->IsMapindeFilterAniFinished = false;
    pFVar1 = ::FName::FName(&local_res8,"End_Ani");
    (this->AnimationEvent).AnimationName = *pFVar1;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->MapIndexFilterListSwitcherIndex = 0;
    local_10 = FFieldNotificationClassDescriptor::MapIndexFilterListSwitcherIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MapIndexFilterListSwitcherIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// InitViewModel @ 14c08c7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_MapIndexFilter::InitViewModel(UDS_VM_WorldMap_MapIndexFilter *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_Common_TabGroup *pUVar3;
  longlong *plVar4;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  undefined1 local_b8 [128];
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((this->TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    local_38 = (undefined1 *)0x0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar1);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_Transient;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar3 = (UDS_VM_Common_TabGroup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar4 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_Common_TabGroup *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->TabGroup).field0_0x0.DebugPtr = pUVar3;
  }
  local_38 = &DAT_706050403020100;
  local_30 = 0xb0a0908;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0xc;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0xc,0,&local_c8,0xc,&local_bc);
  memcpy(local_c8.Data,&local_38,0xc);
  this->MapIndexCategoryTypeMaxValue = local_c0;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  this->CurMapIndexCategoryType = 1;
  return;
}

// OnAnimationFinished @ 14c091f90

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::OnAnimationFinished
          (UDS_VM_WorldMap_MapIndexFilter *this,FDS_WidgetAnimationEventField *param_1)

{
  FName *pFVar1;
  FName local_res8;
  FName local_18;
  int local_10;
  
  this->IsMapindeFilterAniFinished = true;
  pFVar1 = ::FName::FName(&local_res8,"End_Ani");
  if (param_1->AnimationName == *pFVar1) {
    this->MapIndexVisibility = Collapsed;
    local_10 = FFieldNotificationClassDescriptor::MapIndexVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MapIndexVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnCloseMapIndexFilterList @ 14c093850

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::OnCloseMapIndexFilterList
          (UDS_VM_WorldMap_MapIndexFilter *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_WorldMapEvent *pUVar2;
  
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->IndexFilterIsOpenNotifyDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->IndexFilterIsOpenNotifyDelegate).Delegate,false);
    }
  }
  CloseMapIndexFilterList_UI(this);
  return;
}

// OnGetCurSelectedIndexFilter @ 14c095760

int __thiscall
UDS_VM_WorldMap_MapIndexFilter::OnGetCurSelectedIndexFilter(UDS_VM_WorldMap_MapIndexFilter *this)

{
  return this->CurMapIndexCategoryType;
}

// OnItemSelectedChange @ 14c096530

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::OnItemSelectedChange
          (UDS_VM_WorldMap_MapIndexFilter *this,bool param_1)

{
  int iVar1;
  UDS_WorldMapEvent *pUVar2;
  
  if (param_1) {
    iVar1 = this->CurSelectedIndex + -1;
    this->CurSelectedIndex = iVar1;
    if (iVar1 < 0) {
      this->CurSelectedIndex = 0;
    }
  }
  else {
    iVar1 = this->CurSelectedIndex + 1;
    this->CurSelectedIndex = iVar1;
    if (this->LastListIndex < iVar1) {
      this->CurSelectedIndex = this->LastListIndex;
    }
  }
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar2->MapIndexFilterSoltSelectedIndxDelegate,this->CurSelectedIndex);
    return;
  }
  return;
}

// OnMapIndexFilterListToggle @ 14c096730

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::OnMapIndexFilterListToggle(UDS_VM_WorldMap_MapIndexFilter *this)

{
  bool bVar1;
  UDS_WorldMapEvent *pUVar2;
  bool bVar3;
  
  if (this->IsMapindeFilterAniFinished != false) {
    if (this->MapIndexFilterListSwitcherIndex == 0) {
      bVar3 = true;
      OpenMapIndexFilterList_UI(this);
      pUVar2 = UDS_WorldMapEvent::GetEvent();
      if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
        FDS_EventDelegate<enum_EDS_LeftMenuType_const_>::Broadcast
                  (&pUVar2->WorldMapLeftUITypeDelegate,REGION);
      }
    }
    else {
      bVar3 = false;
      CloseMapIndexFilterList_UI(this);
    }
    pUVar2 = UDS_WorldMapEvent::GetEvent();
    if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar2->IndexFilterIsOpenNotifyDelegate);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar2->IndexFilterIsOpenNotifyDelegate).Delegate,bVar3);
      }
    }
  }
  return;
}

// OnOpenMapIndexFilterList @ 14c097f20

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::OnOpenMapIndexFilterList
          (UDS_VM_WorldMap_MapIndexFilter *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_WorldMapEvent *pUVar2;
  
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->IndexFilterIsOpenNotifyDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->IndexFilterIsOpenNotifyDelegate).Delegate,true);
    }
    FDS_EventDelegate<enum_EDS_LeftMenuType_const_>::Broadcast
              (&pUVar2->WorldMapLeftUITypeDelegate,MAPINDEX);
  }
  OpenMapIndexFilterList_UI(this);
  return;
}

// OnSelectedTabIndex @ 14c099370

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::OnSelectedTabIndex
          (UDS_VM_WorldMap_MapIndexFilter *this,int param_1,int param_2)

{
  UDS_WorldMapEvent *pUVar1;
  int local_res10 [6];
  
  this->CurMapIndexCategoryType = param_1 + 1;
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    local_res10[0] = 1;
    FDS_FilteredEventDelegate<int_const_,int>::Broadcast
              (&pUVar1->CurIndexFilterDelegate,local_res10,this->CurMapIndexCategoryType);
  }
  UpdateMapIndexItemList(this);
  return;
}

// OnSetViewModel @ 14c099f50

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::OnSetViewModel
          (UDS_VM_WorldMap_MapIndexFilter *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UpdateCategoryList(this);
  UpdateMapIndexItemList(this);
  this->MapIndexFilterListSwitcherIndex = 0;
  local_10 = FFieldNotificationClassDescriptor::MapIndexFilterListSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MapIndexFilterListSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->MapIndexVisibility = Collapsed;
  local_10 = FFieldNotificationClassDescriptor::MapIndexVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MapIndexVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnWorldMapLeftUITypeCallBack @ 14c09e550

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::OnWorldMapLeftUITypeCallBack
          (UDS_VM_WorldMap_MapIndexFilter *this,EDS_LeftMenuType param_1)

{
  FName local_18;
  int local_10;
  
  if ((param_1 == REGION) || (param_1 == MARKER)) {
    this->MapIndexVisibility = Collapsed;
    local_10 = FFieldNotificationClassDescriptor::MapIndexVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MapIndexVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OpenMapIndexFilterList_UI @ 14c09e5a0

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::OpenMapIndexFilterList_UI(UDS_VM_WorldMap_MapIndexFilter *this)

{
  FName *pFVar1;
  FName local_res8;
  FName local_18;
  int local_10;
  
  if (this->IsMapindeFilterAniFinished != false) {
    this->IsMapindeFilterAniFinished = false;
    this->MapIndexVisibility = SelfHitTestInvisible;
    pFVar1 = ::FName::FName(&local_res8,"Open_Ani");
    (this->AnimationEvent).AnimationName = *pFVar1;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::MapIndexVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MapIndexVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->MapIndexFilterListSwitcherIndex = 1;
    local_10 = FFieldNotificationClassDescriptor::MapIndexFilterListSwitcherIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MapIndexFilterListSwitcherIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14c0adc60

void __thiscall UDS_VM_WorldMap_MapIndexFilter::UnbindModel(UDS_VM_WorldMap_MapIndexFilter *this)

{
  UDS_UIEvent *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
    Remove<UDS_VM_WorldMap_MapIndexFilter>(&pUVar1->OnSelectedTabIndex,this);
  }
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->IndexFilterToggle,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->IndexFilterSlotIndexChangeDelegate,this);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar2->CurIndexFilterQueryDelegate);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->WorldMapLeftUITypeDelegate,this);
  }
  return;
}

// UpdateCategoryList @ 14c0aec50

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::UpdateCategoryList(UDS_VM_WorldMap_MapIndexFilter *this)

{
  UDS_VM_Common_TabGroup *this_00;
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  EDS_StringTableType EVar3;
  long64 lVar4;
  FName FVar5;
  FDateTime FVar6;
  FTimespan FVar7;
  EDS_TimeExpression EVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  uint uVar11;
  FDS_ViewModelContext *pFVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *this_01;
  UEnum *this_02;
  FName *pFVar14;
  int iVar15;
  longlong *plVar16;
  FDS_ViewModelContext *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  FName local_res10;
  TReferenceControllerBase<1> *local_res18;
  FName local_res20;
  ForAnyElementType local_120;
  undefined8 local_118;
  TObjectPtr<UField>_u_0 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  FDS_Text local_f8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  FString local_98;
  FString local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FName local_68;
  FString local_60 [2];
  
  if ((this->TabGroup).field0_0x0.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
    pFVar12 = ::operator_new(0x48);
    pFVar17 = (FDS_ViewModelContext *)0x0;
    if (pFVar12 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar12->ViewModelTemplateKey = 0;
      *(undefined4 *)((longlong)&pFVar12[1]._padding_ + 4) = 0;
      *(undefined4 *)((longlong)&pFVar12[2]._padding_ + 4) = 0;
      pFVar12->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar12->ViewModelName).ComparisonIndex = 0;
      (pFVar12->ViewModelName).Number = 0;
      pFVar12->_padding_ = (longlong)&___7FDS_ViewModelContext_TabGroup__6B_;
      *(undefined4 *)&pFVar12[1]._padding_ = 0;
      pFVar12[1].DerivedStaticStruct = (UStruct *)0x0;
      pFVar12[1].ViewModelName.ComparisonIndex = 0;
      pFVar12[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar12[1].ViewModelTemplateKey = 0;
      *(undefined4 *)&pFVar12[2]._padding_ = 0;
      pFVar17 = pFVar12;
    }
    local_res18 = ::operator_new(0x20);
    if (local_res18 == (TReferenceControllerBase<1> *)0x0) {
      local_res18 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_res18->SharedReferenceCount = (atomic<int>)0x1;
      local_res18[1]._padding_ = (longlong)ViewModelContextDeleter;
      local_res18->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TabGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      local_res18->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&local_res18[1].SharedReferenceCount = pFVar17;
    }
    pTVar2 = local_res18;
    if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar13 = FDS_ViewModelContext_TabGroup::StaticStruct();
    pFVar17->DerivedStaticStruct = (UStruct *)pUVar13;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a8.Object = pFVar17;
      local_a8.SharedReferenceCount.ReferenceController = pTVar2;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
    }
    pFVar17->ViewModelTemplateKey = CommonTabGroup;
    *(undefined4 *)&pFVar17[1]._padding_ = 0;
    uVar19 = 1;
    do {
      this_02 = StaticEnum<enum_EDS_MapIndexCategoryType>();
      if (this_02 == (UEnum *)0x0) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8627520946023956263>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",
                            0xd9,"false");
        if (bVar10) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
      }
      else {
        UEnum::GetNameStringByValue(this_02,local_60,uVar19 & 0xff);
        local_res20 = (FName)this_02->_padding_;
        ::FName::ToString(&local_res20,&local_88);
        ::FString::PrintfImpl(&local_98,L"%s_%s");
        iVar15 = local_98.Data.ArrayNum + -1;
        if (local_98.Data.ArrayNum == 0) {
          iVar15 = 0;
        }
        pFVar14 = ::FName::FName(&local_68,iVar15,(wchar_t *)local_98.Data.AllocatorInstance.Data,
                                 FNAME_Add);
        local_res10 = *pFVar14;
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      local_f8.StringTableType = None;
      local_f8.StringTableID = 0;
      local_f8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_f8.StringEnumTableNameID.Number = 0;
      local_f8.DateTime.Ticks = 0;
      local_f8.TimeSpan.Ticks = 0;
      local_f8.TimeExpressionType = None;
      local_f8.IsExpression = false;
      local_f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.UniqueString.Data.ArrayNum = 0;
      local_f8.UniqueString.Data.ArrayMax = 0;
      local_f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.FormatArgs.ArrayNum = 0;
      local_f8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringEnumTable(&local_f8,&local_res10);
      FVar9.Data = local_f8.UniqueString.Data.AllocatorInstance.Data;
      bVar10 = local_f8.IsExpression;
      EVar8 = local_f8.TimeExpressionType;
      FVar7.Ticks = local_f8.TimeSpan.Ticks;
      FVar6.Ticks = local_f8.DateTime.Ticks;
      FVar5 = local_f8.StringEnumTableNameID;
      lVar4 = local_f8.StringTableID;
      EVar3 = local_f8.StringTableType;
      lVar18 = (longlong)local_f8.UniqueString.Data.ArrayNum;
      local_120.Data = (FScriptContainerElement *)0x0;
      local_118 = CONCAT44(local_118._4_4_,local_f8.UniqueString.Data.ArrayNum);
      if (local_f8.UniqueString.Data.ArrayNum == 0) {
        local_118 = local_f8.UniqueString.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_f8.UniqueString.Data.ArrayNum,0,&local_120,
                   local_f8.UniqueString.Data.ArrayNum,(int *)((longlong)&local_118 + 4));
        memcpy(local_120.Data,FVar9.Data,lVar18 * 2);
      }
      FVar9.Data = local_f8.FormatArgs.AllocatorInstance.Data;
      iVar15 = local_f8.FormatArgs.ArrayNum;
      local_110.DebugPtr = (UField *)0x0;
      local_108 = CONCAT44(local_108._4_4_,local_f8.FormatArgs.ArrayNum);
      if (local_f8.FormatArgs.ArrayNum == 0) {
        local_108 = local_f8.FormatArgs._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,local_f8.FormatArgs.ArrayNum,0,(ForAnyElementType *)&local_110.ObjectPtr,
                   local_f8.FormatArgs.ArrayNum,(int *)((longlong)&local_108 + 4));
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                  (local_110.DebugPtr,(FDS_TextFormatArg *)FVar9.Data,iVar15);
      }
      local_100 = 0;
      local_fe = 0;
      uVar11 = pFVar17[1].ViewModelName.ComparisonIndex.Value;
      if (uVar11 == pFVar17[1].ViewModelName.Number) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,(ForAnyElementType *)&pFVar17[1].DerivedStaticStruct,
                            (int *)&pFVar17[1].ViewModelName.Number);
      }
      pFVar17[1].ViewModelName.ComparisonIndex.Value = uVar11 + 1;
      plVar16 = &(pFVar17[1].DerivedStaticStruct)->_padding_ + (longlong)(int)uVar11 * 0xc;
      *(undefined4 *)plVar16 = 0xffffffff;
      *(undefined4 *)((longlong)plVar16 + 4) = 0xffffffff;
      *(EDS_StringTableType *)(plVar16 + 1) = EVar3;
      plVar16[2] = lVar4;
      *(FName *)(plVar16 + 3) = FVar5;
      plVar16[4] = FVar6.Ticks;
      plVar16[5] = FVar7.Ticks;
      *(EDS_TimeExpression *)(plVar16 + 6) = EVar8;
      plVar16[7] = 0;
      *(bool *)((longlong)plVar16 + 0x34) = bVar10;
      plVar16[7] = (longlong)local_120.Data;
      local_120.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&((TObjectPtr<UStruct> *)(plVar16 + 8))->field0_0x0 = (undefined4)local_118;
      *(undefined4 *)((longlong)plVar16 + 0x44) = local_118._4_4_;
      local_118 = 0;
      *(TObjectPtr<UField>_u_0 *)(plVar16 + 9) = (TObjectPtr<UField>_u_0)0x0;
      *(TObjectPtr<UField>_u_0 *)(plVar16 + 9) = local_110;
      local_110.DebugPtr = (UField *)0x0;
      *(undefined4 *)(plVar16 + 10) = (undefined4)local_108;
      *(undefined4 *)((longlong)plVar16 + 0x54) = local_108._4_4_;
      local_108 = 0;
      *(undefined1 *)(plVar16 + 0xb) = (undefined1)local_100;
      *(undefined1 *)((longlong)plVar16 + 0x59) = local_100._1_1_;
      *(undefined1 *)((longlong)plVar16 + 0x5a) = local_fe;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_110.DebugPtr != (UField *)0x0) {
        FMemory::Free(local_110.DebugPtr);
      }
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_f8.FormatArgs.AllocatorInstance.Data,
                 local_f8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_f8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_f8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.UniqueString.Data.AllocatorInstance.Data);
      }
      pTVar2 = local_res18;
      uVar11 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar11;
    } while ((int)uVar11 < 0xc);
    pFVar17[1].ViewModelTemplateKey = W_CheatKeyBtn;
    *(undefined4 *)&pFVar17[1].field_0x1c = 0x4e25;
    *(undefined4 *)&pFVar17[2]._padding_ = 0x4e26;
    this_00 = (this->TabGroup).field0_0x0.DebugPtr;
    local_78.SharedReferenceCount.ReferenceController = local_res18;
    if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res18->SharedReferenceCount = (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = pFVar17;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// UpdateMapIndexItemList @ 14c0af4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_MapIndexFilter::UpdateMapIndexItemList(UDS_VM_WorldMap_MapIndexFilter *this)

{
  EDS_MapIndexCategoryType EVar1;
  FDS_MapIndexGroupTableRow *this_00;
  code *pcVar2;
  FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UDS_UserObjectListItem *this_01;
  UDS_WorldMapLocalSave *pUVar8;
  FDS_StringBaseTableRow *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FSharedReferencer<1> FVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_248 [32];
  undefined1 local_218 [4];
  int local_214;
  FWeakObjectPtr local_210;
  uint local_208;
  TSharedPtr<FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo,1> local_1f8;
  TArray<FDS_MapIndexGroupTableRow_const_*,TSizedDefaultAllocator<32>_> local_1e8;
  UDS_UserObjectListItem *local_1d8;
  FScriptContainerElement *local_1d0;
  FName local_1c8;
  int local_1c0;
  FDS_Text local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  UDS_WorldMapLocalSave::GetInst();
  bVar5 = FWeakObjectPtr::IsValid(&local_210);
  if (bVar5) {
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_MapIndexList);
    FDS_MapIndexGroupTableRow::GetAll(&local_1e8);
    uVar10 = (ulonglong)local_1e8.ArrayNum;
    iVar11 = 0;
    local_214 = 0;
    this->CurSelectedIndex = 0;
    local_1d0 = local_1e8.AllocatorInstance.Data + uVar10 * 8;
    local_208 = local_1e8.ArrayNum;
    FVar13.Data = local_1e8.AllocatorInstance.Data;
    while( true ) {
      pFVar4 = local_1d0;
      if (local_1e8.ArrayNum != (uint)uVar10) {
        local_218[0] = 0;
        `TCheckedPointerIterator<FDS_MapIndexGroupTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_218);
      }
      if (FVar13.Data == pFVar4) break;
      this_00 = *(FDS_MapIndexGroupTableRow **)FVar13.Data;
      if (((this_00 == (FDS_MapIndexGroupTableRow *)0x0) || (this_00->IsFilterable != true)) ||
         ((EVar1 = (EDS_MapIndexCategoryType)this->CurMapIndexCategoryType, EVar1 != All &&
          (EVar1 != this_00->MapIndexCategoryType)))) {
LAB_14c0af83a:
        uVar10 = (ulonglong)local_208;
        FVar13.Data = FVar13.Data + 8;
      }
      else {
        this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        iVar11 = local_214;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_01 != (UDS_UserObjectListItem *)0x0) goto LAB_14c0af66f;
          goto LAB_14c0af83a;
        }
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14c0af83a;
        UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14c0af66f:
        pUVar8 = (UDS_WorldMapLocalSave *)FWeakObjectPtr::Get(&local_210);
        bVar5 = UDS_WorldMapLocalSave::IsContainMapIndexGroupChecked(pUVar8,this_00->ID);
        MakeContext<FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo>(&local_1f8);
        pFVar3 = local_1f8.Object;
        FVar12.ReferenceController = local_1f8.SharedReferenceCount.ReferenceController;
        iVar11 = local_214;
        if (local_1f8.Object == (FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo *)0x0) {
LAB_14c0af81c:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
          uVar10 = (ulonglong)local_208;
          FVar13.Data = FVar13.Data + 8;
        }
        else {
          if ((local_1f8.Object == (FDS_ViewModelContext_WorldMapIndexFilter_MapIndexInfo *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)&pFVar3->_padding_ = 0x1b7;
          pFVar3->MapIndexGroupID = this_00->ID;
          local_1b8.StringTableType = None;
          local_1b8.StringTableID = 0;
          local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_1b8.StringEnumTableNameID.Number = 0;
          local_1b8.DateTime.Ticks = 0;
          local_1b8.TimeSpan.Ticks = 0;
          local_1b8.TimeExpressionType = None;
          local_1b8.IsExpression = false;
          local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1b8.UniqueString.Data.ArrayNum = 0;
          local_1b8.UniqueString.Data.ArrayMax = 0;
          local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1b8.FormatArgs.ArrayNum = 0;
          local_1b8.FormatArgs.ArrayMax = 0;
          pFVar9 = FDS_MapIndexGroupTableRow::ID_MapIndexGroupNameTable(this_00);
          FDS_Text::SetTextFromStringTable(&local_1b8,pFVar9);
          FDS_Text::operator=(&pFVar3->MapIndexNameText,&local_1b8);
          pFVar3->ListViewIndex = local_214;
          pFVar3->SelectedIndex = this->CurSelectedIndex;
          pUVar8 = (UDS_WorldMapLocalSave *)FWeakObjectPtr::Get(&local_210);
          if (bVar5) {
            bVar5 = UDS_WorldMapLocalSave::GetMapIndexGroupChecked(pUVar8,this_00->ID);
            pFVar3->IsChecked = bVar5;
          }
          else {
            UDS_WorldMapLocalSave::SetMapIndexGroup(pUVar8,this_00->ID);
            pFVar3->IsChecked = true;
          }
          FVar12.ReferenceController = local_1f8.SharedReferenceCount.ReferenceController;
          local_168.Object = (FDS_ViewModelContext *)local_1f8.Object;
          local_168.SharedReferenceCount.ReferenceController =
               local_1f8.SharedReferenceCount.ReferenceController;
          pFVar3->IconID = this_00->MapIndexGroupIcon;
          if (local_1f8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_01,&local_168);
          local_1d8 = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField_MapIndexList,
                     (TObjectPtr<UDS_UserObjectListItem>)&local_1d8);
          iVar11 = local_214 + 1;
          local_214 = iVar11;
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data,
                     local_1b8.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data !=
              (FDS_TextFormatArg *)0x0) {
            FMemory::Free(local_1b8.FormatArgs.AllocatorInstance.Data);
          }
          if (local_1b8.UniqueString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_14c0af81c;
          FMemory::Free(local_1b8.UniqueString.Data.AllocatorInstance.Data);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
          uVar10 = (ulonglong)local_208;
          FVar13.Data = FVar13.Data + 8;
        }
      }
    }
    this->LastListIndex = iVar11 + -1;
    local_1c0 = FFieldNotificationClassDescriptor::EntryBindingEventField_MapIndexList.BitNumber;
    local_1c8 = FFieldNotificationClassDescriptor::EntryBindingEventField_MapIndexList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_WorldMap_MapIndexFilter::UpdateMapIndexItemList",0x36,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x55,L"localSave IsValid = false");
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
  }
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return;
}

