// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 35

// SetEventMouseEnter_WrapperImpl @ 14b70bc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WorldMap_Marker::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  UDS_WorldMapEvent *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  *(undefined1 *)((longlong)param_1 + 0x488) = 1;
  pUVar3 = UDS_WorldMapEvent::GetEvent();
  if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = *(bool *)((longlong)param_1 + 0x488);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->MarkerHoverDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->MarkerHoverDelegate).Delegate,bVar1);
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WorldMap_Marker::OnEventMouseEnter",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,TStack_138.Ptr,0xb1,L"UDS_VM_WorldMap_Marker Hovered = true");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// SetLeaveMouseEnter_WrapperImpl @ 14b70bc80

void __cdecl UDS_VM_WorldMap_Marker::SetLeaveMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  UDS_WorldMapEvent *pUVar3;
  
  *(undefined1 *)((longlong)param_1 + 0x488) = 0;
  pUVar3 = UDS_WorldMapEvent::GetEvent();
  if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = *(bool *)((longlong)param_1 + 0x488);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->MarkerHoverDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->MarkerHoverDelegate).Delegate,bVar1);
    }
  }
  return;
}

// StaticClass @ 14b70bca0

UClass * __cdecl UDS_VM_WorldMap_Marker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_Marker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_Marker",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_Marker.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_Marker,0x4f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMap_Marker>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_Marker>,local_res8,
               UDS_VM_WorldMapIndexBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_Marker.InnerSingleton;
}

// UDS_VM_WorldMap_Marker @ 14b7120a0

UDS_VM_WorldMap_Marker * __thiscall
UDS_VM_WorldMap_Marker::UDS_VM_WorldMap_Marker(UDS_VM_WorldMap_Marker *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this_00;
  TVector2<double> TVar1;
  undefined8 local_res8 [4];
  
  UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->MarkerInfo).Widget;
  *(undefined8 *)&(this->EventMouseEnter).Delegate = 0;
  *(undefined8 *)&(this->EventMouseEnter).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EventMouseEnter).Delegate.field_0x10 = 0;
  (this->LeaveMouseEnter)._padding_ = '\0';
  (this->LeaveMouseEnter).bIsCustomSelected = false;
  (this->LeaveMouseEnter).bIsLacked = false;
  (this->LeaveMouseEnter).bIsCustomDisabled = false;
  *(undefined8 *)&(this->LeaveMouseEnter).Delegate = 0;
  *(undefined8 *)&(this->LeaveMouseEnter).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->LeaveMouseEnter).Delegate.field_0x10 = 0;
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
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->EventMouseEnter)._padding_ = '\0';
  (this->EventMouseEnter).bIsCustomSelected = false;
  (this->EventMouseEnter).bIsLacked = false;
  (this->EventMouseEnter).bIsCustomDisabled = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_Marker__6B_;
  this->IconID = 0;
  this->IsSharedMarker = false;
  this->MarkerIndex = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->Hovered = false;
  this->IsHudShow = false;
  local_res8[0] = 0;
  (this->StartReferencePosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0.Y = 0.0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0.Y = 0.0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0.Y = 0.0;
  (this->MarkerInfo).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->MarkerInfo).key = 0;
  (this->MarkerInfo).Floor = 0;
  (this->MarkerInfo).IslandID = 0;
  (this->MarkerInfo).IndoorGroupID = 0;
  (this->MarkerInfo).SavedScale = 0.0;
  (this->MarkerInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerInfo).Memo.Data.ArrayNum = 0;
  (this->MarkerInfo).Memo.Data.ArrayMax = 0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_VM_WorldMap_Marker @ 14b712210

UDS_VM_WorldMap_Marker * __thiscall
UDS_VM_WorldMap_Marker::UDS_VM_WorldMap_Marker
          (UDS_VM_WorldMap_Marker *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this_00;
  TVector2<double> TVar1;
  undefined8 local_res8 [4];
  
  UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->MarkerInfo).Widget;
  *(undefined8 *)&(this->EventMouseEnter).Delegate = 0;
  *(undefined8 *)&(this->EventMouseEnter).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EventMouseEnter).Delegate.field_0x10 = 0;
  (this->LeaveMouseEnter)._padding_ = '\0';
  (this->LeaveMouseEnter).bIsCustomSelected = false;
  (this->LeaveMouseEnter).bIsLacked = false;
  (this->LeaveMouseEnter).bIsCustomDisabled = false;
  *(undefined8 *)&(this->LeaveMouseEnter).Delegate = 0;
  *(undefined8 *)&(this->LeaveMouseEnter).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->LeaveMouseEnter).Delegate.field_0x10 = 0;
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
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->EventMouseEnter)._padding_ = '\0';
  (this->EventMouseEnter).bIsCustomSelected = false;
  (this->EventMouseEnter).bIsLacked = false;
  (this->EventMouseEnter).bIsCustomDisabled = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_Marker__6B_;
  this->IconID = 0;
  this->IsSharedMarker = false;
  this->MarkerIndex = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->Hovered = false;
  this->IsHudShow = false;
  local_res8[0] = 0;
  (this->StartReferencePosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0.Y = 0.0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0.Y = 0.0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0.Y = 0.0;
  (this->MarkerInfo).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->MarkerInfo).key = 0;
  (this->MarkerInfo).Floor = 0;
  (this->MarkerInfo).IslandID = 0;
  (this->MarkerInfo).IndoorGroupID = 0;
  (this->MarkerInfo).SavedScale = 0.0;
  (this->MarkerInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerInfo).Memo.Data.ArrayNum = 0;
  (this->MarkerInfo).Memo.Data.ArrayMax = 0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_VM_WorldMap_Marker @ 14b7138f0

