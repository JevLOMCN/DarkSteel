// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b707580

UClass * __cdecl UDS_VM_WorldMap_Icon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_Icon.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_Icon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_Icon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_Icon,0x428,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMap_Icon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_Icon>,aFStackX_8,
               UDS_VM_WorldMapIndexBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_Icon.InnerSingleton;
}

// UDS_VM_WorldMap_Icon @ 14b7111c0

UDS_VM_WorldMap_Icon * __thiscall
UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon(UDS_VM_WorldMap_Icon *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->IconID = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  local_res8 = 0;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_Icon__6B_;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->IsHudShow = false;
  this->IsActiveActor = false;
  (this->StartReferencePosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)&local_res8);
  (this->TimerHandle_CallFunc).Handle = 0;
  this->SpawnTableID = 0;
  this->PhasingSpawnEntityID = 0;
  this->IsWandering = false;
  return this;
}

// UDS_VM_WorldMap_Icon @ 14b711260

UDS_VM_WorldMap_Icon * __thiscall
UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon(UDS_VM_WorldMap_Icon *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->IconID = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  local_res8 = 0;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_Icon__6B_;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->IsHudShow = false;
  this->IsActiveActor = false;
  (this->StartReferencePosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)&local_res8);
  (this->TimerHandle_CallFunc).Handle = 0;
  this->SpawnTableID = 0;
  this->PhasingSpawnEntityID = 0;
  this->IsWandering = false;
  return this;
}

// ~UDS_VM_WorldMap_Icon @ 14b713370

