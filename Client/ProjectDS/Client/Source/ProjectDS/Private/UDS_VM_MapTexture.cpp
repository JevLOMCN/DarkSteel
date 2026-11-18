// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b694870

UClass * __cdecl UDS_VM_MapTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MapTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MapTexture",
               &Z_Registration_Info_UClass_UDS_VM_MapTexture.InnerSingleton,
               StaticRegisterNativesUDS_VM_MapTexture,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MapTexture>,
               InternalVTableHelperCtorCaller<UDS_VM_MapTexture>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MapTexture.InnerSingleton;
}

// UDS_VM_MapTexture @ 14b699d30

UDS_VM_MapTexture * __thiscall
UDS_VM_MapTexture::UDS_VM_MapTexture(UDS_VM_MapTexture *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MapTexture__6B_;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->MapAngle = 0.0;
  this->MapType = 0;
  (this->MapPositionOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// UDS_VM_MapTexture @ 14b699d90

UDS_VM_MapTexture * __thiscall
UDS_VM_MapTexture::UDS_VM_MapTexture(UDS_VM_MapTexture *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MapTexture__6B_;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->MapAngle = 0.0;
  this->MapType = 0;
  (this->MapPositionOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UDS_VM_MapTexture @ 14b69b110

void __thiscall UDS_VM_MapTexture::~UDS_VM_MapTexture(UDS_VM_MapTexture *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MapTexture__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d560

IClassDescriptor * __thiscall
UDS_VM_MapTexture::GetFieldNotificationDescriptor(UDS_VM_MapTexture *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MapTexture::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69e1a0

UClass * __cdecl UDS_VM_MapTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MapTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MapTexture",
               &Z_Registration_Info_UClass_UDS_VM_MapTexture.InnerSingleton,
               StaticRegisterNativesUDS_VM_MapTexture,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MapTexture>,
               InternalVTableHelperCtorCaller<UDS_VM_MapTexture>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MapTexture.InnerSingleton;
}

// GetTickableTickType @ 14b69e580

ETickableTickType __thiscall UDS_VM_MapTexture::GetTickableTickType(UDS_VM_MapTexture *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_MapTexture @ 14b69e7c0

void __cdecl UDS_VM_MapTexture::StaticRegisterNativesUDS_VM_MapTexture(void)

{
  return;
}

// BindModel @ 14c002220

void __thiscall UDS_VM_MapTexture::BindModel(UDS_VM_MapTexture *this)

{
  int iVar1;
  UDS_WorldMapEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar3;
  longlong local_res10 [3];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->ChangeMapPositionOffsetDelegate).Subscriptions,this->MapType,
                        &this->MapType);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_MapTexture>
              ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar3,(UDS_VM_MapTexture *)local_res10,(pmf_59cb6fe9 *)this);
    iVar1 = this->MapType;
    local_res10[0] = (longlong)iVar1;
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<__int64_const_&>
                       ((TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->MapAngleChangeDelegate).Subscriptions,
                        (iVar1 >> 0x1f) * 0x17 + iVar1,local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_MapTexture>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultTSDelegateUserPolicy> *)
               pTVar3,(UDS_VM_MapTexture *)(local_res10 + 1),(pmf_2cec8e01 *)this);
  }
  return;
}

// InitViewModel @ 14c01eaa0

void __thiscall UDS_VM_MapTexture::InitViewModel(UDS_VM_MapTexture *this)

{
  return;
}

// IsUpdate @ 14c0239d0

bool __thiscall UDS_VM_MapTexture::IsUpdate(UDS_VM_MapTexture *this)

{
  return true;
}

// OnMapAngle @ 14c02cc30

void __thiscall UDS_VM_MapTexture::OnMapAngle(UDS_VM_MapTexture *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MapAngle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MapAngle.FieldName;
  if (param_1 != this->MapAngle) {
    this->MapAngle = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnMapPositionOffset @ 14c02cc80

void __thiscall
UDS_VM_MapTexture::OnMapPositionOffset
          (UDS_VM_MapTexture *this,float param_1,TVector2<double> *param_2,TVector2<double> *param_3
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName local_18;
  int local_10;
  
  if (((param_2->field0_0x0)._s_0.X != (this->MapPositionOffset).field0_0x0._s_0.X) ||
     ((param_2->field0_0x0)._s_0.Y != (this->MapPositionOffset).field0_0x0._s_0.Y)) {
    uVar1 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar2 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar3 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    local_10 = FFieldNotificationClassDescriptor::MapPositionOffset.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MapPositionOffset.FieldName;
    *(undefined4 *)&(this->MapPositionOffset).field0_0x0 = *(undefined4 *)&param_2->field0_0x0;
    *(undefined4 *)((longlong)&(this->MapPositionOffset).field0_0x0 + 4) = uVar1;
    *(undefined4 *)((longlong)&(this->MapPositionOffset).field0_0x0 + 8) = uVar2;
    *(undefined4 *)((longlong)&(this->MapPositionOffset).field0_0x0 + 0xc) = uVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14c0305b0

void __thiscall
UDS_VM_MapTexture::OnSetViewModel
          (UDS_VM_MapTexture *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FDS_ViewModelContext_MapTypeInfo,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_MapTypeInfo>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_MapTypeInfo *)0x0) {
    this->MapType = (local_28.Object)->MapType;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c039ec0

void __thiscall UDS_VM_MapTexture::OnUpdate(UDS_VM_MapTexture *this,float param_1)

{
  return;
}

// UnbindModel @ 14c048700

void __thiscall UDS_VM_MapTexture::UnbindModel(UDS_VM_MapTexture *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_MapTexture>(&pUVar1->ChangeMapPositionOffsetDelegate,this);
    FDS_FilteredEventDelegate<__int64_const_,float_const_>::Remove<UDS_VM_MapTexture>
              (&pUVar1->MapAngleChangeDelegate,this);
  }
  return;
}