void __thiscall UDS_VM_WorldMap_Marker::~UDS_VM_WorldMap_Marker(UDS_VM_WorldMap_Marker *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_Marker__6B_;
  pFVar1 = (this->MarkerInfo).Memo.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LeaveMouseEnter).Delegate);
  pvVar2 = *(void **)&(this->LeaveMouseEnter).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LeaveMouseEnter).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->EventMouseEnter).Delegate);
  pvVar2 = *(void **)&(this->EventMouseEnter).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EventMouseEnter).Delegate);
  UDS_VM_WorldMapIndexBase::~UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716e50

IClassDescriptor * __thiscall
UDS_VM_WorldMap_Marker::GetFieldNotificationDescriptor(UDS_VM_WorldMap_Marker *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_Marker::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b718190

UClass * __cdecl UDS_VM_WorldMap_Marker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_Marker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_Marker",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_Marker.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_Marker,0x4f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMap_Marker>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_Marker>,local_res8,
               UDS_VM_WorldMapIndexBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_Marker.InnerSingleton;
}

// GetTickableTickType @ 14b7187f0

ETickableTickType __thiscall
UDS_VM_WorldMap_Marker::GetTickableTickType(UDS_VM_WorldMap_Marker *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_Marker @ 14b718ae0

void __cdecl UDS_VM_WorldMap_Marker::StaticRegisterNativesUDS_VM_WorldMap_Marker(void)

{
  return;
}

// BindModel @ 14c06c820

void __thiscall UDS_VM_WorldMap_Marker::BindModel(UDS_VM_WorldMap_Marker *this)

{
  long64 lVar1;
  UDS_WorldMapEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar3;
  UDS_HudManager *pUVar4;
  
  UDS_VM_WorldMapIndexBase::BindModel((UDS_VM_WorldMapIndexBase *)this);
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_Marker>(&pUVar2->ChangedMapScaleDelegate,this);
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_Marker>(&pUVar2->ChangeMapPositionOffsetDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->MarkerNumberingRefrashDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_Marker>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->MarkerNumberingRefrashDelegate,(UDS_VM_WorldMap_Marker *)&stack0x00000010,
               (pmf_30c72e7a *)this);
    lVar1 = (this->MarkerInfo).key;
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<__int64_const_&>
                       ((TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->MarkerNoteInfoDelegate).Subscriptions,
                        (int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1,&(this->MarkerInfo).key)
    ;
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(FString),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_Marker>
              ((TMulticastDelegateRegistration<void___cdecl(FString),FDefaultTSDelegateUserPolicy> *
               )pTVar3,(UDS_VM_WorldMap_Marker *)&stack0x00000010,(pmf_85b9b97c *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->RequestMarkerDeleteDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_Marker>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->RequestMarkerDeleteDelegate,(UDS_VM_WorldMap_Marker *)&stack0x00000010,
               (pmf_30c72e7a *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->RequestAllMarkerDeleteDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_Marker>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->RequestAllMarkerDeleteDelegate,(UDS_VM_WorldMap_Marker *)&stack0x00000010,
               (pmf_30c72e7a *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OpenMarkerNoteDelegate
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_Marker>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OpenMarkerNoteDelegate,(UDS_VM_WorldMap_Marker *)&stack0x00000010,
               (pmf_30c72e7a *)this);
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->ChangedMapScaleDelegate).Subscriptions,(uint)this->_padding_,
                        (int *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_Marker>
              ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar3,(UDS_VM_WorldMap_Marker *)&stack0x00000010,(pmf_89cbec4f *)this);
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->ChangeMapPositionOffsetDelegate).Subscriptions,
                        (uint)this->_padding_,(int *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_Marker>
              ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar3,(UDS_VM_WorldMap_Marker *)&stack0x00000010,(pmf_89cbec4f *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnCloseInitDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_Marker>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnCloseInitDelegate,(UDS_VM_WorldMap_Marker *)&stack0x00000010,
               (pmf_30c72e7a *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->MarkerSharedDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_Marker>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->MarkerSharedDelegate,(UDS_VM_WorldMap_Marker *)&stack0x00000010,
               (pmf_30c72e7a *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->MarkerInfoBasedDeleteDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(FDS_WorldMapMarkerInfo_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_Marker>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_WorldMapMarkerInfo_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->MarkerInfoBasedDeleteDelegate,(UDS_VM_WorldMap_Marker *)&stack0x00000010,
               (pmf_9215391e *)this);
  }
  pUVar4 = UDS_HudManager::GetInst();
  if (pUVar4 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_Marker>
              (&pUVar4->OnHudShowDelegate,(UDS_VM_WorldMap_Marker *)&stack0x00000010,
               (pmf_81a8f70a *)this);
  }
  return;
}

// InitViewModel @ 14c08c950

void __thiscall UDS_VM_WorldMap_Marker::InitViewModel(UDS_VM_WorldMap_Marker *this)

{
  return;
}

// IsUpdate @ 14c090310

bool __thiscall UDS_VM_WorldMap_Marker::IsUpdate(UDS_VM_WorldMap_Marker *this)

{
  if ((char)this->_padding_ == '\0') {
    return this->IsHudShow;
  }
  return false;
}

// MarkerDelete @ 14c090730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_Marker::MarkerDelete(UDS_VM_WorldMap_Marker *this)

{
  bool bVar1;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_01;
  UDS_WorldMapManager *this_02;
  FDS_WorldMapMarkerInfo *pFVar3;
  UDS_WorldMapEvent *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1b8;
  ulonglong local_1b0;
  FDS_WorldMapMarkerInfo local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((this->IsSharedMarker != true) &&
     (bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        (&(this->MarkerInfo).Widget,(void *)0x0), !bVar1)) {
    this_00 = UDS_WorldMapMarkerManager::GetInst();
    if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_WorldMap_Marker::MarkerDelete",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_148.Ptr,0x18c,L"worldMapMarkerMgr is nullptr");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      this_01 = UDS_WindowManager::GetInst();
      if (this_01 == (UDS_WindowManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_WorldMap_Marker::MarkerDelete",0x24,Yes);
          UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x193,L"windowManager is nullptr")
          ;
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        this_02 = UDS_WorldMapManager::GetInst();
        if (this_02 != (UDS_WorldMapManager *)0x0) {
          if (this->_padding_ != 0) {
            UDS_WorldMapManager::RemoveRangeOverIconArray(this_02,this->_padding_);
          }
          local_1b8.ObjectIndex = 0;
          local_1b8.ObjectSerialNumber = 0;
          local_1b0 = 0;
          FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_1b0);
          (this_02->IconSelectedObject).WeakPtr = local_1b8;
          local_1b0 = local_1b0 & 0xffffffff00000000;
          local_1b8 = (FWeakObjectPtr)((ulonglong)local_1b8 & 0xffffffff00000000);
          UDS_WindowManager::CloseWindow(this_01,MapTooltip,(uint *)&local_1b8,(float *)&local_1b0);
          pFVar3 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&local_1a8,&this->MarkerInfo);
          UDS_WorldMapMarkerManager::RemoveWorldMapMarkerInfo(this_00,pFVar3);
          pUVar4 = UDS_WorldMapEvent::GetEvent();
          if (pUVar4 != (UDS_WorldMapEvent *)0x0) {
            FDS_EventDelegate<>::Broadcast(&pUVar4->MarkerNumberingRefrashDelegate);
            FDS_EventDelegate<>::Broadcast(&pUVar4->MarkerCountDelegate);
            FDS_EventDelegate<>::Broadcast(&pUVar4->RefrashMarkerListUIDelegate);
            (**(code **)(this->_padding_ + 0x2b0))(this);
            pUVar5 = FWeakObjectPtr::Get(&(this->MarkerInfo).Widget.WeakPtr);
            (**(code **)(*(longlong *)pUVar5 + 0x2d0))(pUVar5);
          }
        }
      }
    }
  }
  return;
}

// NumberingTextChange @ 14c091b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_Marker::NumberingTextChange(UDS_VM_WorldMap_Marker *this)

{
  EDS_MapIndexType EVar1;
  int iVar2;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar3;
  FDS_WorldMapMarkerInfo *pFVar4;
  FDS_MapIndexBaseTableRow *pFVar5;
  FDS_ViewModelConext_WorldMapIconToolTip *pFVar6;
  undefined1 auStackY_1d8 [32];
  FName local_1a8;
  int local_1a0;
  FDS_WorldMapMarkerInfo local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->IsSharedMarker != true) {
    this_00 = UDS_WorldMapMarkerManager::GetInst();
    if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_WorldMap_Marker::NumberingTextChange",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0xd9,L"UDS_WorldMapMarkerManager nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pFVar4 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&local_198,&this->MarkerInfo);
      iVar2 = UDS_WorldMapMarkerManager::GetMarkerIndex(this_00,pFVar4);
      this->MarkerIndex = iVar2;
      pFVar5 = FDS_MapIndexBaseTableRow::Get((longlong)iVar2 + 0x1d,true);
      if (pFVar5 != (FDS_MapIndexBaseTableRow *)0x0) {
        if (this->_padding_ != 0) {
          EVar1 = pFVar5->ID;
          pFVar6 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->
                             ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)
                              &this->_padding_);
          pFVar6->MapIndexBaseID = (uint)EVar1;
          iVar2 = this->MarkerIndex;
          pFVar6 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->
                             ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)
                              &this->_padding_);
          pFVar6->MarkerIndex = iVar2;
        }
        local_1a8 = FFieldNotificationClassDescriptor::IconID.FieldName;
        if (this->IconID != pFVar5->MapIndexIcon) {
          local_1a0 = FFieldNotificationClassDescriptor::IconID.BitNumber;
          this->IconID = pFVar5->MapIndexIcon;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
        }
      }
    }
  }
  return;
}