void __thiscall UDS_VM_WorldMap_Icon::~UDS_VM_WorldMap_Icon(UDS_VM_WorldMap_Icon *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_Icon__6B_;
  UDS_VM_WorldMapIndexBase::~UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716ad0

IClassDescriptor * __thiscall
UDS_VM_WorldMap_Icon::GetFieldNotificationDescriptor(UDS_VM_WorldMap_Icon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717b90

UClass * __cdecl UDS_VM_WorldMap_Icon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_Icon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_Icon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_Icon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_Icon,0x428,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMap_Icon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_Icon>,local_res8,
               UDS_VM_WorldMapIndexBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_Icon.InnerSingleton;
}

// GetTickableTickType @ 14b7187c0

ETickableTickType __thiscall UDS_VM_WorldMap_Icon::GetTickableTickType(UDS_VM_WorldMap_Icon *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_Icon @ 14b718a60

void __cdecl UDS_VM_WorldMap_Icon::StaticRegisterNativesUDS_VM_WorldMap_Icon(void)

{
  return;
}

// BindModel @ 14c004b20

void __thiscall UDS_VM_WorldMap_Icon::BindModel(UDS_VM_WorldMap_Icon *this)

{
  UDS_WorldMapEvent *pUVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar2;
  UDS_HudManager *pUVar3;
  UDS_EntityManager *pUVar4;
  
  UDS_VM_WorldMapIndexBase::BindModel((UDS_VM_WorldMapIndexBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_Icon>(&pUVar1->ChangedMapScaleDelegate,this);
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_Icon>(&pUVar1->ChangeMapPositionOffsetDelegate,this);
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->ChangedMapScaleDelegate).Subscriptions,(uint)this->_padding_,
                        (int *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_Icon>
              ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar2,(UDS_VM_WorldMap_Icon *)&stack0x00000010,(pmf_def18590 *)this);
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->ChangeMapPositionOffsetDelegate).Subscriptions,
                        (uint)this->_padding_,(int *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_Icon>
              ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar2,(UDS_VM_WorldMap_Icon *)&stack0x00000010,(pmf_def18590 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnCloseInitDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_Icon>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCloseInitDelegate,(UDS_VM_WorldMap_Icon *)&stack0x00000010,
               (pmf_a512fb3b *)this);
  }
  pUVar3 = UDS_HudManager::GetInst();
  if (pUVar3 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_Icon>
              (&pUVar3->OnHudShowDelegate,(UDS_VM_WorldMap_Icon *)&stack0x00000010,
               (pmf_05befccb *)this);
  }
  pUVar4 = UDS_EntityManager::GetInst();
  if (pUVar4 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_Icon>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar4->OnRemoveEntityEvent,(UDS_VM_WorldMap_Icon *)&stack0x00000010,
               (pmf_13ae803f *)this);
  }
  return;
}

// InitViewModel @ 14c0205a0

void __thiscall UDS_VM_WorldMap_Icon::InitViewModel(UDS_VM_WorldMap_Icon *this)

{
  return;
}

// IsUpdate @ 14c023a60

bool __thiscall UDS_VM_WorldMap_Icon::IsUpdate(UDS_VM_WorldMap_Icon *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (this->IsWandering == false) {
    bVar1 = (char)this->_padding_ != '\x01';
  }
  if ((char)this->_padding_ == '\0') {
    return this->IsHudShow;
  }
  return bVar1;
}

// MovingIconPosition @ 14c024bf0

void __thiscall
UDS_VM_WorldMap_Icon::MovingIconPosition
          (UDS_VM_WorldMap_Icon *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector2<double>_u_0 local_38 [3];
  
  if ((UCanvasPanelSlot *)this->_padding_ != (UCanvasPanelSlot *)0x0) {
    dVar3 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    dVar1 = ((param_2->field0_0x0)._s_0.X - (double)this->_padding_) * dVar3 *
            (double)*(float *)&this->_padding_;
    dVar3 = ((param_2->field0_0x0)._s_0.Y - (double)this->_padding_) * dVar3 *
            (double)*(float *)&this->_padding_;
    dVar2 = (double)(param_1 / *(float *)((longlong)&this->_padding_ + 4));
    dVar4 = (param_4->field0_0x0)._s_0.X - dVar1;
    dVar5 = (param_4->field0_0x0)._s_0.Y - dVar3;
    local_38[0]._0_8_ =
         (dVar4 - dVar4 * dVar2) + (double)param_1 * (param_3->field0_0x0)._s_0.X + dVar1;
    local_38[0]._8_8_ =
         (dVar5 - dVar5 * dVar2) + (double)param_1 * (param_3->field0_0x0)._s_0.Y + dVar3;
    UCanvasPanelSlot::SetPosition
              ((UCanvasPanelSlot *)this->_padding_,(TVector2<double> *)&local_38[0]._s_0);
  }
  return;
}

// OnChangedMapScale @ 14c025980

void __thiscall
UDS_VM_WorldMap_Icon::OnChangedMapScale
          (UDS_VM_WorldMap_Icon *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double local_28;
  double dStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  *(float *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)dVar2;
  local_28 = (param_3->field0_0x0)._s_0.X;
  dStack_20 = (param_3->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)local_28;
  this->_padding_ = (longlong)dStack_20;
  local_18 = *(undefined4 *)&param_2->field0_0x0;
  uStack_14 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  (**(code **)(this->_padding_ + 0x348))(local_18,param_1,&local_18,&local_28);
  return;
}

// OnChangedPanelTranslation @ 14c025a40

void __thiscall
UDS_VM_WorldMap_Icon::OnChangedPanelTranslation
          (UDS_VM_WorldMap_Icon *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  longlong local_28;
  longlong lStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  local_28 = this->_padding_;
  lStack_20 = this->_padding_;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_2->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar1;
  local_18 = (undefined4)this->_padding_;
  uStack_14 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uStack_10 = (undefined4)this->_padding_;
  uStack_c = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (**(code **)(this->_padding_ + 0x348))(local_18,(int)this->_padding_,&local_18,&local_28);
  return;
}

// OnCloseInit @ 14c028af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_Icon::OnCloseInit(UDS_VM_WorldMap_Icon *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  if ((this->TimerHandle_CallFunc).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,&this->TimerHandle_CallFunc);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->TimerHandle_CallFunc).Handle);
    }
    (this->TimerHandle_CallFunc).Handle = 0;
    this->_padding_ = 0;
    return;
  }
  this->_padding_ = 0;
  return;
}

// OnCurMapPositionOffset @ 14c028d40

void __thiscall
UDS_VM_WorldMap_Icon::OnCurMapPositionOffset
          (UDS_VM_WorldMap_Icon *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double local_28;
  double dStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  *(float *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)dVar2;
  local_28 = (param_3->field0_0x0)._s_0.X;
  dStack_20 = (param_3->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)local_28;
  this->_padding_ = (longlong)dStack_20;
  local_18 = *(undefined4 *)&param_2->field0_0x0;
  uStack_14 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  (**(code **)(this->_padding_ + 0x348))(local_18,param_1,&local_18,&local_28);
  return;
}

// OnHudShowEvent @ 14c02a920

void __thiscall
UDS_VM_WorldMap_Icon::OnHudShowEvent(UDS_VM_WorldMap_Icon *this,EDS_WindowLayerGroupType *param_1)

{
  this->IsHudShow = *param_1 < Hud;
  return;
}

// OnRemoveEntity @ 14c02e7f0

