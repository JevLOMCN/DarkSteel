// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b70b140

UClass * __cdecl UDS_VM_WorldMap_RangeOverIcon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_RangeOverIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_RangeOverIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_RangeOverIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_RangeOverIcon,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_RangeOverIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_RangeOverIcon>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_RangeOverIcon.InnerSingleton;
}

// UDS_VM_WorldMap_RangeOverIcon @ 14b712880

UDS_VM_WorldMap_RangeOverIcon * __thiscall
UDS_VM_WorldMap_RangeOverIcon::UDS_VM_WorldMap_RangeOverIcon
          (UDS_VM_WorldMap_RangeOverIcon *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_RangeOverIcon__6B_;
  this->IconID = 0;
  this->Angle = 0.0;
  this->CanvasPanel = (UCanvasPanelSlot *)0x0;
  this->Key = 0;
  this->MapIndexBaseID = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_VM_WorldMap_RangeOverIcon @ 14b712900

UDS_VM_WorldMap_RangeOverIcon * __thiscall
UDS_VM_WorldMap_RangeOverIcon::UDS_VM_WorldMap_RangeOverIcon
          (UDS_VM_WorldMap_RangeOverIcon *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_RangeOverIcon__6B_;
  this->IconID = 0;
  this->Angle = 0.0;
  this->CanvasPanel = (UCanvasPanelSlot *)0x0;
  this->Key = 0;
  this->MapIndexBaseID = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_VM_WorldMap_RangeOverIcon @ 14b713c10

void __thiscall
UDS_VM_WorldMap_RangeOverIcon::~UDS_VM_WorldMap_RangeOverIcon(UDS_VM_WorldMap_RangeOverIcon *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_RangeOverIcon__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b717010

IClassDescriptor * __thiscall
UDS_VM_WorldMap_RangeOverIcon::GetFieldNotificationDescriptor(UDS_VM_WorldMap_RangeOverIcon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_RangeOverIcon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b718490

UClass * __cdecl UDS_VM_WorldMap_RangeOverIcon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_RangeOverIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_RangeOverIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_RangeOverIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_RangeOverIcon,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_RangeOverIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_RangeOverIcon>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_RangeOverIcon.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMap_RangeOverIcon @ 14b718b20

void __cdecl UDS_VM_WorldMap_RangeOverIcon::StaticRegisterNativesUDS_VM_WorldMap_RangeOverIcon(void)

{
  return;
}

// BindModel @ 14c06d110

void __thiscall UDS_VM_WorldMap_RangeOverIcon::BindModel(UDS_VM_WorldMap_RangeOverIcon *this)

{
  UDS_WorldMapEvent *pUVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar2;
  
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>::
    Remove<UDS_VM_WorldMap_RangeOverIcon>(&pUVar1->UpdateRangeOverIconPositionDelegate,this);
    FDS_FilteredEventDelegate<__int64_const_>::Remove<UDS_VM_WorldMap_RangeOverIcon>
              (&pUVar1->RangeOverIconDeleteDelegate,this);
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<__int64_const_&>
                       ((TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->UpdateRangeOverIconPositionDelegate).Subscriptions,
                        (int)((ulonglong)this->Key >> 0x20) * 0x17 + (int)this->Key,&this->Key);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_RangeOverIcon>
              ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar2,(UDS_VM_WorldMap_RangeOverIcon *)&stack0x00000010,(pmf_5a17644b *)this);
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<__int64_const_&>
                       ((TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->RangeOverIconDeleteDelegate).Subscriptions,
                        (int)((ulonglong)this->Key >> 0x20) * 0x17 + (int)this->Key,&this->Key);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_RangeOverIcon>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               pTVar2,(UDS_VM_WorldMap_RangeOverIcon *)&stack0x00000010,(pmf_2ba602ae *)this);
  }
  return;
}

// InitViewModel @ 14c08ca30

void __thiscall UDS_VM_WorldMap_RangeOverIcon::InitViewModel(UDS_VM_WorldMap_RangeOverIcon *this)

{
  return;
}

// OnCloseInit @ 14c093340

void __thiscall UDS_VM_WorldMap_RangeOverIcon::OnCloseInit(UDS_VM_WorldMap_RangeOverIcon *this)

{
  return;
}

// OnDelete @ 14c095220

void __thiscall UDS_VM_WorldMap_RangeOverIcon::OnDelete(UDS_VM_WorldMap_RangeOverIcon *this)

{
  UObject *pUVar1;
  
  (**(code **)(this->_padding_ + 0x2b0))();
  pUVar1 = FWeakObjectPtr::Get(&(this->Widget).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014c095250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x2d0))(pUVar1,*(code **)(*(longlong *)pUVar1 + 0x2d0));
  return;
}

// OnSetViewModel @ 14c09b060

void __thiscall
UDS_VM_WorldMap_RangeOverIcon::OnSetViewModel
          (UDS_VM_WorldMap_RangeOverIcon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  FName FVar2;
  FDS_MapIndexBaseTableRow *pFVar3;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_RangeOverIconInfo,1> local_28;
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
  SafeCast<FDS_ViewModelContext_RangeOverIconInfo>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_RangeOverIconInfo *)0x0) {
    this->Key = (local_28.Object)->Key;
    iVar1 = (local_28.Object)->MapIndexBaseID;
    this->MapIndexBaseID = iVar1;
    this->CanvasPanel = (local_28.Object)->CanvasSlot;
    (this->Widget).WeakPtr = ((local_28.Object)->Widget).WeakPtr;
    pFVar3 = FDS_MapIndexBaseTableRow::Get((longlong)iVar1,true);
    iVar1 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::IconID.FieldName;
    if (pFVar3 != (FDS_MapIndexBaseTableRow *)0x0) {
      if (this->IconID != pFVar3->MapIndexIcon) {
        this->IconID = pFVar3->MapIndexIcon;
        local_30 = iVar1;
        local_38 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateIconInfo @ 14c09cf90

void __thiscall
UDS_VM_WorldMap_RangeOverIcon::OnUpdateIconInfo
          (UDS_VM_WorldMap_RangeOverIcon *this,float param_1,TVector2<double> *param_2)

{
  int iVar1;
  TVector2<double>_u_0 local_28 [2];
  
  if (this->CanvasPanel != (UCanvasPanelSlot *)0x0) {
    local_28[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
    local_28[0]._8_8_ = *(double *)((longlong)&param_2->field0_0x0 + 8);
    UCanvasPanelSlot::SetPosition(this->CanvasPanel,(TVector2<double> *)&local_28[0]._s_0);
    iVar1 = FFieldNotificationClassDescriptor::Angle.BitNumber;
    local_28[0]._0_8_ = FFieldNotificationClassDescriptor::Angle.FieldName;
    if (param_1 != this->Angle) {
      this->Angle = param_1;
      local_28[0]._8_4_ = iVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_28);
    }
  }
  return;
}

// UnbindModel @ 14c0adf50

void __thiscall UDS_VM_WorldMap_RangeOverIcon::UnbindModel(UDS_VM_WorldMap_RangeOverIcon *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>::
    Remove<UDS_VM_WorldMap_RangeOverIcon>(&pUVar1->UpdateRangeOverIconPositionDelegate,this);
    FDS_FilteredEventDelegate<__int64_const_>::Remove<UDS_VM_WorldMap_RangeOverIcon>
              (&pUVar1->RangeOverIconDeleteDelegate,this);
  }
  return;
}