// OnChangedMapScale @ 14c0927a0

void __thiscall
UDS_VM_WorldMap_Marker::OnChangedMapScale
          (UDS_VM_WorldMap_Marker *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  *(float *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)dVar2;
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)local_28._s_0.X;
  this->_padding_ = (longlong)local_28._s_0.Y;
  local_18._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  SetMarkerPosition(this,param_1,(TVector2<double> *)&local_18._s_0,
                    (TVector2<double> *)&local_28._s_0);
  return;
}

// OnChangedPanelTranslation @ 14c092850

void __thiscall
UDS_VM_WorldMap_Marker::OnChangedPanelTranslation
          (UDS_VM_WorldMap_Marker *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  UDS_VM_WorldMapIndexBase::OnChangedPanelTranslation
            ((UDS_VM_WorldMapIndexBase *)this,(TVector2<double> *)&local_18._s_0,
             (TVector2<double> *)&local_28._s_0);
  local_28._s_0.X = (double)this->_padding_;
  local_28._s_0.Y = (double)this->_padding_;
  local_18._s_0.X = (double)this->_padding_;
  local_18._s_0.Y = (double)this->_padding_;
  SetMarkerPosition(this,*(float *)&this->_padding_,(TVector2<double> *)&local_28._s_0,
                    (TVector2<double> *)&local_18._s_0);
  return;
}