void __thiscall UDS_VM_WorldMap_Icon::OnRemoveEntity(UDS_VM_WorldMap_Icon *this,ulong64 *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((((this->PhasingSpawnEntityID != 0) && (*param_1 != 0)) &&
      (this->PhasingSpawnEntityID == *param_1)) &&
     (bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->Widget,(void *)0x0),
     !bVar1)) {
    (**(code **)(this->_padding_ + 0x2b0))(this);
    pUVar2 = FWeakObjectPtr::Get(&(this->Widget).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2);
  }
  return;
}

// OnSetViewModel @ 14c038c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_Icon::OnSetViewModel
          (UDS_VM_WorldMap_Icon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  int iVar2;
  long64 lVar3;
  code *pcVar4;
  double dVar5;
  longlong lVar6;
  bool bVar7;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar8;
  FTimerManager *pFVar9;
  FTimerData *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  double dVar13;
  UDS_VM_WorldMap_Icon *local_res10;
  FDelegateAllocation local_d8;
  TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> local_c8;
  undefined1 local_b8 [12];
  undefined4 uStack_ac;
  FName local_a8;
  int local_a0;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  double local_78;
  double local_70;
  undefined1 local_68;
  undefined8 local_60;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> local_58 [3];
  
  local_98.Object = param_1->Object;
  local_98.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_WorldMapIndexBase::OnSetViewModel((UDS_VM_WorldMapIndexBase *)this,&local_98);
  local_88.Object = param_1->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapIconInfo>(&local_c8,&local_88);
  if (local_c8.Object == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    goto LAB_14c039160;
  }
  this->_padding_ = (local_c8.Object)->_padding_;
  dVar13 = ((local_c8.Object)->MapStartPos).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)((local_c8.Object)->MapStartPos).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar13;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&(local_c8.Object)->_padding_ + 4);
  this->IconID = (local_c8.Object)->IconID;
  lVar6 = (local_c8.Object)->_padding_;
  this->_padding_ = (local_c8.Object)->_padding_;
  this->_padding_ = lVar6;
  dVar13 = ((local_c8.Object)->ReferencePosition).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)((local_c8.Object)->ReferencePosition).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar13;
  this->IsWandering = (local_c8.Object)->IsWandering;
  this->SpawnTableID = (local_c8.Object)->SpawnTableID;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_c8.Object)->_padding_);
  this->PhasingSpawnEntityID = (local_c8.Object)->PhasingSpawnEntityID;
  (this->Widget).WeakPtr = ((local_c8.Object)->Widget).WeakPtr;
  pTVar8 = MakeContext<FDS_ViewModelConext_WorldMapIconToolTip>(local_58);
  plVar1 = &this->_padding_;
  if ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)plVar1 != pTVar8) {
    *plVar1 = (longlong)pTVar8->Object;
    pTVar8->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&pTVar8->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58[0].SharedReferenceCount.ReferenceController);
  if (*plVar1 != 0) {
    *(undefined4 *)(*plVar1 + 0x18) = 0x1b1;
    lVar6 = this->_padding_;
    if (*plVar1 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(int *)(*plVar1 + 0x20) = (int)lVar6;
    if (local_c8.Object == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = (local_c8.Object)->MapIndexSpawnTableID;
    if (*plVar1 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(int *)(*plVar1 + 0x24) = iVar2;
    if (local_c8.Object == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = (local_c8.Object)->NpcBaseTableID;
    if (*plVar1 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(int *)(*plVar1 + 0x28) = iVar2;
    if (local_c8.Object == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = (local_c8.Object)->QuestBoardID;
    if (*plVar1 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(long64 *)(*plVar1 + 0x78) = lVar3;
  }
  if ((this->TimerHandle_CallFunc).Handle != 0) {
    pFVar9 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar10 = FTimerManager::FindTimer(pFVar9,&this->TimerHandle_CallFunc);
    if (pFVar10 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar9,(FTimerHandle)(this->TimerHandle_CallFunc).Handle);
    }
    (this->TimerHandle_CallFunc).Handle = 0;
  }
  if (this->IsWandering == true) {
    local_b8._8_4_ = 0;
    local_b8._0_8_ = UpdateIconPosition;
    uStack_ac = local_60._4_4_;
    local_68 = 0;
    local_60 = &local_d8;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_d8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMap_Icon____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res10);
      puVar11[4] = local_b8._0_8_;
      puVar11[5] = stack0xffffffffffffff50;
    }
    pFVar9 = FDS_TimerManager::Get((UObject *)0x0);
    FTimerManager::SetTimer
              (pFVar9,&this->TimerHandle_CallFunc,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_d8
               ,__real_3c23d70a,true,__real_bf800000);
    if (local_d8.DelegateSize != 0) {
      if (local_d8.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
      goto LAB_14c039053;
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
  }
LAB_14c039053:
  if ((char)this->_padding_ == '\0') {
    this->IsHudShow = true;
  }
  dVar13 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
  dVar5 = ((double)this->_padding_ - (double)this->_padding_) * dVar13 *
          (double)*(float *)&this->_padding_;
  dVar13 = ((double)this->_padding_ - (double)this->_padding_) * dVar13 *
           (double)*(float *)&this->_padding_;
  (this->StartReferencePosition).field0_0x0._s_0.X = dVar5;
  (this->StartReferencePosition).field0_0x0._s_0.Y = dVar13;
  UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate((UDS_VM_WorldMapIndexBase *)this,LEVEL3);
  UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
  _local_b8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_78 = dVar5;
  local_70 = dVar13;
  (**(code **)(this->_padding_ + 0x348))(this,(int)this->_padding_,local_b8,&local_78);
  local_a0 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
LAB_14c039160:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c03aff0

void __thiscall UDS_VM_WorldMap_Icon::OnUpdate(UDS_VM_WorldMap_Icon *this,float param_1)

{
  bool bVar1;
  UDS_MovementCore *this_00;
  double dVar2;
  double local_48;
  double local_40;
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
    local_48 = (local_28._s_0.X - (double)this->_padding_) * dVar2 *
               (double)*(float *)&this->_padding_;
    local_38 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_40 = (local_28._s_0.Y - (double)this->_padding_) * dVar2 *
               (double)*(float *)&this->_padding_;
    (**(code **)(this->_padding_ + 0x348))(this,(int)this->_padding_,&local_38,&local_48);
  }
  return;
}

// UnbindModel @ 14c049510

void __thiscall UDS_VM_WorldMap_Icon::UnbindModel(UDS_VM_WorldMap_Icon *this)

{
  UDS_WorldMapEvent *pUVar1;
  UDS_HudManager *pUVar2;
  UDS_EntityManager *pUVar3;
  
  UDS_VM_WorldMapIndexBase::UnbindModel((UDS_VM_WorldMapIndexBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_Icon>(&pUVar1->ChangedMapScaleDelegate,this);
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_Icon>(&pUVar1->ChangeMapPositionOffsetDelegate,this);
    FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_Icon>(&pUVar1->ChangedPanelTranslationDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnCloseInitDelegate,
               this);
  }
  pUVar2 = UDS_HudManager::GetInst();
  if (pUVar2 != (UDS_HudManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnHudShowDelegate,this
              );
  }
  pUVar3 = UDS_EntityManager::GetInst();
  if (pUVar3 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnRemoveEntityEvent,
               this);
  }
  return;
}

// UpdateIconPosition @ 14c04aba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_Icon::UpdateIconPosition(UDS_VM_WorldMap_Icon *this)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  bool bVar3;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar4;
  UDS_MovementCore *this_01;
  int iVar5;
  ForAnyElementType FVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_88;
  TVector2<double>_u_0 local_78;
  TVector<double>_u_0 local_68 [3];
  
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 == (UDS_EntityManager *)0x0) {
    return;
  }
  UDS_EntityManager::GetEntityIDArray(this_00,&local_88,NPC);
  iVar5 = local_88.ArrayNum;
  pFVar1 = local_88.AllocatorInstance.Data + (longlong)iVar5 * 8;
  FVar6.Data = local_88.AllocatorInstance.Data;
  while( true ) {
    if (local_88.ArrayNum != iVar5) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar6.Data == pFVar1) break;
    pFVar4 = UDS_EntityManager::FindEntityBase(this_00,*(ulong64 *)FVar6.Data);
    if ((pFVar4 != (FDS_EntityBase *)0x0) && (this->SpawnTableID == (longlong)pFVar4->SpawnTableID))
    {
      (**(code **)(pFVar4->_padding_ + 0x78))(pFVar4);
      bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res18,(void *)0x0
                        );
      if (!bVar3) {
        this->IsActiveActor = true;
        this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res18);
        UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_68[0]._s_0);
        dVar7 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
        dVar9 = (double)*(float *)&this->_padding_;
        if ((UCanvasPanelSlot *)this->_padding_ != (UCanvasPanelSlot *)0x0) {
          dVar10 = ((double)CONCAT44(local_68[0]._4_4_,local_68[0]._0_4_) - (double)this->_padding_)
                   * dVar7 * dVar9;
          dVar11 = ((double)CONCAT44(local_68[0]._12_4_,local_68[0]._8_4_) - (double)this->_padding_
                   ) * dVar7 * dVar9;
          dVar2 = ((double)this->_padding_ - (double)this->_padding_) * dVar7 * dVar9 - dVar10;
          dVar8 = (double)(*(float *)&this->_padding_ / *(float *)((longlong)&this->_padding_ + 4));
          dVar9 = ((double)this->_padding_ - (double)this->_padding_) * dVar7 * dVar9 - dVar11;
          local_78._s_0.X =
               (dVar2 - dVar8 * dVar2) +
               (double)*(float *)&this->_padding_ * (double)this->_padding_ + dVar10;
          local_78._s_0.Y =
               (dVar9 - dVar8 * dVar9) +
               (double)*(float *)&this->_padding_ * (double)this->_padding_ + dVar11;
          UCanvasPanelSlot::SetPosition
                    ((UCanvasPanelSlot *)this->_padding_,(TVector2<double> *)&local_78._s_0);
        }
LAB_14c04ae50:
        if (local_88.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_88.AllocatorInstance.Data);
        return;
      }
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (this->IsActiveActor == false) {
    dVar9 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    this->IsActiveActor = false;
    local_78._s_0.X =
         ((double)this->_padding_ - (double)this->_padding_) * dVar9 *
         (double)*(float *)&this->_padding_;
    local_78._s_0.Y =
         ((double)this->_padding_ - (double)this->_padding_) * dVar9 *
         (double)*(float *)&this->_padding_;
    local_68[0]._0_4_ = (undefined4)this->_padding_;
    local_68[0]._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_68[0]._8_4_ = (undefined4)this->_padding_;
    local_68[0]._12_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    (**(code **)(this->_padding_ + 0x348))(this,(int)this->_padding_,local_68,&local_78);
  }
  goto LAB_14c04ae50;
}

// WorldMapChangeIconPosition @ 14c04ffd0

void __thiscall
UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
          (UDS_VM_WorldMap_Icon *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78;
  TVector2<double>_u_0 local_68 [6];
  
  if (this->_padding_ != 0) {
    dVar5 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    dVar6 = (double)(param_1 / *(float *)((longlong)&this->_padding_ + 4));
    dVar1 = (param_3->field0_0x0)._s_0.X;
    dVar4 = ((param_3->field0_0x0)._s_0.X -
            ((double)this->_padding_ - (double)this->_padding_) * dVar5 *
            (double)*(float *)&this->_padding_) * dVar6;
    dVar2 = (double)param_1 * (param_2->field0_0x0)._s_0.Y;
    dVar3 = (double)param_1 * (param_2->field0_0x0)._s_0.X;
    dVar6 = ((param_3->field0_0x0)._s_0.Y -
            ((double)this->_padding_ - (double)this->_padding_) * dVar5 *
            (double)*(float *)&this->_padding_) * dVar6;
    if ((int)this->_padding_ == 0) {
      dVar5 = (((param_3->field0_0x0)._s_0.Y + dVar2) - dVar6) +
              ((this->StartReferencePosition).field0_0x0._s_0.Y - (param_3->field0_0x0)._s_0.Y) +
              ((double)this->_padding_ - (double)this->_padding_);
      dVar1 = ((dVar1 + dVar3) - dVar4) + ((this->StartReferencePosition).field0_0x0._s_0.X - dVar1)
              + ((double)this->_padding_ - (double)this->_padding_);
    }
    else {
      local_88._s_0.X = dVar3 - dVar4;
      local_88._s_0.Y = dVar2 - dVar6;
      dVar5 = local_88._s_0.Y + (param_3->field0_0x0)._s_0.Y;
      dVar1 = local_88._s_0.X + dVar1;
      UDS_VM_WorldMapIndexBase::CheckRangeOverIcon
                ((UDS_VM_WorldMapIndexBase *)this,(TVector2<double> *)&local_88._s_0);
      local_68[0]._0_8_ = (param_3->field0_0x0)._s_0.X;
      local_68[0]._8_8_ = (param_3->field0_0x0)._s_0.Y;
      local_88._s_0.X = dVar3;
      local_88._s_0.Y = dVar2;
      local_78._s_0.X = dVar1;
      local_78._s_0.Y = dVar5;
      UDS_VM_WorldMapIndexBase::BroadCastRangeOverIconPosition
                ((UDS_VM_WorldMapIndexBase *)this,(TVector2<double> *)&local_78._s_0,
                 (TVector2<double> *)&local_68[0]._s_0,(TVector2<double> *)&local_88._s_0);
    }
    local_78._s_0.X = dVar1;
    local_78._s_0.Y = dVar5;
    UCanvasPanelSlot::SetPosition
              ((UCanvasPanelSlot *)this->_padding_,(TVector2<double> *)&local_78._s_0);
  }
  return;
}

