// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetCurMousePanelOffset_WrapperImpl @ 14b694610

void __cdecl UDS_VM_MapSpawn::SetCurMousePanelOffset_WrapperImpl(void *param_1,void *param_2)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (double)*(undefined8 *)param_2;
  local_18._s_0.Y = *(double *)((longlong)param_2 + 8);
  OnCurMousePanelOffset(param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

// SetMapRotateAngle_WrapperImpl @ 14b694640

void __cdecl UDS_VM_MapSpawn::SetMapRotateAngle_WrapperImpl(void *param_1,void *param_2)

{
  OnMapRotateAngle(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 14b694650

UClass * __cdecl UDS_VM_MapSpawn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MapSpawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MapSpawn",
               &Z_Registration_Info_UClass_UDS_VM_MapSpawn.InnerSingleton,
               StaticRegisterNativesUDS_VM_MapSpawn,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_MapSpawn>,InternalVTableHelperCtorCaller<UDS_VM_MapSpawn>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MapSpawn.InnerSingleton;
}

// UDS_VM_MapSpawn @ 14b699c70

UDS_VM_MapSpawn * __thiscall
UDS_VM_MapSpawn::UDS_VM_MapSpawn(UDS_VM_MapSpawn *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MapSpawn__6B_;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->MapRotateAngle = 0.0;
  this->MapType = 0;
  (this->CurMousePanelOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// UDS_VM_MapSpawn @ 14b699cd0

UDS_VM_MapSpawn * __thiscall
UDS_VM_MapSpawn::UDS_VM_MapSpawn(UDS_VM_MapSpawn *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MapSpawn__6B_;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->MapRotateAngle = 0.0;
  this->MapType = 0;
  (this->CurMousePanelOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UDS_VM_MapSpawn @ 14b69b0e0

void __thiscall UDS_VM_MapSpawn::~UDS_VM_MapSpawn(UDS_VM_MapSpawn *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MapSpawn__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d4f0

IClassDescriptor * __thiscall UDS_VM_MapSpawn::GetFieldNotificationDescriptor(UDS_VM_MapSpawn *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MapSpawn::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69e0e0

UClass * __cdecl UDS_VM_MapSpawn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MapSpawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MapSpawn",
               &Z_Registration_Info_UClass_UDS_VM_MapSpawn.InnerSingleton,
               StaticRegisterNativesUDS_VM_MapSpawn,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_MapSpawn>,InternalVTableHelperCtorCaller<UDS_VM_MapSpawn>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MapSpawn.InnerSingleton;
}

// GetTickableTickType @ 14b69e570

ETickableTickType __thiscall UDS_VM_MapSpawn::GetTickableTickType(UDS_VM_MapSpawn *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_MapSpawn @ 14b69e7b0

void __cdecl UDS_VM_MapSpawn::StaticRegisterNativesUDS_VM_MapSpawn(void)

{
  return;
}

// BindModel @ 14c002180

void __thiscall UDS_VM_MapSpawn::BindModel(UDS_VM_MapSpawn *this)

{
  int iVar1;
  UDS_WorldMapEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong local_res10 [3];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    iVar1 = this->MapType;
    local_res10[0] = (longlong)iVar1;
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<__int64_const_&>
                        ((TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar2->MapAngleChangeDelegate).Subscriptions,
                         (iVar1 >> 0x1f) * 0x17 + iVar1,local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_MapSpawn>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultTSDelegateUserPolicy> *)
               this_00,(UDS_VM_MapSpawn *)(local_res10 + 1),(pmf_c2c5b221 *)this);
  }
  return;
}

// InitViewModel @ 14c01ea90

void __thiscall UDS_VM_MapSpawn::InitViewModel(UDS_VM_MapSpawn *this)

{
  return;
}

// IsUpdate @ 14c0239c0

bool __thiscall UDS_VM_MapSpawn::IsUpdate(UDS_VM_MapSpawn *this)

{
  return true;
}

// OnCurMousePanelOffset @ 14c028de0

void __thiscall
UDS_VM_MapSpawn::OnCurMousePanelOffset(UDS_VM_MapSpawn *this,TVector2<double> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName local_18;
  int local_10;
  
  if (((param_1->field0_0x0)._s_0.X != (this->CurMousePanelOffset).field0_0x0._s_0.X) ||
     ((param_1->field0_0x0)._s_0.Y != (this->CurMousePanelOffset).field0_0x0._s_0.Y)) {
    uVar1 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uVar2 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uVar3 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_10 = FFieldNotificationClassDescriptor::CurMousePanelOffset.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::CurMousePanelOffset.FieldName;
    *(undefined4 *)&(this->CurMousePanelOffset).field0_0x0 = *(undefined4 *)&param_1->field0_0x0;
    *(undefined4 *)((longlong)&(this->CurMousePanelOffset).field0_0x0 + 4) = uVar1;
    *(undefined4 *)((longlong)&(this->CurMousePanelOffset).field0_0x0 + 8) = uVar2;
    *(undefined4 *)((longlong)&(this->CurMousePanelOffset).field0_0x0 + 0xc) = uVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnMapRotateAngle @ 14c02ccf0

void __thiscall UDS_VM_MapSpawn::OnMapRotateAngle(UDS_VM_MapSpawn *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MapRotateAngle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MapRotateAngle.FieldName;
  if (param_1 != this->MapRotateAngle) {
    this->MapRotateAngle = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14c030520

void __thiscall
UDS_VM_MapSpawn::OnSetViewModel(UDS_VM_MapSpawn *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

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

// OnUpdate @ 14c039eb0

void __thiscall UDS_VM_MapSpawn::OnUpdate(UDS_VM_MapSpawn *this,float param_1)

{
  return;
}

// UnbindModel @ 14c0486c0

void __thiscall UDS_VM_MapSpawn::UnbindModel(UDS_VM_MapSpawn *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<__int64_const_,float_const_>::Remove<UDS_VM_MapSpawn>
              (&pUVar1->MapAngleChangeDelegate,this);
    return;
  }
  return;
}