// OnCloseInit @ 14c093060

void __thiscall UDS_VM_WorldMap_Marker::OnCloseInit(UDS_VM_WorldMap_Marker *this)

{
  UDS_VM_WorldMapIndexBase::OnCloseInit((UDS_VM_WorldMapIndexBase *)this);
  this->Hovered = false;
  return;
}

// OnCurMapPositionOffset @ 14c094a20

void __thiscall
UDS_VM_WorldMap_Marker::OnCurMapPositionOffset
          (UDS_VM_WorldMap_Marker *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  *(float *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)dVar2;
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)local_28._s_0.X;
  this->_padding_ = (longlong)local_28._s_0.Y;
  local_18._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  SetMarkerPosition(this,param_1,(TVector2<double> *)&local_18._s_0,
                    (TVector2<double> *)&local_28._s_0);
  return;
}

// OnEventMouseEnter @ 14c0955f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_Marker::OnEventMouseEnter
          (UDS_VM_WorldMap_Marker *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  bool bVar2;
  UDS_WorldMapEvent *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this->Hovered = true;
  pUVar3 = UDS_WorldMapEvent::GetEvent();
  if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = this->Hovered;
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->MarkerHoverDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->MarkerHoverDelegate).Delegate,bVar1);
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap_Marker::OnEventMouseEnter",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0xb1,L"UDS_VM_WorldMap_Marker Hovered = true");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnEventMouseLeave @ 14c095700

void __thiscall
UDS_VM_WorldMap_Marker::OnEventMouseLeave
          (UDS_VM_WorldMap_Marker *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  bool bVar2;
  UDS_WorldMapEvent *pUVar3;
  
  this->Hovered = false;
  pUVar3 = UDS_WorldMapEvent::GetEvent();
  if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
    bVar1 = this->Hovered;
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->MarkerHoverDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->MarkerHoverDelegate).Delegate,bVar1);
    }
  }
  return;
}

// OnHudShowEvent @ 14c0958a0

void __thiscall
UDS_VM_WorldMap_Marker::OnHudShowEvent
          (UDS_VM_WorldMap_Marker *this,EDS_WindowLayerGroupType *param_1)

{
  this->IsHudShow = *param_1 < Hud;
  return;
}

// OnMarkerDeleteByMarkerInfo @ 14c096d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_Marker::OnMarkerDeleteByMarkerInfo
          (UDS_VM_WorldMap_Marker *this,FDS_WorldMapMarkerInfo *param_1)

{
  bool bVar1;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_01;
  UDS_WorldMapManager *this_02;
  FDS_WorldMapMarkerInfo *pFVar3;
  UDS_WorldMapEvent *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr FStack_1b8;
  ulonglong uStack_1b0;
  FDS_WorldMapMarkerInfo FStack_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  if (param_1->key == (this->MarkerInfo).key) {
    uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
    if ((this->IsSharedMarker != true) &&
       (bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                          (&(this->MarkerInfo).Widget,(void *)0x0), !bVar1)) {
      this_00 = UDS_WorldMapMarkerManager::GetInst();
      if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          TStack_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_148,"UDS_VM_WorldMap_Marker::MarkerDelete",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,TStack_148.Ptr,0x18c,L"worldMapMarkerMgr is nullptr");
          if ((void *)TStack_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_148._padding_);
          }
        }
      }
      else {
        this_01 = UDS_WindowManager::GetInst();
        if (this_01 == (UDS_WindowManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            TStack_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_148,"UDS_VM_WorldMap_Marker::MarkerDelete",0x24,Yes);
            UDS_LogManager::PrintLog
                      (pUVar2,1,Warning,TStack_148.Ptr,0x193,L"windowManager is nullptr");
            if ((void *)TStack_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_148._padding_);
            }
          }
        }
        else {
          this_02 = UDS_WorldMapManager::GetInst();
          if (this_02 != (UDS_WorldMapManager *)0x0) {
            if (this->_padding_ != 0) {
              UDS_WorldMapManager::RemoveRangeOverIconArray(this_02,this->_padding_);
            }
            FStack_1b8.ObjectIndex = 0;
            FStack_1b8.ObjectSerialNumber = 0;
            uStack_1b0 = 0;
            FWeakObjectPtr::operator=(&FStack_1b8,(FObjectPtr)&uStack_1b0);
            (this_02->IconSelectedObject).WeakPtr = FStack_1b8;
            uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
            FStack_1b8 = (FWeakObjectPtr)((ulonglong)FStack_1b8 & 0xffffffff00000000);
            UDS_WindowManager::CloseWindow
                      (this_01,MapTooltip,(uint *)&FStack_1b8,(float *)&uStack_1b0);
            pFVar3 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&FStack_1a8,&this->MarkerInfo);
            UDS_WorldMapMarkerManager::RemoveWorldMapMarkerInfo(this_00,pFVar3);
            pUVar4 = UDS_WorldMapEvent::GetEvent();
            if (pUVar4 != (UDS_WorldMapEvent *)0x0) {
              FDS_EventDelegate<>::Broadcast(&pUVar4->MarkerNumberingRefrashDelegate);
              FDS_EventDelegate<>::Broadcast(&pUVar4->MarkerCountDelegate);
              FDS_EventDelegate<>::Broadcast(&pUVar4->RefrashMarkerListUIDelegate);
              (**(code **)(this->_padding_ + 0x2b0))(this);
              pUVar5 = FWeakObjectPtr::Get(&(this->MarkerInfo).Widget.WeakPtr);
              (**(code **)(*(longlong *)pUVar5 + 0x2d0))(pUVar5);
            }
          }
        }
      }
    }
    return;
  }
  return;
}

// OnMarkerMemoInfoChange @ 14c096da0

void __thiscall
UDS_VM_WorldMap_Marker::OnMarkerMemoInfoChange(UDS_VM_WorldMap_Marker *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&(this->MarkerInfo).Memo,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  if (this->_padding_ != 0) {
    iVar1 = (this->MarkerInfo).Memo.Data.ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange
              ((FString *)(this->_padding_ + 0x50),
               (wchar_t *)(this->MarkerInfo).Memo.Data.AllocatorInstance.Data,iVar3);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// OnMarkerShared @ 14c096f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_Marker::OnMarkerShared(UDS_VM_WorldMap_Marker *this)

{
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar1;
  FDS_WorldMapMarkerInfo *pFVar2;
  undefined1 auStackY_1c8 [32];
  FDS_WorldMapMarkerInfo local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((this->IsSharedMarker != true) && (this->Hovered == true)) {
    this_00 = UDS_WorldMapMarkerManager::GetInst();
    if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)this_00;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_WorldMap_Marker::OnMarkerShared",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar1,1,Warning,local_138.Ptr,0x112,L"UDS_WorldMapMarkerManager nullptr");
        if ((UDS_WorldMapMarkerManager *)local_138._padding_ != (UDS_WorldMapMarkerManager *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pFVar2 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&local_198,&this->MarkerInfo);
      UDS_WorldMapMarkerManager::BeginMarkerInfoShare(this_00,pFVar2);
    }
  }
  return;
}

// OnNumberingTextChange @ 14c0972c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_Marker::OnNumberingTextChange(UDS_VM_WorldMap_Marker *this)

{
  EDS_MapIndexType EVar1;
  int iVar2;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar3;
  FDS_WorldMapMarkerInfo *pFVar4;
  FDS_MapIndexBaseTableRow *pFVar5;
  FDS_ViewModelConext_WorldMapIconToolTip *pFVar6;
  undefined1 auStackY_1d8 [32];
  FName FStack_1a8;
  int iStack_1a0;
  FDS_WorldMapMarkerInfo FStack_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->IsSharedMarker != true) {
    this_00 = UDS_WorldMapMarkerManager::GetInst();
    if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_WorldMap_Marker::NumberingTextChange",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,TStack_138.Ptr,0xd9,L"UDS_WorldMapMarkerManager nullptr");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
    else {
      pFVar4 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&FStack_198,&this->MarkerInfo);
      iVar2 = UDS_WorldMapMarkerManager::GetMarkerIndex(this_00,pFVar4);
      this->MarkerIndex = iVar2;
      pFVar5 = FDS_MapIndexBaseTableRow::Get((longlong)iVar2 + 0x1d,true);
      if (pFVar5 != (FDS_MapIndexBaseTableRow *)0x0) {
        if (this->_padding_ != 0) {
          EVar1 = pFVar5->ID;
          pFVar6 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->
                             ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)
                              &this->_padding_);
          pFVar6->MapIndexBaseID = (uint)EVar1;
          iVar2 = this->MarkerIndex;
          pFVar6 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->
                             ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)
                              &this->_padding_);
          pFVar6->MarkerIndex = iVar2;
        }
        FStack_1a8 = FFieldNotificationClassDescriptor::IconID.FieldName;
        if (this->IconID != pFVar5->MapIndexIcon) {
          iStack_1a0 = FFieldNotificationClassDescriptor::IconID.BitNumber;
          this->IconID = pFVar5->MapIndexIcon;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1a8);
        }
      }
    }
  }
  return;
}

// OnOpenNoteUI @ 14c097f90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_Marker::OnOpenNoteUI(UDS_VM_WorldMap_Marker *this)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  FWeakObjectPtr local_res8;
  UDS_VM_WorldMap_Marker *local_res10;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  if (this->Hovered != false) {
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
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      local_88 = OnOpenWorldMapNote;
      uStack_80 = 0;
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMap_Marker____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_res10 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
        puVar2[4] = local_88;
        puVar2[5] = CONCAT44(uStack_7c,uStack_80);
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_88,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_68);
      UDS_WindowManager::OpenWindow(this_00,MapMarkerNote,pTVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_88);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_78 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                   (FDestructionSentinel *)&local_88);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
  }
  return;
}

// OnOpenWorldMapNote @ 14c0981a0

void __thiscall
UDS_VM_WorldMap_Marker::OnOpenWorldMapNote(UDS_VM_WorldMap_Marker *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_WorldMapMarkerInfo *pFVar2;
  bool bVar3;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res10;
  TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  MakeContext<FDS_ViewModelContext_WorldMapMarkerInfo>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_WorldMapMarkerInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x1ac;
  FDS_WorldMapMarkerInfo::operator=(&pFVar2->WorldMapMarkerInfo,&this->MarkerInfo);
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  pFVar2->IsSharedMarker = this->IsSharedMarker;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_18,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// OnResponseMarkerDelete @ 14c099340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_Marker::OnResponseMarkerDelete(UDS_VM_WorldMap_Marker *this)

{
  bool bVar1;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_01;
  UDS_WorldMapManager *this_02;
  FDS_WorldMapMarkerInfo *pFVar3;
  UDS_WorldMapEvent *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr FStack_1b8;
  ulonglong uStack_1b0;
  FDS_WorldMapMarkerInfo FStack_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  if (this->Hovered == true) {
    uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
    if ((this->IsSharedMarker != true) &&
       (bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                          (&(this->MarkerInfo).Widget,(void *)0x0), !bVar1)) {
      this_00 = UDS_WorldMapMarkerManager::GetInst();
      if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          TStack_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_148,"UDS_VM_WorldMap_Marker::MarkerDelete",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,TStack_148.Ptr,0x18c,L"worldMapMarkerMgr is nullptr");
          if ((void *)TStack_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_148._padding_);
          }
        }
      }
      else {
        this_01 = UDS_WindowManager::GetInst();
        if (this_01 == (UDS_WindowManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            TStack_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_148,"UDS_VM_WorldMap_Marker::MarkerDelete",0x24,Yes);
            UDS_LogManager::PrintLog
                      (pUVar2,1,Warning,TStack_148.Ptr,0x193,L"windowManager is nullptr");
            if ((void *)TStack_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_148._padding_);
            }
          }
        }
        else {
          this_02 = UDS_WorldMapManager::GetInst();
          if (this_02 != (UDS_WorldMapManager *)0x0) {
            if (this->_padding_ != 0) {
              UDS_WorldMapManager::RemoveRangeOverIconArray(this_02,this->_padding_);
            }
            FStack_1b8.ObjectIndex = 0;
            FStack_1b8.ObjectSerialNumber = 0;
            uStack_1b0 = 0;
            FWeakObjectPtr::operator=(&FStack_1b8,(FObjectPtr)&uStack_1b0);
            (this_02->IconSelectedObject).WeakPtr = FStack_1b8;
            uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
            FStack_1b8 = (FWeakObjectPtr)((ulonglong)FStack_1b8 & 0xffffffff00000000);
            UDS_WindowManager::CloseWindow
                      (this_01,MapTooltip,(uint *)&FStack_1b8,(float *)&uStack_1b0);
            pFVar3 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&FStack_1a8,&this->MarkerInfo);
            UDS_WorldMapMarkerManager::RemoveWorldMapMarkerInfo(this_00,pFVar3);
            pUVar4 = UDS_WorldMapEvent::GetEvent();
            if (pUVar4 != (UDS_WorldMapEvent *)0x0) {
              FDS_EventDelegate<>::Broadcast(&pUVar4->MarkerNumberingRefrashDelegate);
              FDS_EventDelegate<>::Broadcast(&pUVar4->MarkerCountDelegate);
              FDS_EventDelegate<>::Broadcast(&pUVar4->RefrashMarkerListUIDelegate);
              (**(code **)(this->_padding_ + 0x2b0))(this);
              pUVar5 = FWeakObjectPtr::Get(&(this->MarkerInfo).Widget.WeakPtr);
              (**(code **)(*(longlong *)pUVar5 + 0x2d0))(pUVar5);
            }
          }
        }
      }
    }
    return;
  }
  return;
}

// OnResponsetMarkerAllDelete @ 14c099360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_Marker::OnResponsetMarkerAllDelete(UDS_VM_WorldMap_Marker *this)

{
  bool bVar1;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_01;
  UDS_WorldMapManager *this_02;
  FDS_WorldMapMarkerInfo *pFVar3;
  UDS_WorldMapEvent *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr FStack_1b8;
  ulonglong uStack_1b0;
  FDS_WorldMapMarkerInfo FStack_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((this->IsSharedMarker != true) &&
     (bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        (&(this->MarkerInfo).Widget,(void *)0x0), !bVar1)) {
    this_00 = UDS_WorldMapMarkerManager::GetInst();
    if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        TStack_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_148,"UDS_VM_WorldMap_Marker::MarkerDelete",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,TStack_148.Ptr,0x18c,L"worldMapMarkerMgr is nullptr");
        if ((void *)TStack_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_148._padding_);
        }
      }
    }
    else {
      this_01 = UDS_WindowManager::GetInst();
      if (this_01 == (UDS_WindowManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          TStack_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_148,"UDS_VM_WorldMap_Marker::MarkerDelete",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,TStack_148.Ptr,0x193,L"windowManager is nullptr");
          if ((void *)TStack_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_148._padding_);
          }
        }
      }
      else {
        this_02 = UDS_WorldMapManager::GetInst();
        if (this_02 != (UDS_WorldMapManager *)0x0) {
          if (this->_padding_ != 0) {
            UDS_WorldMapManager::RemoveRangeOverIconArray(this_02,this->_padding_);
          }
          FStack_1b8.ObjectIndex = 0;
          FStack_1b8.ObjectSerialNumber = 0;
          uStack_1b0 = 0;
          FWeakObjectPtr::operator=(&FStack_1b8,(FObjectPtr)&uStack_1b0);
          (this_02->IconSelectedObject).WeakPtr = FStack_1b8;
          uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
          FStack_1b8 = (FWeakObjectPtr)((ulonglong)FStack_1b8 & 0xffffffff00000000);
          UDS_WindowManager::CloseWindow
                    (this_01,MapTooltip,(uint *)&FStack_1b8,(float *)&uStack_1b0);
          pFVar3 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&FStack_1a8,&this->MarkerInfo);
          UDS_WorldMapMarkerManager::RemoveWorldMapMarkerInfo(this_00,pFVar3);
          pUVar4 = UDS_WorldMapEvent::GetEvent();
          if (pUVar4 != (UDS_WorldMapEvent *)0x0) {
            FDS_EventDelegate<>::Broadcast(&pUVar4->MarkerNumberingRefrashDelegate);
            FDS_EventDelegate<>::Broadcast(&pUVar4->MarkerCountDelegate);
            FDS_EventDelegate<>::Broadcast(&pUVar4->RefrashMarkerListUIDelegate);
            (**(code **)(this->_padding_ + 0x2b0))(this);
            pUVar5 = FWeakObjectPtr::Get(&(this->MarkerInfo).Widget.WeakPtr);
            (**(code **)(*(longlong *)pUVar5 + 0x2d0))(pUVar5);
          }
        }
      }
    }
  }
  return;
}

// OnSetViewModel @ 14c09a200

void __thiscall
UDS_VM_WorldMap_Marker::OnSetViewModel
          (UDS_VM_WorldMap_Marker *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  code *pcVar6;
  longlong lVar7;
  FDS_ViewModelContext_WorldMapMarkerInfo *pFVar8;
  bool bVar9;
  bool bVar10;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar11;
  UObject *pUVar12;
  undefined8 *puVar13;
  FName *pFVar14;
  int iVar15;
  double dVar16;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> local_38;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_WorldMapIndexBase::OnSetViewModel((UDS_VM_WorldMapIndexBase *)this,&local_58);
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapMarkerInfo>(&local_68,&local_48);
  pFVar8 = local_68.Object;
  if (local_68.Object != (FDS_ViewModelContext_WorldMapMarkerInfo *)0x0) {
    this->_padding_ = (local_68.Object)->_padding_;
    FDS_WorldMapMarkerInfo::operator=(&this->MarkerInfo,&(local_68.Object)->WorldMapMarkerInfo);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar8->_padding_);
    this->MarkerIndex = pFVar8->Index;
    dVar3 = (pFVar8->FirstPanelTranslation).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)(pFVar8->FirstPanelTranslation).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar3;
    dVar3 = (pFVar8->CurPanelTranslation).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)(pFVar8->CurPanelTranslation).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar3;
    dVar3 = (pFVar8->ReferencePosition).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)(pFVar8->ReferencePosition).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar3;
    dVar3 = (pFVar8->MapStartPos).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)(pFVar8->MapStartPos).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar3;
    this->IconID = pFVar8->iconID;
    this->IsSharedMarker = pFVar8->IsSharedMarker;
    lVar7 = pFVar8->_padding_;
    this->_padding_ = pFVar8->_padding_;
    this->_padding_ = lVar7;
    pTVar11 = MakeContext<FDS_ViewModelConext_WorldMapIconToolTip>(&local_38);
    plVar1 = &this->_padding_;
    if ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)plVar1 != pTVar11) {
      *plVar1 = (longlong)pTVar11->Object;
      pTVar11->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&pTVar11->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (*plVar1 != 0) {
      *(undefined4 *)(*plVar1 + 0x18) = 0x1b1;
      lVar7 = this->_padding_;
      if (*plVar1 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(int *)(*plVar1 + 0x20) = (int)lVar7;
      bVar9 = this->IsSharedMarker;
      if (*plVar1 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(bool *)(*plVar1 + 0x4c) = bVar9;
      iVar15 = this->MarkerIndex;
      if (*plVar1 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(int *)(*plVar1 + 0x48) = iVar15;
      if (*plVar1 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar5 = (this->MarkerInfo).Memo.Data.ArrayNum;
      iVar15 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar15 = 0;
      }
      ::FString::AssignRange
                ((FString *)(*plVar1 + 0x50),
                 (wchar_t *)(this->MarkerInfo).Memo.Data.AllocatorInstance.Data,iVar15);
    }
    if ((char)this->_padding_ == '\0') {
      this->IsHudShow = true;
    }
    ADS_MainCharacter::GetMainPlayer();
    bVar9 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res10,(void *)0x0)
    ;
    if (!bVar9) {
      pUVar12 = FWeakObjectPtr::Get(&local_res10);
      puVar13 = (undefined8 *)
                (**(code **)(*(longlong *)&pUVar12[0x29].field_0x10 + 0x78))
                          (&pUVar12[0x29].field_0x10,local_res18);
      *(undefined8 *)((longlong)&this->_padding_ + 4) = *puVar13;
    }
    dVar3 = (double)this->_padding_;
    dVar4 = (double)this->_padding_;
    fVar2 = *(float *)&this->_padding_;
    dVar16 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    (this->StartReferencePosition).field0_0x0._s_0.X =
         ((double)this->_padding_ - (double)this->_padding_) * dVar16 * (double)fVar2;
    (this->StartReferencePosition).field0_0x0._s_0.Y = (dVar3 - dVar4) * dVar16 * (double)fVar2;
    NumberingTextChange(this);
    if (local_68.Object == (FDS_ViewModelContext_WorldMapMarkerInfo *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((local_68.Object)->IsNewCreate == true) {
      pFVar14 = ::FName::FName(&local_res20,"Open_Anim");
      (this->AnimationEvent).AnimationName = *pFVar14;
      (this->AnimationEvent).AnimationEventType = PlayForward;
      local_90 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_98 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
    local_80 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    local_70 = FFieldNotificationClassDescriptor::IsSharedMarker.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::IsSharedMarker.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c09c7b0

void __thiscall UDS_VM_WorldMap_Marker::OnUpdate(UDS_VM_WorldMap_Marker *this,float param_1)

{
  bool bVar1;
  UDS_MovementCore *this_00;
  double dVar2;
  TVector2<double>_u_0 local_48;
  TVector2<double>_u_0 local_38;
  TVector<double>_u_0 local_28;
  
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_MovementCore *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_28._s_0);
    dVar2 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    this->_padding_ = (longlong)local_28._s_0.X;
    this->_padding_ = (longlong)local_28._s_0.Y;
    local_48._s_0.X =
         (local_28._s_0.X - (double)this->_padding_) * dVar2 * (double)*(float *)&this->_padding_;
    local_38 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_48._s_0.Y =
         (local_28._s_0.Y - (double)this->_padding_) * dVar2 * (double)*(float *)&this->_padding_;
    SetMarkerPosition(this,*(float *)&this->_padding_,(TVector2<double> *)&local_38._s_0,
                      (TVector2<double> *)&local_48._s_0);
  }
  return;
}

// PlayerAnimation @ 14c09ea70

void __thiscall UDS_VM_WorldMap_Marker::PlayerAnimation(UDS_VM_WorldMap_Marker *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Open_Anim");
  (this->AnimationEvent).AnimationName = *pFVar1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMarkerPosition @ 14c0a1300

void __thiscall
UDS_VM_WorldMap_Marker::SetMarkerPosition
          (UDS_VM_WorldMap_Marker *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector2<double>_u_0 local_78;
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58 [5];
  
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar3 = (double)param_1;
  dVar4 = dVar3 * (param_2->field0_0x0)._s_0.X;
  dVar5 = (dVar1 - (this->MarkerInfo).MakerVector2D.field0_0x0._s_0.X) * dVar3;
  dVar6 = (dVar2 - (this->MarkerInfo).MakerVector2D.field0_0x0._s_0.Y) * dVar3;
  dVar3 = dVar3 * (param_2->field0_0x0)._s_0.Y;
  if ((int)this->_padding_ == 0) {
    dVar2 = ((dVar3 + dVar2) - dVar6) + ((this->StartReferencePosition).field0_0x0._s_0.Y - dVar2) +
            ((double)this->_padding_ - (double)this->_padding_);
    dVar1 = ((dVar4 + dVar1) - dVar5) + ((this->StartReferencePosition).field0_0x0._s_0.X - dVar1) +
            ((double)this->_padding_ - (double)this->_padding_);
  }
  else {
    local_78._s_0.X = dVar4 - dVar5;
    local_78._s_0.Y = dVar3 - dVar6;
    dVar1 = local_78._s_0.X + dVar1;
    dVar2 = local_78._s_0.Y + dVar2;
    UDS_VM_WorldMapIndexBase::CheckRangeOverIcon
              ((UDS_VM_WorldMapIndexBase *)this,(TVector2<double> *)&local_78._s_0);
    local_58[0]._0_8_ = (param_3->field0_0x0)._s_0.X;
    local_58[0]._8_8_ = (param_3->field0_0x0)._s_0.Y;
    local_78._s_0.X = dVar4;
    local_78._s_0.Y = dVar3;
    local_68._s_0.X = dVar1;
    local_68._s_0.Y = dVar2;
    UDS_VM_WorldMapIndexBase::BroadCastRangeOverIconPosition
              ((UDS_VM_WorldMapIndexBase *)this,(TVector2<double> *)&local_68._s_0,
               (TVector2<double> *)&local_58[0]._s_0,(TVector2<double> *)&local_78._s_0);
  }
  if ((UCanvasPanelSlot *)this->_padding_ != (UCanvasPanelSlot *)0x0) {
    local_68._s_0.X = dVar1;
    local_68._s_0.Y = dVar2;
    UCanvasPanelSlot::SetPosition
              ((UCanvasPanelSlot *)this->_padding_,(TVector2<double> *)&local_68._s_0);
  }
  return;
}

// UnbindModel @ 14c0add40

void __thiscall UDS_VM_WorldMap_Marker::UnbindModel(UDS_VM_WorldMap_Marker *this)

{
  UDS_WorldMapEvent *pUVar1;
  UDS_HudManager *pUVar2;
  
  UDS_VM_WorldMapIndexBase::UnbindModel((UDS_VM_WorldMapIndexBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->MarkerNumberingRefrashDelegate,this);
    FDS_FilteredEventDelegate<__int64_const_,FString>::Remove<UDS_VM_WorldMap_Marker>
              (&pUVar1->MarkerNoteInfoDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->RequestMarkerDeleteDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OpenMarkerNoteDelegate
               ,this);
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_Marker>(&pUVar1->ChangeMapPositionOffsetDelegate,this);
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_Marker>(&pUVar1->ChangedMapScaleDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->RequestAllMarkerDeleteDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnCloseInitDelegate,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->MarkerSharedDelegate,
               this);
  }
  pUVar2 = UDS_HudManager::GetInst();
  if (pUVar2 != (UDS_HudManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnHudShowDelegate,this
              );
  }
  return;
}

